
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 char* FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, const char *VAR_2, int *VAR_3)
{
 int VAR_4 = *VAR_2 == VAR_0;
 const char *VAR_5;
 size_t VAR_6 = FUNC_2(VAR_2);

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
 if (VAR_4) {
  if ((VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6)) == ((void*)0))
   return -1;
  return VAR_6 == FUNC_2(VAR_5) &&
      FUNC_3(VAR_5, VAR_2, VAR_6) == 0;
 }
 return FUNC_1(VAR_1, VAR_2) == 1;
}
