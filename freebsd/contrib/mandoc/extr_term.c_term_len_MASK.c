
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {size_t (* width ) (struct termp const*,char) ;} ;


 size_t FUNC_0 (struct termp const*,char) ;

size_t
FUNC_1(const struct termp *VAR_0, size_t VAR_1)
{

 return (*VAR_0->width)(VAR_0, ' ') * VAR_1;
}
