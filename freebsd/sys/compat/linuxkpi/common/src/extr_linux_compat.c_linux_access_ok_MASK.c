
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t VAR_0 ;

int
FUNC_0(const void *VAR_1, size_t VAR_2)
{
 uintptr_t VAR_3;
 uintptr_t VAR_4;


 VAR_3 = (uintptr_t)VAR_1;
 VAR_4 = (uintptr_t)VAR_1 + VAR_2;


 return ((VAR_3 == VAR_4) ||
     (VAR_4 > VAR_3 && VAR_4 <= VAR_0));
}
