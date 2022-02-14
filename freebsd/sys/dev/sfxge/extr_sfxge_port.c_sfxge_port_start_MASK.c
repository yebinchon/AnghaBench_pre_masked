
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_7__ {TYPE_2__* ifm_cur; } ;
struct TYPE_8__ {int dma_buf; } ;
struct sfxge_port {scalar_t__ init_state; TYPE_4__ mac_stats; int stats_update_period_ms; } ;
struct sfxge_softc {int * enp; TYPE_3__ media; struct sfxge_port port; struct ifnet* ifnet; } ;
struct ifnet {TYPE_1__* if_addr; int if_mtu; } ;
struct epoch_tracker {int dummy; } ;
typedef int mac_addr ;
typedef int efx_nic_t ;
struct TYPE_6__ {int ifm_media; } ;
struct TYPE_5__ {scalar_t__ ifa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sockaddr_dl*) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (struct epoch_tracker) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct sfxge_port*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct sfxge_port*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (int *,int *,int ,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sfxge_softc*) ;
 int FUNC_19 (struct sfxge_softc*,int ) ;
 int FUNC_20 (struct sfxge_softc*,int ,int *) ;
 int FUNC_21 (struct sfxge_softc*) ;

int
FUNC_22(struct sfxge_softc *VAR_5)
{
 uint8_t VAR_6[VAR_2];
 struct epoch_tracker VAR_7;
 struct ifnet *VAR_8 = VAR_5->ifnet;
 struct sfxge_port *VAR_9;
 efx_nic_t *VAR_10;
 size_t VAR_11;
 int VAR_12;
 uint32_t VAR_13;

 VAR_9 = &VAR_5->port;
 VAR_10 = VAR_5->enp;

 FUNC_5(VAR_9);

 FUNC_1(VAR_9->init_state == VAR_3,
     ("port not initialized"));


 if ((VAR_12 = FUNC_9(VAR_10)) != 0)
  goto fail_filter_init;


 if ((VAR_12 = FUNC_17(VAR_5->enp)) != 0)
  goto fail;


 VAR_11 = FUNC_0(VAR_8->if_mtu);
 if ((VAR_12 = FUNC_13(VAR_10, VAR_11)) != 0)
  goto fail2;

 if ((VAR_12 = FUNC_12(VAR_10, FUNC_21(VAR_5), VAR_1))
     != 0)
  goto fail3;


 FUNC_3(VAR_7);
 FUNC_7(FUNC_2((struct sockaddr_dl *)VAR_8->if_addr->ifa_addr),
       VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_7);
 if ((VAR_12 = FUNC_10(VAR_10, VAR_6)) != 0)
  goto fail4;

 FUNC_18(VAR_5);


 if ((VAR_12 = FUNC_14(VAR_10, &VAR_9->mac_stats.dma_buf,
      VAR_9->stats_update_period_ms,
      VAR_0)) != 0)
  goto fail6;

 if ((VAR_12 = FUNC_11(VAR_10, VAR_0)) != 0)
  goto fail8;

 if ((VAR_12 = FUNC_20(VAR_5, VAR_5->media.ifm_cur->ifm_media,
         &VAR_13)) != 0)
  goto fail9;

 if ((VAR_12 = FUNC_15(VAR_5->enp, VAR_13)) != 0)
  goto fail10;

 VAR_9->init_state = VAR_4;


 FUNC_6(VAR_9);
 FUNC_19(VAR_5, 0);

 return (0);

fail10:
fail9:
 (void)FUNC_11(VAR_10, VAR_1);
fail8:
 (void)FUNC_14(VAR_10, &VAR_9->mac_stats.dma_buf, 0, VAR_0);
fail6:
fail4:
fail3:

fail2:
 FUNC_16(VAR_10);
fail:
 FUNC_8(VAR_10);
fail_filter_init:
 FUNC_6(VAR_9);

 return (VAR_12);
}
