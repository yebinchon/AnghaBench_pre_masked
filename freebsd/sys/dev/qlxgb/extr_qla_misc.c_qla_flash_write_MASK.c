
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int qla_host_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (FUNC_2(VAR_0) != 0)
  return(-1);

 if (FUNC_1(VAR_0, VAR_1, VAR_2) != 0)
  return -1;

 if (FUNC_0(VAR_0))
  return -1;

 return 0;
}
