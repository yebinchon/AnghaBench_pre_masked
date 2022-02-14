
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int **) ;
 int * FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_2, nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 int VAR_5, VAR_6;
 nvlist_t *VAR_7;
 nvpair_t *VAR_8;
 boolean_t VAR_9;

 if (FUNC_3(VAR_3, "snaps", &VAR_7) != 0)
  return (FUNC_0(VAR_0));
 VAR_9 = FUNC_2(VAR_3, "defer");

 VAR_6 = FUNC_6(VAR_2);
 for (VAR_8 = FUNC_4(VAR_7, ((void*)0)); VAR_8 != ((void*)0);
     VAR_8 = FUNC_4(VAR_7, VAR_8)) {
  const char *VAR_10 = FUNC_5(VAR_8);





  if (FUNC_7(VAR_10, VAR_2, VAR_6) != 0 ||
      (VAR_10[VAR_6] != '/' && VAR_10[VAR_6] != '@'))
   return (FUNC_0(VAR_1));

  FUNC_8(FUNC_5(VAR_8));



 }

 return (FUNC_1(VAR_7, VAR_9, VAR_4));
}
