
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qla_mcast_t ;
struct TYPE_5__ {scalar_t__ nmcast; int mcast; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

int
FUNC_2(qla_host_t *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0);

 FUNC_0(VAR_1->hw.mcast, (sizeof (qla_mcast_t) * VAR_0));
 VAR_1->hw.nmcast = 0;

 return (VAR_2);
}
