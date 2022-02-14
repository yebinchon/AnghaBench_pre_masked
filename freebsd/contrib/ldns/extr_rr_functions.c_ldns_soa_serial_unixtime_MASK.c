
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int *) ;

uint32_t FUNC_1(uint32_t VAR_0, void *VAR_1)
{
 int32_t VAR_2 = VAR_1 ? (int32_t) (intptr_t) VAR_1
        : (int32_t) FUNC_0(((void*)0));
 return VAR_2 - ((int32_t) VAR_0) <= 0 ? VAR_0+1 : ((uint32_t) VAR_2);
}
