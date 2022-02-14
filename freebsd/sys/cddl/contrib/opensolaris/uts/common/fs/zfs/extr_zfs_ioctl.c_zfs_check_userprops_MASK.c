
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char const* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(nvlist_t *VAR_6)
{
 nvpair_t *VAR_7 = ((void*)0);

 while ((VAR_7 = FUNC_2(VAR_6, VAR_7)) != ((void*)0)) {
  const char *VAR_8 = FUNC_3(VAR_7);

  if (!FUNC_6(VAR_8) ||
      FUNC_4(VAR_7) != VAR_0)
   return (FUNC_0(VAR_2));

  if (FUNC_5(VAR_8) >= VAR_4)
   return (FUNC_0(VAR_3));

  if (FUNC_5(FUNC_1(VAR_7)) >= VAR_5)
   return (VAR_1);
 }
 return (0);
}
