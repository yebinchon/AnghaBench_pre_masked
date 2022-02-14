
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,char const*) ;
 int * FUNC_1 (int const*,char const*) ;
 char* FUNC_2 (int const*,int*,void**) ;
 int FUNC_3 (int const*,char const*,int const*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_1, const nvlist_t *VAR_2)
{
 const nvlist_t *VAR_3;
 void *VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = ((void*)0);
 while ((VAR_5 = FUNC_2(VAR_2, &VAR_6, &VAR_4)) != ((void*)0)) {
  if (!FUNC_0(VAR_1, VAR_5))
   return (VAR_0);

  VAR_3 = FUNC_1(VAR_1, VAR_5);

  VAR_7 = FUNC_3(VAR_3, VAR_5,
      VAR_2);

  if (VAR_7 != 0)
   return (VAR_7);
 }

 return (0);
}
