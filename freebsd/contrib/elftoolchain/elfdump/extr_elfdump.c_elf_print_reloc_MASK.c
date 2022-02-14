
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {scalar_t__ type; int scn; int name; } ;
struct elfdump {size_t shnum; int snl; struct section* sl; } ;
typedef int Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (struct elfdump*,struct section*,int *) ;
 int FUNC_5 (struct elfdump*,struct section*,int *) ;
 scalar_t__ FUNC_6 (struct elfdump*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct elfdump *VAR_2)
{
 struct section *VAR_3;
 Elf_Data *VAR_4;
 size_t VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->shnum; VAR_5++) {
  VAR_3 = &VAR_2->sl[VAR_5];
  if ((VAR_3->type == VAR_0 || VAR_3->type == VAR_1) &&
      (FUNC_0(&VAR_2->snl) || FUNC_6(VAR_2, VAR_3->name))) {
   (void) FUNC_2();
   if ((VAR_4 = FUNC_3(VAR_3->scn, ((void*)0))) == ((void*)0)) {
    VAR_6 = FUNC_2();
    if (VAR_6 != 0)
     FUNC_7("elf_getdata failed: %s",
         FUNC_1(VAR_6));
    continue;
   }
   if (VAR_3->type == VAR_0)
    FUNC_4(VAR_2, VAR_3, VAR_4);
   else
    FUNC_5(VAR_2, VAR_3, VAR_4);
  }
 }
}
