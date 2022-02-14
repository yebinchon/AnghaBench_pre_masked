
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct sort_column {char* name; char* val; int nvl; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int **,int ) ;
 int FUNC_4 (int ,char*,char**) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_10(nvlist_t *VAR_0, char *VAR_1, bool VAR_2)
{
 nvpair_t *VAR_3;
 nvlist_t *VAR_4;
 int VAR_5, VAR_6;
 uint64_t VAR_7, VAR_8;
 struct sort_column VAR_9, VAR_10;


 FUNC_3(VAR_0, &VAR_4, 0);

 VAR_6 = FUNC_1(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {

  VAR_3 = FUNC_5(VAR_4, ((void*)0));
  FUNC_7(VAR_3, &VAR_9.nvl);
  FUNC_4(VAR_9.nvl, "name", &VAR_9.name);
  FUNC_4(VAR_9.nvl, VAR_1, &VAR_9.val);

  while ((VAR_3 = FUNC_5(VAR_4, VAR_3)) != ((void*)0)) {

   FUNC_7(VAR_3, &VAR_10.nvl);
   FUNC_4(VAR_10.nvl, "name", &VAR_10.name);
   FUNC_4(VAR_10.nvl, VAR_1, &VAR_10.val);


   if (FUNC_8(VAR_1, "creation") == 0 ||
       FUNC_8(VAR_1, "used") == 0 ||
       FUNC_8(VAR_1, "usedds") == 0 ||
       FUNC_8(VAR_1, "usedsnap") == 0 ||
       FUNC_8(VAR_1, "usedrefreserv") == 0) {

    VAR_7 = FUNC_9(VAR_9.val, ((void*)0), 10);
    VAR_8 = FUNC_9(VAR_10.val, ((void*)0), 10);

    if ((VAR_7 < VAR_8 && VAR_2) ||
        (VAR_7 > VAR_8 && !VAR_2))
     VAR_9 = VAR_10;
   }


   else if (FUNC_8(VAR_1, "name") == 0 ||
     FUNC_8(VAR_1, "origin") == 0) {
    if ((FUNC_8(VAR_9.val, VAR_10.val) < 0 && VAR_2) ||
        (FUNC_8(VAR_9.val, VAR_10.val) > 0 && !VAR_2))
     VAR_9 = VAR_10;
   }
  }







  FUNC_2(VAR_0, VAR_9.name, VAR_9.nvl);
  FUNC_6(VAR_4, VAR_9.name);
 }

 FUNC_0(VAR_4);

 return 0;
}
