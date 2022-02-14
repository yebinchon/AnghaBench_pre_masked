
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 scalar_t__ FUNC_7 (char const*,int *,int *) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_5(VAR_2);
 for (nvpair_t *VAR_7 = FUNC_2(VAR_3, ((void*)0));
     VAR_7 != ((void*)0); VAR_7 = FUNC_2(VAR_3, VAR_7)) {
  const char *VAR_8 = FUNC_3(VAR_7);
  const char *VAR_9 = FUNC_4(VAR_8, '#');





  if (VAR_9 == ((void*)0) ||
      FUNC_7(VAR_9 + 1, ((void*)0), ((void*)0)) != 0)
   return (FUNC_0(VAR_0));




  if (FUNC_6(VAR_8, VAR_2, VAR_6) != 0 ||
      (VAR_8[VAR_6] != '/' && VAR_8[VAR_6] != '#'))
   return (FUNC_0(VAR_1));
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 return (VAR_5);
}
