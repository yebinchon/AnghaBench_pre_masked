
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char **VAR_0, int VAR_1, const char *VAR_2,
    size_t VAR_3, int *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_3 == FUNC_0(VAR_0[VAR_6]) &&
      !FUNC_1(VAR_2, VAR_0[VAR_6], VAR_3)) {
   *VAR_4 = VAR_6;
   return 1;
  }
 *VAR_4 = FUNC_2(VAR_2, &VAR_5, 10);
 return (VAR_5 == VAR_2 + VAR_3);
}
