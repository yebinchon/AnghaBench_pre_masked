
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int*,size_t*) ;

int
FUNC_1(const char *VAR_0, int *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 VAR_3 = *VAR_2;
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return (VAR_4);

 *VAR_2 = VAR_3;
 return (0);
}
