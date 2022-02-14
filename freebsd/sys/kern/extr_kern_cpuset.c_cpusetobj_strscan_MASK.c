
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int dummy; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bitset*,int ,char const*) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(cpuset_t *VAR_2, const char *VAR_3)
{
 char VAR_4;

 if (FUNC_1(VAR_3) > VAR_0 - 1)
  return (-1);

 VAR_4 = VAR_3[FUNC_0((struct bitset *)VAR_2, VAR_1, VAR_3)];
 if (VAR_4 != '\0')
  return (-1);

 return (0);
}
