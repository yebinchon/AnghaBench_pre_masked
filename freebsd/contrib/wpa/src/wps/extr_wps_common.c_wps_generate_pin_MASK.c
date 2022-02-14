
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 scalar_t__ FUNC_0 (unsigned char*,int) ;
 unsigned int FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int *VAR_0)
{
 unsigned int VAR_1;


 if (FUNC_0((unsigned char *) &VAR_1, sizeof(VAR_1)) < 0)
  return -1;
 VAR_1 %= 10000000;


 *VAR_0 = VAR_1 * 10 + FUNC_1(VAR_1);
 return 0;
}
