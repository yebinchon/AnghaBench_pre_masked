
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 char* FUNC_0 (int const*,char*,int *) ;
 int * VAR_1 ;
 int FUNC_1 (int const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static bool
FUNC_3(const nvlist_t *VAR_2, const nvlist_t *VAR_3, int VAR_4)
{
 const char *VAR_5;

 if ((VAR_0 & VAR_4) == 0)
  return (0);

 VAR_5 = FUNC_0(VAR_3, "name", ((void*)0));
 if (VAR_5 == ((void*)0))
  return (0);


 if (VAR_1 != ((void*)0) && FUNC_2(VAR_5, VAR_1) == 0)
  return (1);

 if (!FUNC_1(VAR_2, VAR_5))
  return (0);

 return (1);
}
