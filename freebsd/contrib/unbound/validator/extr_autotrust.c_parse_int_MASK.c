
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char**,int) ;

__attribute__((used)) static unsigned int
FUNC_1(char* VAR_0, int* VAR_1)
{
 char *VAR_2;
 unsigned int VAR_3 = (unsigned int)FUNC_0(VAR_0, &VAR_2, 10);
 if(VAR_0 == VAR_2) {
  *VAR_1 = -1;
  return 0;
 }
 *VAR_1 = 1;
 return VAR_3;
}
