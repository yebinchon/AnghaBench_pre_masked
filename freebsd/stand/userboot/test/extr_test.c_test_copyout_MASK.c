
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int *,size_t) ;

int
FUNC_1(void *VAR_3, uint64_t VAR_4, void *VAR_5, size_t VAR_6)
{

 VAR_4 &= 0x7fffffff;
 if (VAR_4 > VAR_2)
  return (VAR_0);
 if (VAR_4 + VAR_6 > VAR_2)
  VAR_6 = VAR_2 - VAR_4;
 FUNC_0(VAR_5, &VAR_1[VAR_4], VAR_6);
 return(0);
}
