
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct section {scalar_t__ type; scalar_t__ link; scalar_t__ sz; int scn; } ;
struct elfdump {size_t shnum; struct section* sl; } ;
struct TYPE_3__ {scalar_t__ d_size; int * d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct section*,int*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct elfdump *VAR_1, int VAR_2, uint16_t **VAR_3, int *VAR_4)
{
 struct section *VAR_5;
 Elf_Data *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_5 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_1->shnum; VAR_7++) {
  VAR_5 = &VAR_1->sl[VAR_7];
  if (VAR_5->type == VAR_0 && VAR_5->link == (uint32_t)VAR_2)
   break;
 }
 if (VAR_7 >= VAR_1->shnum) {
  *VAR_3 = ((void*)0);
  return;
 }
 (void) FUNC_2();
 if ((VAR_6 = FUNC_3(VAR_5->scn, ((void*)0))) == ((void*)0)) {
  VAR_8 = FUNC_2();
  if (VAR_8 != 0)
   FUNC_5("elf_getdata failed: %s", FUNC_1(VAR_8));
  *VAR_3 = ((void*)0);
  return;
 }

 *VAR_3 = VAR_6->d_buf;
 FUNC_0(VAR_6->d_size == VAR_5->sz);
 if (!FUNC_4(VAR_5, VAR_4))
  *VAR_4 = 0;
}
