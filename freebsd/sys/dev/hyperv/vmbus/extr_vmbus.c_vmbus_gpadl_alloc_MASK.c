
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmbus_softc {int vmbus_gpadl; } ;


 scalar_t__ FUNC_0 (int *,int) ;

uint32_t
FUNC_1(struct vmbus_softc *VAR_0)
{
 uint32_t VAR_1;

again:
 VAR_1 = FUNC_0(&VAR_0->vmbus_gpadl, 1);
 if (VAR_1 == 0)
  goto again;
 return (VAR_1);
}
