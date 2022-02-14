
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 for (nvpair_t *VAR_4 = FUNC_2(VAR_2, ((void*)0));
     VAR_4 != ((void*)0); VAR_4 = FUNC_2(VAR_2, VAR_4)) {
  char *VAR_5;




  if (FUNC_4(VAR_4, &VAR_5) != 0)
   return (FUNC_0(VAR_0));



  for (nvpair_t *VAR_6 = FUNC_2(VAR_2, VAR_4);
      VAR_6 != ((void*)0); VAR_6 = FUNC_2(VAR_2, VAR_6)) {
   if (FUNC_5(FUNC_3(VAR_4), FUNC_3(VAR_6)) == 0)
    return (FUNC_0(VAR_0));
  }
 }

 return (FUNC_1(VAR_2, VAR_3));
}
