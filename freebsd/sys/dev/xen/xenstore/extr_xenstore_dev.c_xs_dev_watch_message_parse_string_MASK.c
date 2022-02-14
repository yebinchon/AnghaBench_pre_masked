
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,int ,int) ;

__attribute__((used)) static int
FUNC_1(const char **VAR_1, const char *VAR_2,
    const char **VAR_3)
{
 const char *VAR_4;

 VAR_4 = FUNC_0(*VAR_1, 0, VAR_2 - *VAR_1);
 if (!VAR_4)
  return (VAR_0);

 *VAR_3 = *VAR_1;
 *VAR_1 = VAR_4+1;

 return (0);
}
