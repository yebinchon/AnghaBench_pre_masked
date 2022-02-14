
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
struct section {scalar_t__ type; int link; scalar_t__ off; int scn; } ;
struct TYPE_9__ {int e_machine; } ;
struct readelf {size_t shnum; scalar_t__ ec; TYPE_1__ ehdr; struct section* sl; } ;
struct TYPE_11__ {scalar_t__ d_size; } ;
struct TYPE_10__ {scalar_t__ d_tag; } ;
typedef TYPE_2__ GElf_Dyn ;
typedef TYPE_3__ Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct readelf*,TYPE_2__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_6 (struct section*,int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_3)
{
 GElf_Dyn VAR_4;
 Elf_Data *VAR_5;
 struct section *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = 0;

 for (VAR_8 = 0; (size_t)VAR_8 < VAR_3->shnum; VAR_8++) {
  VAR_6 = &VAR_3->sl[VAR_8];
  if (VAR_6->type != VAR_2)
   continue;
  (void) FUNC_3();
  if ((VAR_5 = FUNC_4(VAR_6->scn, ((void*)0))) == ((void*)0)) {
   VAR_7 = FUNC_3();
   if (VAR_7 != 0)
    FUNC_8("elf_getdata failed: %s", FUNC_2(-1));
   continue;
  }
  if (VAR_5->d_size <= 0)
   continue;

  VAR_9 = 1;


  VAR_12 = 0;
  if (!FUNC_6(VAR_6, &VAR_11))
   continue;
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if (FUNC_5(VAR_5, VAR_10, &VAR_4) != &VAR_4) {
    FUNC_8("gelf_getdyn failed: %s",
        FUNC_2(-1));
    continue;
   }
   VAR_12 ++;
   if (VAR_4.d_tag == VAR_0)
    break;
                }

  FUNC_7("\nDynamic section at offset 0x%jx", (uintmax_t)VAR_6->off);
  FUNC_7(" contains %u entries:\n", VAR_12);

  if (VAR_3->ec == VAR_1)
   FUNC_7("%5s%12s%28s\n", "Tag", "Type", "Name/Value");
  else
   FUNC_7("%5s%20s%28s\n", "Tag", "Type", "Name/Value");

  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   if (FUNC_5(VAR_5, VAR_10, &VAR_4) != &VAR_4)
    continue;

   if (VAR_3->ec == VAR_1)
    FUNC_7(" 0x%8.8jx", (uintmax_t)VAR_4.d_tag);
   else
    FUNC_7(" 0x%16.16jx", (uintmax_t)VAR_4.d_tag);
   FUNC_7(" %-20s", FUNC_0(VAR_3->ehdr.e_machine,
       VAR_4.d_tag));

   FUNC_1(VAR_3, &VAR_4, VAR_6->link);
  }
 }

 if (!VAR_9)
  FUNC_7("\nThere is no dynamic section in this file.\n");
}
