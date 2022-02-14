
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dma_paddr; scalar_t__ dma_vaddr; } ;
struct TYPE_6__ {int bst; int bsh; } ;
struct sec_softc {scalar_t__ sc_cid; int sc_pri_irid; int sc_version; int sc_sec_irid; unsigned long long sc_int_error_mask; int sc_channel_idle_mask; int sc_descriptors_lock; int sc_controller_lock; int * sc_rres; scalar_t__ sc_rrid; int sc_pri_ihand; int sc_pri_ires; int sc_sec_ihand; int sc_sec_ires; TYPE_4__ sc_desc_dmem; TYPE_4__ sc_lt_dmem; TYPE_3__* sc_lt; TYPE_2__* sc_desc; TYPE_1__ sc_bas; scalar_t__ sc_shutdown; scalar_t__ sc_blocked; int sc_dev; } ;
struct sec_session {int dummy; } ;
struct sec_hw_lt {int shl_n; scalar_t__ shl_ptr; scalar_t__ shl_r; scalar_t__ shl_length; } ;
struct sec_hw_desc {int dummy; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ sl_lt_paddr; struct sec_hw_lt* sl_lt; } ;
struct TYPE_7__ {scalar_t__ sd_desc_paddr; struct sec_hw_desc* sd_desc; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct sec_softc*,int ,int) ;
 int VAR_31 ;
 unsigned long long FUNC_1 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct sec_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_13 (struct sec_softc*,TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (struct sec_softc*) ;
 int VAR_42 ;
 int FUNC_16 (struct sec_softc*,int ,int ,int,char*) ;
 int VAR_43 ;
 int FUNC_17 (struct sec_softc*,int *,int *,int*,int ,char*) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_44)
{
 struct sec_softc *VAR_45;
 struct sec_hw_lt *VAR_46;
 int VAR_47 = 0;
 int VAR_48;

 VAR_45 = FUNC_7(VAR_44);
 VAR_45->sc_dev = VAR_44;
 VAR_45->sc_blocked = 0;
 VAR_45->sc_shutdown = 0;

 VAR_45->sc_cid = FUNC_4(VAR_44, sizeof(struct sec_session),
     VAR_0);
 if (VAR_45->sc_cid < 0) {
  FUNC_8(VAR_44, "could not get crypto driver ID!\n");
  return (VAR_11);
 }


 FUNC_10(&VAR_45->sc_controller_lock, FUNC_6(VAR_44),
     "SEC Controller lock", VAR_12);
 FUNC_10(&VAR_45->sc_descriptors_lock, FUNC_6(VAR_44),
     "SEC Descriptors lock", VAR_12);


 VAR_45->sc_rrid = 0;
 VAR_45->sc_rres = FUNC_2(VAR_44, VAR_33, &VAR_45->sc_rrid,
     VAR_13);

 if (VAR_45->sc_rres == ((void*)0)) {
  FUNC_8(VAR_44, "could not allocate I/O memory!\n");
  goto fail1;
 }

 VAR_45->sc_bas.bsh = FUNC_11(VAR_45->sc_rres);
 VAR_45->sc_bas.bst = FUNC_12(VAR_45->sc_rres);


 VAR_45->sc_pri_irid = 0;
 VAR_47 = FUNC_17(VAR_45, &VAR_45->sc_pri_ires, &VAR_45->sc_pri_ihand,
     &VAR_45->sc_pri_irid, VAR_42, "primary");

 if (VAR_47)
  goto fail2;


 if (VAR_45->sc_version == 3) {
  VAR_45->sc_sec_irid = 1;
  VAR_47 = FUNC_17(VAR_45, &VAR_45->sc_sec_ires, &VAR_45->sc_sec_ihand,
      &VAR_45->sc_sec_irid, VAR_43, "secondary");

  if (VAR_47)
   goto fail3;
 }


 VAR_47 = FUNC_13(VAR_45, &(VAR_45->sc_desc_dmem),
     VAR_31 * sizeof(struct sec_hw_desc));

 if (VAR_47)
  goto fail4;

 VAR_47 = FUNC_13(VAR_45, &(VAR_45->sc_lt_dmem),
     (VAR_32 + 1) * sizeof(struct sec_hw_lt));

 if (VAR_47)
  goto fail5;


 for (VAR_48 = 0; VAR_48 < VAR_31; VAR_48++) {
  VAR_45->sc_desc[VAR_48].sd_desc =
      (struct sec_hw_desc*)(VAR_45->sc_desc_dmem.dma_vaddr) + VAR_48;
  VAR_45->sc_desc[VAR_48].sd_desc_paddr = VAR_45->sc_desc_dmem.dma_paddr +
      (VAR_48 * sizeof(struct sec_hw_desc));
 }

 for (VAR_48 = 0; VAR_48 < VAR_32 + 1; VAR_48++) {
  VAR_45->sc_lt[VAR_48].sl_lt =
      (struct sec_hw_lt*)(VAR_45->sc_lt_dmem.dma_vaddr) + VAR_48;
  VAR_45->sc_lt[VAR_48].sl_lt_paddr = VAR_45->sc_lt_dmem.dma_paddr +
      (VAR_48 * sizeof(struct sec_hw_lt));
 }


 VAR_46 = VAR_45->sc_lt[VAR_32].sl_lt;
 VAR_46->shl_length = 0;
 VAR_46->shl_r = 0;
 VAR_46->shl_n = 1;
 VAR_46->shl_ptr = VAR_45->sc_lt[0].sl_lt_paddr;


 FUNC_0(VAR_45, VAR_34, VAR_31);
 FUNC_0(VAR_45, VAR_35, VAR_31);
 FUNC_0(VAR_45, VAR_40, VAR_31);
 FUNC_0(VAR_45, VAR_41, VAR_31);
 FUNC_0(VAR_45, VAR_38, VAR_31);
 FUNC_0(VAR_45, VAR_39, VAR_31);
 FUNC_0(VAR_45, VAR_36, VAR_32);
 FUNC_0(VAR_45, VAR_37, VAR_32);


 VAR_45->sc_int_error_mask = 0;
 for (VAR_48 = 0; VAR_48 < VAR_14; VAR_48++)
  VAR_45->sc_int_error_mask |= (~0ULL & FUNC_1(VAR_48));

 switch (VAR_45->sc_version) {
 case 2:
  VAR_45->sc_channel_idle_mask =
      (VAR_15 << VAR_16) |
      (VAR_19 << VAR_20) |
      (VAR_21 << VAR_22) |
      (VAR_17 << VAR_18);
  break;
 case 3:
  VAR_45->sc_channel_idle_mask =
      (VAR_23 << VAR_24) |
      (VAR_27 << VAR_28) |
      (VAR_29 << VAR_30) |
      (VAR_25 << VAR_26);
  break;
 }


 VAR_47 = FUNC_15(VAR_45);

 if (VAR_47)
  goto fail6;


 FUNC_5(VAR_45->sc_cid, VAR_2, 0, 0);


 FUNC_5(VAR_45->sc_cid, VAR_3, 0, 0);
 FUNC_5(VAR_45->sc_cid, VAR_1, 0, 0);


 FUNC_5(VAR_45->sc_cid, VAR_4, 0, 0);
 FUNC_5(VAR_45->sc_cid, VAR_5, 0, 0);
 FUNC_5(VAR_45->sc_cid, VAR_6, 0, 0);
 FUNC_5(VAR_45->sc_cid, VAR_7, 0, 0);
 FUNC_5(VAR_45->sc_cid, VAR_8, 0, 0);
 if (VAR_45->sc_version >= 3) {
  FUNC_5(VAR_45->sc_cid, VAR_9, 0, 0);
  FUNC_5(VAR_45->sc_cid, VAR_10, 0, 0);
 }

 return (0);

fail6:
 FUNC_14(&(VAR_45->sc_lt_dmem));
fail5:
 FUNC_14(&(VAR_45->sc_desc_dmem));
fail4:
 FUNC_16(VAR_45, VAR_45->sc_sec_ires, VAR_45->sc_sec_ihand,
     VAR_45->sc_sec_irid, "secondary");
fail3:
 FUNC_16(VAR_45, VAR_45->sc_pri_ires, VAR_45->sc_pri_ihand,
     VAR_45->sc_pri_irid, "primary");
fail2:
 FUNC_3(VAR_44, VAR_33, VAR_45->sc_rrid, VAR_45->sc_rres);
fail1:
 FUNC_9(&VAR_45->sc_controller_lock);
 FUNC_9(&VAR_45->sc_descriptors_lock);

 return (VAR_11);
}
