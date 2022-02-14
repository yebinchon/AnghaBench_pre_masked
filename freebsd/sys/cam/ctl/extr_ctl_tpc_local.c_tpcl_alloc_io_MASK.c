
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct TYPE_2__ {int ctl_pool_ref; } ;
struct tpcl_softc {TYPE_1__ port; } ;


 union ctl_io* FUNC_0 (int ) ;
 struct tpcl_softc VAR_0 ;

union ctl_io *
FUNC_1(void)
{
 struct tpcl_softc *VAR_1 = &VAR_0;

 return (FUNC_0(VAR_1->port.ctl_pool_ref));
}
