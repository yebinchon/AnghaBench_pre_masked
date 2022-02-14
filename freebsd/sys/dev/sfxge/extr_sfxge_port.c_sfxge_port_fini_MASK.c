
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int decode_buf; int dma_buf; } ;
struct TYPE_3__ {int decode_buf; int dma_buf; } ;
struct sfxge_port {scalar_t__ init_state; int * sc; TYPE_2__ mac_stats; TYPE_1__ phy_stats; int link_mode; } ;
struct sfxge_softc {struct sfxge_port port; } ;
typedef int efsys_mem_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sfxge_port*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct sfxge_softc *VAR_4)
{
 struct sfxge_port *VAR_5;
 efsys_mem_t *VAR_6;

 VAR_5 = &VAR_4->port;
 VAR_6 = &VAR_5->mac_stats.dma_buf;

 FUNC_0(VAR_5->init_state == VAR_2,
     ("Port not initialized"));

 VAR_5->init_state = VAR_3;

 VAR_5->link_mode = VAR_0;


 FUNC_3(&VAR_5->phy_stats.dma_buf);
 FUNC_2(VAR_5->phy_stats.decode_buf, VAR_1);

 FUNC_3(VAR_6);
 FUNC_2(VAR_5->mac_stats.decode_buf, VAR_1);

 FUNC_1(VAR_5);

 VAR_5->sc = ((void*)0);
}
