
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct cesa_tdma_hdesc {int dummy; } ;
struct TYPE_4__ {scalar_t__ cdm_paddr; scalar_t__ cdm_vaddr; } ;
struct cesa_softc {int sc_tperr; int sc_soc_id; scalar_t__ sc_cid; int sc_sc_lock; int sc_tdesc_lock; int sc_sdesc_lock; int sc_requests_lock; int sc_sessions_lock; int * sc_res; int sc_sram_size; int sc_sram_base_va; int sc_icookie; int sc_data_dtag; TYPE_1__ sc_tdesc_cdm; TYPE_1__ sc_sdesc_cdm; TYPE_1__ sc_requests_cdm; TYPE_3__* sc_requests; int sc_free_requests; int sc_queued_requests; int sc_ready_requests; TYPE_3__* sc_sdesc; int sc_free_sdesc; TYPE_3__* sc_tdesc; int sc_free_tdesc; int sc_dev; scalar_t__ sc_error; scalar_t__ sc_blocked; } ;
struct cesa_session {int dummy; } ;
struct cesa_sa_hdesc {int dummy; } ;
struct cesa_sa_data {int dummy; } ;
typedef int device_t ;
struct TYPE_5__ {int cr_dmap; scalar_t__ cr_csd_paddr; struct cesa_sa_data* cr_csd; scalar_t__ csd_cshd_paddr; struct cesa_sa_hdesc* csd_cshd; scalar_t__ ctd_cthd_paddr; struct cesa_tdma_hdesc* ctd_cthd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cesa_softc*,int ,int) ;
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
 int FUNC_1 (struct cesa_softc*,int ,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;







 size_t VAR_43 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int,int *,int ,struct cesa_softc*,int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct cesa_softc*,TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_15 (struct cesa_softc*) ;
 int FUNC_16 (struct cesa_softc*) ;
 int VAR_46 ;
 scalar_t__ FUNC_17 (int ,int,int ) ;
 int FUNC_18 (scalar_t__,int ,int ,int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_19 (int ) ;
 struct cesa_softc* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,char*,int ) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int*,int*) ;
 int FUNC_27 (int ) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_49)
{
 struct cesa_softc *VAR_50;
 uint32_t VAR_51, VAR_52, VAR_53;
 int VAR_54;
 int VAR_55;

 VAR_50 = FUNC_20(VAR_49);
 VAR_50->sc_blocked = 0;
 VAR_50->sc_error = 0;
 VAR_50->sc_dev = VAR_49;

 FUNC_26(&VAR_51, &VAR_52);

 switch (VAR_51) {
 case 134:
 case 133:

  if (FUNC_27(VAR_29) ==
      VAR_29) {
   FUNC_21(VAR_49, "not powered on\n");
   return (VAR_39);
  }
  VAR_50->sc_tperr = 0;
  break;
 case 130:
 case 131:
 case 132:
  VAR_50->sc_tperr = 0;
  break;
 case 129:
 case 128:

  if (FUNC_27(VAR_29) !=
      VAR_29) {
   FUNC_21(VAR_49, "not powered on\n");
   return (VAR_39);
  }
  VAR_50->sc_tperr = VAR_5;
  break;
 default:
  return (VAR_39);
 }

 VAR_50->sc_soc_id = VAR_51;


 FUNC_23(&VAR_50->sc_sc_lock, FUNC_19(VAR_49),
     "CESA Shared Data", VAR_42);
 FUNC_23(&VAR_50->sc_tdesc_lock, FUNC_19(VAR_49),
     "CESA TDMA Descriptors Pool", VAR_42);
 FUNC_23(&VAR_50->sc_sdesc_lock, FUNC_19(VAR_49),
     "CESA SA Descriptors Pool", VAR_42);
 FUNC_23(&VAR_50->sc_requests_lock, FUNC_19(VAR_49),
     "CESA Requests Pool", VAR_42);
 FUNC_23(&VAR_50->sc_sessions_lock, FUNC_19(VAR_49),
     "CESA Sessions Pool", VAR_42);


 VAR_54 = FUNC_4(VAR_49, VAR_45, VAR_50->sc_res);
 if (VAR_54) {
  FUNC_21(VAR_49, "could not allocate resources\n");
  goto err0;
 }


 if (!FUNC_24(VAR_49, "marvell,armada-38x-crypto"))
  VAR_54 = FUNC_15(VAR_50);
 else
  VAR_54 = FUNC_16(VAR_50);

 if (VAR_54) {
  FUNC_21(VAR_49, "could not setup SRAM\n");
  goto err1;
 }


 VAR_54 = FUNC_11(VAR_49, VAR_50->sc_res[VAR_43], VAR_41 |
     VAR_40, ((void*)0), VAR_44, VAR_50, &(VAR_50->sc_icookie));
 if (VAR_54) {
  FUNC_21(VAR_49, "could not setup engine completion irq\n");
  goto err2;
 }


 VAR_54 = FUNC_5(FUNC_9(VAR_49),
     1, 0,
     VAR_1,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_7,
     VAR_6,
     VAR_7, 0,
     ((void*)0), ((void*)0),
     &VAR_50->sc_data_dtag);
 if (VAR_54)
  goto err3;


 VAR_54 = FUNC_13(VAR_50, &VAR_50->sc_tdesc_cdm,
     VAR_21 * sizeof(struct cesa_tdma_hdesc));
 if (VAR_54)
  goto err4;

 FUNC_2(&VAR_50->sc_free_tdesc);
 for (VAR_55 = 0; VAR_55 < VAR_21; VAR_55++) {
  VAR_50->sc_tdesc[VAR_55].ctd_cthd =
      (struct cesa_tdma_hdesc *)(VAR_50->sc_tdesc_cdm.cdm_vaddr) + VAR_55;
  VAR_50->sc_tdesc[VAR_55].ctd_cthd_paddr = VAR_50->sc_tdesc_cdm.cdm_paddr +
      (VAR_55 * sizeof(struct cesa_tdma_hdesc));
  FUNC_3(&VAR_50->sc_free_tdesc, &VAR_50->sc_tdesc[VAR_55],
      VAR_48);
 }


 VAR_54 = FUNC_13(VAR_50, &VAR_50->sc_sdesc_cdm,
     VAR_13 * sizeof(struct cesa_sa_hdesc));
 if (VAR_54)
  goto err5;

 FUNC_2(&VAR_50->sc_free_sdesc);
 for (VAR_55 = 0; VAR_55 < VAR_13; VAR_55++) {
  VAR_50->sc_sdesc[VAR_55].csd_cshd =
      (struct cesa_sa_hdesc *)(VAR_50->sc_sdesc_cdm.cdm_vaddr) + VAR_55;
  VAR_50->sc_sdesc[VAR_55].csd_cshd_paddr = VAR_50->sc_sdesc_cdm.cdm_paddr +
      (VAR_55 * sizeof(struct cesa_sa_hdesc));
  FUNC_3(&VAR_50->sc_free_sdesc, &VAR_50->sc_sdesc[VAR_55],
      VAR_47);
 }


 VAR_54 = FUNC_13(VAR_50, &VAR_50->sc_requests_cdm,
     VAR_8 * sizeof(struct cesa_sa_data));
 if (VAR_54)
  goto err6;

 FUNC_2(&VAR_50->sc_free_requests);
 FUNC_2(&VAR_50->sc_ready_requests);
 FUNC_2(&VAR_50->sc_queued_requests);
 for (VAR_55 = 0; VAR_55 < VAR_8; VAR_55++) {
  VAR_50->sc_requests[VAR_55].cr_csd =
      (struct cesa_sa_data *)(VAR_50->sc_requests_cdm.cdm_vaddr) + VAR_55;
  VAR_50->sc_requests[VAR_55].cr_csd_paddr =
      VAR_50->sc_requests_cdm.cdm_paddr +
      (VAR_55 * sizeof(struct cesa_sa_data));


  VAR_54 = FUNC_7(VAR_50->sc_data_dtag, 0,
      &VAR_50->sc_requests[VAR_55].cr_dmap);
  if (VAR_54 && VAR_55 > 0) {
   VAR_55--;
   do {
    FUNC_8(VAR_50->sc_data_dtag,
        VAR_50->sc_requests[VAR_55].cr_dmap);
   } while (VAR_55--);

   goto err7;
  }

  FUNC_3(&VAR_50->sc_free_requests, &VAR_50->sc_requests[VAR_55],
      VAR_46);
 }







 VAR_53 = VAR_16 | VAR_20 |
     VAR_19 | VAR_18 | VAR_17;

 if (VAR_50->sc_soc_id == 130 ||
     VAR_50->sc_soc_id == 131 ||
     VAR_50->sc_soc_id == 132)
  VAR_53 |= VAR_28;

 FUNC_1(VAR_50, VAR_15, VAR_53);







 FUNC_0(VAR_50, VAR_14, 0);
 FUNC_0(VAR_50, VAR_9, VAR_10 |
     VAR_12 | VAR_11);


 FUNC_0(VAR_50, VAR_4, 0);
 FUNC_0(VAR_50, VAR_2, VAR_3 | VAR_50->sc_tperr);
 FUNC_1(VAR_50, VAR_22, 0);
 FUNC_1(VAR_50, VAR_23, VAR_27 |
     VAR_26 | VAR_24 |
     VAR_25);


 VAR_50->sc_cid = FUNC_17(VAR_49, sizeof(struct cesa_session),
     VAR_30);
 if (VAR_50->sc_cid < 0) {
  FUNC_21(VAR_49, "could not get crypto driver id\n");
  goto err8;
 }

 FUNC_18(VAR_50->sc_cid, VAR_32, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_33, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_31, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_34, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_35, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_36, 0, 0);
 FUNC_18(VAR_50->sc_cid, VAR_37, 0, 0);
 if (VAR_50->sc_soc_id == 130 ||
     VAR_50->sc_soc_id == 131 ||
     VAR_50->sc_soc_id == 132)
  FUNC_18(VAR_50->sc_cid, VAR_38, 0, 0);

 return (0);
err8:
 for (VAR_55 = 0; VAR_55 < VAR_8; VAR_55++)
  FUNC_8(VAR_50->sc_data_dtag,
      VAR_50->sc_requests[VAR_55].cr_dmap);
err7:
 FUNC_14(&VAR_50->sc_requests_cdm);
err6:
 FUNC_14(&VAR_50->sc_sdesc_cdm);
err5:
 FUNC_14(&VAR_50->sc_tdesc_cdm);
err4:
 FUNC_6(VAR_50->sc_data_dtag);
err3:
 FUNC_12(VAR_49, VAR_50->sc_res[VAR_43], VAR_50->sc_icookie);
err2:
 if (VAR_50->sc_soc_id == 130 ||
     VAR_50->sc_soc_id == 131 ||
     VAR_50->sc_soc_id == 132)
  FUNC_25(VAR_50->sc_sram_base_va, VAR_50->sc_sram_size);
err1:
 FUNC_10(VAR_49, VAR_45, VAR_50->sc_res);
err0:
 FUNC_22(&VAR_50->sc_sessions_lock);
 FUNC_22(&VAR_50->sc_requests_lock);
 FUNC_22(&VAR_50->sc_sdesc_lock);
 FUNC_22(&VAR_50->sc_tdesc_lock);
 FUNC_22(&VAR_50->sc_sc_lock);
 return (VAR_39);
}
