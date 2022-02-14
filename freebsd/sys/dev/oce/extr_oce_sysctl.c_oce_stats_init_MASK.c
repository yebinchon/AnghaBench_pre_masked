
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mbx_get_pport_stats {int dummy; } ;
struct mbx_get_nic_stats_v2 {int dummy; } ;
struct mbx_get_nic_stats_v1 {int dummy; } ;
struct mbx_get_nic_stats_v0 {int dummy; } ;
struct TYPE_8__ {int stats_mem; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int *,int ) ;

int
FUNC_5(POCE_SOFTC VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;


        if( FUNC_0(VAR_0) )
  VAR_2 = sizeof(struct mbx_get_nic_stats_v0);
        else if( FUNC_1(VAR_0) )
  VAR_2 = sizeof(struct mbx_get_nic_stats_v1);
        else if( FUNC_2(VAR_0))
  VAR_2 = sizeof(struct mbx_get_nic_stats_v2);
        else if( FUNC_3(VAR_0) )
  VAR_2 = sizeof(struct mbx_get_pport_stats);

 VAR_1 = FUNC_4(VAR_0, VAR_2, &VAR_0->stats_mem, 0);

 return VAR_1;
}
