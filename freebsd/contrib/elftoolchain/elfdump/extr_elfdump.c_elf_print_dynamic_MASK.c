
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
struct section {scalar_t__ type; scalar_t__ sz; int link; int scn; int name; } ;
struct elfdump {size_t shnum; int flags; int elf; int snl; struct section* sl; } ;
typedef int idx ;
struct TYPE_10__ {scalar_t__ d_size; } ;
struct TYPE_8__ {int d_ptr; int d_val; } ;
struct TYPE_9__ {int d_tag; TYPE_1__ d_un; } ;
typedef TYPE_2__ GElf_Dyn ;
typedef TYPE_3__ Elf_Data ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_3__* FUNC_6 (int ,int *) ;
 char* FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct elfdump*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_10 (struct section*,int*) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(struct elfdump *VAR_2)
{
 struct section *VAR_3;
 const char *VAR_4;
 char VAR_5[13];
 Elf_Data *VAR_6;
 GElf_Dyn VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_3 = ((void*)0);
 for (VAR_9 = 0; (size_t)VAR_9 < VAR_2->shnum; VAR_9++) {
  VAR_3 = &VAR_2->sl[VAR_9];
  if (VAR_3->type == VAR_0 &&
      (FUNC_1(&VAR_2->snl) || FUNC_8(VAR_2, VAR_3->name)))
   break;
 }
 if ((size_t)VAR_9 >= VAR_2->shnum)
  return;

 if (VAR_2->flags & VAR_1) {
  FUNC_0("Dynamic Section:  %s\n", VAR_3->name);
  FUNC_0("     index  tag               value\n");
 } else
  FUNC_0("\ndynamic:\n");
 (void) FUNC_5();
 if ((VAR_6 = FUNC_6(VAR_3->scn, ((void*)0))) == ((void*)0)) {
  VAR_8 = FUNC_5();
  if (VAR_8 != 0)
   FUNC_12("elf_getdata failed: %s", FUNC_4(VAR_8));
  return;
 }
 FUNC_2(VAR_6->d_size == VAR_3->sz);
 if (!FUNC_10(VAR_3, &VAR_10))
  return;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (FUNC_9(VAR_6, VAR_9, &VAR_7) != &VAR_7) {
   FUNC_12("gelf_getdyn failed: %s", FUNC_4(-1));
   continue;
  }

  if (VAR_2->flags & VAR_1) {
   FUNC_11(VAR_5, sizeof(VAR_5), "[%d]", VAR_9);
   FUNC_0("%10s  %-16s ", VAR_5, FUNC_3(VAR_7.d_tag));
  } else {
   FUNC_0("\n");
   FUNC_0("entry: %d\n", VAR_9);
   FUNC_0("\td_tag: %s\n", FUNC_3(VAR_7.d_tag));
  }
  switch(VAR_7.d_tag) {
  case 153:
  case 139:
  case 141:
  case 140:
   if ((VAR_4 = FUNC_7(VAR_2->elf, VAR_3->link,
        VAR_7.d_un.d_val)) == ((void*)0))
    VAR_4 = "";
   if (VAR_2->flags & VAR_1)
    FUNC_0("%#-16jx %s\n", (uintmax_t)VAR_7.d_un.d_val,
        VAR_4);
   else
    FUNC_0("\td_val: %s\n", VAR_4);
   break;
  case 149:
  case 147:
  case 144:
  case 145:
  case 146:
  case 138:
  case 135:
  case 142:
  case 143:
  case 150:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   if (VAR_2->flags & VAR_1)
    FUNC_0("%#jx\n", (uintmax_t)VAR_7.d_un.d_val);
   else
    FUNC_0("\td_val: %ju\n",
        (uintmax_t)VAR_7.d_un.d_val);
   break;
  case 151:
  case 156:
  case 157:
  case 137:
  case 134:
  case 155:
  case 158:
  case 148:
  case 154:
  case 159:
   if (VAR_2->flags & VAR_1)
    FUNC_0("%#jx\n", (uintmax_t)VAR_7.d_un.d_ptr);
   else
    FUNC_0("\td_ptr: %#jx\n",
        (uintmax_t)VAR_7.d_un.d_ptr);
   break;
  case 152:
  case 136:
  case 133:
  default:
   if (VAR_2->flags & VAR_1)
    FUNC_0("\n");
   break;
  }
 }
}
