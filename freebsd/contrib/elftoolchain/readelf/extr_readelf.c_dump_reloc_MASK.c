
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {scalar_t__ type; int scn; } ;
struct readelf {size_t shnum; struct section* sl; } ;
typedef int Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct readelf*,struct section*,int *) ;
 int FUNC_1 (struct readelf*,struct section*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct readelf *VAR_2)
{
 struct section *VAR_3;
 Elf_Data *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; (size_t)VAR_5 < VAR_2->shnum; VAR_5++) {
  VAR_3 = &VAR_2->sl[VAR_5];
  if (VAR_3->type == VAR_0 || VAR_3->type == VAR_1) {
   (void) FUNC_3();
   if ((VAR_4 = FUNC_4(VAR_3->scn, ((void*)0))) == ((void*)0)) {
    VAR_6 = FUNC_3();
    if (VAR_6 != 0)
     FUNC_5("elf_getdata failed: %s",
         FUNC_2(VAR_6));
    continue;
   }
   if (VAR_3->type == VAR_0)
    FUNC_0(VAR_2, VAR_3, VAR_4);
   else
    FUNC_1(VAR_2, VAR_3, VAR_4);
  }
 }
}
