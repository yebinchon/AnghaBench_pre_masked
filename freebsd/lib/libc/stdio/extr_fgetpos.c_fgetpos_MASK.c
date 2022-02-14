
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fpos_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;

int
FUNC_1(FILE * __restrict VAR_0, fpos_t * __restrict VAR_1)
{



 if ((*VAR_1 = FUNC_0(VAR_0)) == (fpos_t)-1)
  return (-1);
 else
  return (0);
}
