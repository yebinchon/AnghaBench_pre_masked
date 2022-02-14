
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,char*,char**) ;
 int VAR_1 ;

__attribute__((used)) static const char *
FUNC_4(nvlist_t *VAR_2, nvlist_t **VAR_3)
{
 char *VAR_4;

 if (FUNC_3(VAR_2, "origin", &VAR_4) == 0) {
  if (FUNC_1(VAR_3) != 0) {
   FUNC_2(VAR_1,
       "bectl list: failed to allocate origin prop nvlist\n");
   return (((void*)0));
  }
  if (FUNC_0(VAR_0, VAR_4, *VAR_3) != 0) {

   FUNC_2(VAR_1,
       "bectl list: failed to fetch origin properties\n");
   return (((void*)0));
  }

  return (VAR_4);
 }
 return (((void*)0));
}
