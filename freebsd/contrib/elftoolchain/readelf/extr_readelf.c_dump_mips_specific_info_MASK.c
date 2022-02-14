
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {scalar_t__ type; int * name; } ;
struct readelf {size_t shnum; struct section* sl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*,struct section*) ;
 int FUNC_1 (struct readelf*,struct section*) ;
 int FUNC_2 (struct readelf*,struct section*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4(struct readelf *VAR_3)
{
 struct section *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);
 for (VAR_5 = 0; (size_t) VAR_5 < VAR_3->shnum; VAR_5++) {
  VAR_4 = &VAR_3->sl[VAR_5];
  if (VAR_4->name != ((void*)0) && (!FUNC_3(VAR_4->name, ".MIPS.options") ||
      (VAR_4->type == VAR_1))) {
   FUNC_1(VAR_3, VAR_4);
  }
 }

 if (VAR_4->name != ((void*)0) && (!FUNC_3(VAR_4->name, ".MIPS.abiflags") ||
     (VAR_4->type == VAR_0)))
  FUNC_0(VAR_3, VAR_4);





 for (VAR_5 = 0; (size_t) VAR_5 < VAR_3->shnum; VAR_5++) {
  VAR_4 = &VAR_3->sl[VAR_5];
  if (VAR_4->name != ((void*)0) && (!FUNC_3(VAR_4->name, ".reginfo") ||
      (VAR_4->type == VAR_2)))
   FUNC_2(VAR_3, VAR_4);
 }
}
