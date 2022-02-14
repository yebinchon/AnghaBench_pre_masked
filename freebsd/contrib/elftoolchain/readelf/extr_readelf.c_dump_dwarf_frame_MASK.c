
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int * name; } ;
struct readelf {size_t shnum; struct section* sl; int dbg; } ;


 int VAR_0 ;
 int FUNC_0 (struct readelf*,struct section*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_1, int VAR_2)
{
 struct section *VAR_3;
 int VAR_4;

 (void) FUNC_1(VAR_1->dbg, VAR_0);

 for (VAR_4 = 0; (size_t) VAR_4 < VAR_1->shnum; VAR_4++) {
  VAR_3 = &VAR_1->sl[VAR_4];
  if (VAR_3->name != ((void*)0) && (!FUNC_2(VAR_3->name, ".debug_frame") ||
      !FUNC_2(VAR_3->name, ".eh_frame")))
   FUNC_0(VAR_1, VAR_3, VAR_2);
 }
}
