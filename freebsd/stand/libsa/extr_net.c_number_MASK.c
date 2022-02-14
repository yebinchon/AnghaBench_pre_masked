
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n_long ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, n_long *VAR_1)
{
 for (*VAR_1 = 0; FUNC_0(*VAR_0); VAR_0++)
  *VAR_1 = (*VAR_1 * 10) + *VAR_0 - '0';
 return VAR_0;
}
