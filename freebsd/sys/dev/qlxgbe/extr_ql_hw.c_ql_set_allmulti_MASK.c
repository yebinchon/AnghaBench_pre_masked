
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mac_rcv_mode; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

int
FUNC_1(qla_host_t *VAR_1)
{
 int VAR_2;

 VAR_1->hw.mac_rcv_mode |= VAR_0;
 VAR_2 = FUNC_0(VAR_1, VAR_1->hw.mac_rcv_mode);
 return (VAR_2);
}
