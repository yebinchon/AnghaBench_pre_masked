
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_buf; scalar_t__ update_time; } ;
struct sfxge_port {scalar_t__ init_state; int link_mode; TYPE_1__ mac_stats; } ;
struct sfxge_softc {int * enp; struct sfxge_port port; } ;
typedef int efx_nic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sfxge_port*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sfxge_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct sfxge_softc *VAR_5)
{
 struct sfxge_port *VAR_6;
 efx_nic_t *VAR_7;

 VAR_6 = &VAR_5->port;
 VAR_7 = VAR_5->enp;

 FUNC_1(VAR_6);

 FUNC_0(VAR_6->init_state == VAR_4,
     ("port not started"));

 VAR_6->init_state = VAR_3;

 VAR_6->mac_stats.update_time = 0;


 (void)FUNC_4(VAR_7, VAR_1);

 (void)FUNC_5(VAR_7, &VAR_6->mac_stats.dma_buf, 0, VAR_0);

 VAR_6->link_mode = VAR_2;


 FUNC_6(VAR_7);

 FUNC_3(VAR_7);

 FUNC_2(VAR_6);
}
