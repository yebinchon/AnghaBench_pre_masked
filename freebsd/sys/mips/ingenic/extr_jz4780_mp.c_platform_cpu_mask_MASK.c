
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int cpuset_t ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(cpuset_t *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 FUNC_1(VAR_1);
 for (VAR_2 = 0, VAR_3 = 1 ; VAR_2 < VAR_0; VAR_2++, VAR_3 <<= 1)
  FUNC_0(VAR_2, VAR_1);
}
