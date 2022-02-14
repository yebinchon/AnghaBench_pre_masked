
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ minor_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int *,char*,int **) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char**) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int,scalar_t__*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 nvpair_t *VAR_4;
 nvlist_t *VAR_5;
 int VAR_6 = -1;
 int VAR_7;
 minor_t VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_2, "holds", &VAR_5);
 if (VAR_7 != 0)
  return (FUNC_0(VAR_0));


 for (VAR_4 = FUNC_4(VAR_5, ((void*)0)); VAR_4 != ((void*)0);
     VAR_4 = FUNC_4(VAR_5, VAR_4)) {
  char *VAR_9;

  VAR_7 = FUNC_5(VAR_4, &VAR_9);
  if (VAR_7 != 0)
   return (FUNC_0(VAR_7));

  if (FUNC_6(VAR_9) == 0)
   return (FUNC_0(VAR_0));
 }

 if (FUNC_2(VAR_2, "cleanup_fd", &VAR_6) == 0) {
  VAR_7 = FUNC_7(VAR_6, &VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
 }

 VAR_7 = FUNC_1(VAR_5, VAR_8, VAR_3);
 if (VAR_8 != 0)
  FUNC_8(VAR_6);
 return (VAR_7);
}
