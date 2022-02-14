
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {size_t (* width ) (struct termp const*,int) ;} ;


 size_t FUNC_0 (struct termp const*,int) ;

__attribute__((used)) static size_t
FUNC_1(const struct termp *VAR_0, int VAR_1, int *VAR_2)
{

 if (*VAR_2) {
  (*VAR_2) = 0;
  return 0;
 } else
  return (*VAR_0->width)(VAR_0, VAR_1);
}
