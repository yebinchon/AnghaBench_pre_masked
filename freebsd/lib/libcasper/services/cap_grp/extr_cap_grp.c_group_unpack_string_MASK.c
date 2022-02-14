
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 char* FUNC_0 (int const*,char const*) ;
 size_t FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const nvlist_t *VAR_1, const char *VAR_2, char **VAR_3,
    char **VAR_4, size_t *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 VAR_7 = FUNC_1(*VAR_4, VAR_6, *VAR_5);
 if (VAR_7 >= *VAR_5)
  return (VAR_0);
 *VAR_3 = *VAR_4;
 *VAR_4 += VAR_7 + 1;
 *VAR_5 -= VAR_7 + 1;

 return (0);
}
