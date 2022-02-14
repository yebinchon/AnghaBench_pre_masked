
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;

void
FUNC_3(cpuset_t *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_2(0, 2);
 VAR_4 = ((VAR_5 & VAR_0) >> VAR_1) + 1;

 FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_0(VAR_3, VAR_2);
}
