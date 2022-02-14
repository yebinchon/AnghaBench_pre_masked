
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {int xact_addr_filt; scalar_t__ nofldrxq; scalar_t__ nofldtxq; scalar_t__ nnmrxq; scalar_t__ nrxq; int nnmtxq; int ntxq; int hw_addr; TYPE_1__* pi; struct ifnet* ifp; int tick; } ;
struct sbuf {int dummy; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; int if_hw_tsomax; int if_ratelimit_query; int if_snd_tag_free; int if_snd_tag_query; int if_snd_tag_modify; int if_snd_tag_alloc; int if_get_counter; int if_qflush; int if_transmit; int if_ioctl; int if_init; struct vi_info* if_softc; } ;
typedef int device_t ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct vi_info*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct ifnet*,int ) ;
 struct ifnet* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ifnet*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 struct sbuf* FUNC_12 () ;
 int FUNC_13 (struct sbuf*,char*,scalar_t__,...) ;
 int FUNC_14 (struct vi_info*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_27, struct vi_info *VAR_28)
{
 struct ifnet *VAR_29;
 struct sbuf *VAR_30;

 VAR_28->xact_addr_filt = -1;
 FUNC_0(&VAR_28->tick, 1);


 VAR_29 = FUNC_6(VAR_11, VAR_27);
 if (VAR_29 == ((void*)0)) {
  FUNC_4(VAR_27, "Cannot allocate ifnet\n");
  return (VAR_6);
 }
 VAR_28->ifp = VAR_29;
 VAR_29->if_softc = VAR_28;

 FUNC_7(VAR_29, FUNC_2(VAR_27), FUNC_3(VAR_27));
 VAR_29->if_flags = VAR_8 | VAR_10 | VAR_9;

 VAR_29->if_init = VAR_18;
 VAR_29->if_ioctl = VAR_19;
 VAR_29->if_transmit = VAR_26;
 VAR_29->if_qflush = VAR_20;
 VAR_29->if_get_counter = VAR_17;
 VAR_29->if_capabilities = VAR_13;
 VAR_29->if_capenable = VAR_14;
 VAR_29->if_hwassist = VAR_1 | VAR_4 | VAR_0 | VAR_3 |
     VAR_5 | VAR_2;

 VAR_29->if_hw_tsomax = VAR_12;
 VAR_29->if_hw_tsomaxsegcount = VAR_16;




 VAR_29->if_hw_tsomaxsegsize = 65536;

 FUNC_5(VAR_29, VAR_28->hw_addr);




 VAR_30 = FUNC_12();
 FUNC_13(VAR_30, "%d txq, %d rxq (NIC)", VAR_28->ntxq, VAR_28->nrxq);
 FUNC_11(VAR_30);
 FUNC_4(VAR_27, "%s\n", FUNC_9(VAR_30));
 FUNC_10(VAR_30);

 FUNC_14(VAR_28);

 return (0);
}
