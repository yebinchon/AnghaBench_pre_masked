
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inoinfo {int* i_blks; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{

 return ((*(struct inoinfo * const *)VAR_0)->i_blks[0] -
  (*(struct inoinfo * const *)VAR_1)->i_blks[0]);
}
