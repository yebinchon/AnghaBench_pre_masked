
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dv_cfdata; } ;
struct ncr53c9x_softc {size_t sc_rev; int sc_freq; int sc_ntarg; int sc_omess_self; int sc_imess_self; int sc_ccf; int sc_timeout; int * sc_omess; int * sc_imess; int * sc_tinfo; int sc_watchdog; int free_list; int sc_lock; struct ncr53c9x_ecb* ecb_array; TYPE_2__ sc_dev; scalar_t__ sc_state; scalar_t__ sc_cfflags; struct cam_path* sc_path; struct cam_sim* sc_sim; int sc_id; } ;
struct ncr53c9x_ecb {int tag_id; int ch; struct ncr53c9x_softc* sc; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
struct TYPE_5__ {scalar_t__ cf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ncr53c9x_softc*) ;
 scalar_t__ FUNC_2 (struct ncr53c9x_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ncr53c9x_softc*) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct ncr53c9x_ecb*,int ) ;
 int VAR_18 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int,int ,struct ncr53c9x_softc*) ;
 struct cam_sim* FUNC_8 (int ,int ,char*,struct ncr53c9x_softc*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_9 (struct cam_sim*,int ) ;
 int FUNC_10 (struct cam_sim*) ;
 struct cam_devq* FUNC_11 (int) ;
 int FUNC_12 (struct cam_devq*) ;
 int FUNC_13 (TYPE_2__) ;
 int FUNC_14 (TYPE_2__,char*,...) ;
 int FUNC_15 (int *,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_16 (int,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (struct ncr53c9x_softc*,int) ;
 int VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct cam_sim*,TYPE_2__,int ) ;
 scalar_t__ FUNC_20 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_21 (struct cam_path*) ;
 scalar_t__ FUNC_22 (int ,int ,struct cam_sim*,struct cam_path*) ;

int
FUNC_23(struct ncr53c9x_softc *VAR_26)
{
 struct cam_devq *VAR_27;
 struct cam_sim *VAR_28;
 struct cam_path *VAR_29;
 struct ncr53c9x_ecb *VAR_30;
 int VAR_31, VAR_32;

 if (FUNC_2(VAR_26) == 0) {
  FUNC_14(VAR_26->sc_dev, "mutex not initialized\n");
  return (VAR_8);
 }

 FUNC_6(&VAR_26->sc_watchdog, &VAR_26->sc_lock, 0);




 if (VAR_26->sc_rev >= VAR_16) {
  FUNC_14(VAR_26->sc_dev, "unknown variant %d, devices not "
      "attached\n", VAR_26->sc_rev);
  return (VAR_5);
 }

 FUNC_14(VAR_26->sc_dev, "%s, %d MHz, SCSI ID %d\n",
     VAR_24[VAR_26->sc_rev], VAR_26->sc_freq, VAR_26->sc_id);

 VAR_26->sc_ntarg = (VAR_26->sc_rev == VAR_15) ? 16 : 8;







 if (VAR_26->sc_omess == ((void*)0)) {
  VAR_26->sc_omess_self = 1;
  VAR_26->sc_omess = FUNC_16(VAR_12, VAR_9, VAR_10);
  if (VAR_26->sc_omess == ((void*)0)) {
   FUNC_14(VAR_26->sc_dev,
       "cannot allocate MSGOUT buffer\n");
   return (VAR_7);
  }
 } else
  VAR_26->sc_omess_self = 0;

 if (VAR_26->sc_imess == ((void*)0)) {
  VAR_26->sc_imess_self = 1;
  VAR_26->sc_imess = FUNC_16(VAR_12 + 1, VAR_9, VAR_10);
  if (VAR_26->sc_imess == ((void*)0)) {
   FUNC_14(VAR_26->sc_dev,
       "cannot allocate MSGIN buffer\n");
   VAR_31 = VAR_7;
   goto fail_omess;
  }
 } else
  VAR_26->sc_imess_self = 0;

 VAR_26->sc_tinfo = FUNC_16(VAR_26->sc_ntarg * sizeof(VAR_26->sc_tinfo[0]),
     VAR_9, VAR_10 | VAR_11);
 if (VAR_26->sc_tinfo == ((void*)0)) {
  FUNC_14(VAR_26->sc_dev,
      "cannot allocate target info buffer\n");
  VAR_31 = VAR_7;
  goto fail_imess;
 }





 if (VAR_26->sc_rev == VAR_17)
  VAR_26->sc_rev = VAR_14;

 VAR_26->sc_ccf = FUNC_0(VAR_26->sc_freq);


 if (VAR_26->sc_ccf == 1)
  VAR_26->sc_ccf = 2;
 VAR_26->sc_timeout = ((250 * 1000) * VAR_26->sc_freq) / (8192 * VAR_26->sc_ccf);


 VAR_26->sc_ccf &= 7;




 VAR_27 = FUNC_11(VAR_26->sc_ntarg);
 if (VAR_27 == ((void*)0)) {
  FUNC_14(VAR_26->sc_dev, "cannot allocate device queue\n");
  VAR_31 = VAR_7;
  goto fail_tinfo;
 }

 VAR_28 = FUNC_8(VAR_21, VAR_23, "esp", VAR_26,
     FUNC_13(VAR_26->sc_dev), &VAR_26->sc_lock, 1, VAR_13, VAR_27);
 if (VAR_28 == ((void*)0)) {
  FUNC_14(VAR_26->sc_dev, "cannot allocate SIM entry\n");
  VAR_31 = VAR_7;
  goto fail_devq;
 }

 FUNC_1(VAR_26);

 if (FUNC_19(VAR_28, VAR_26->sc_dev, 0) != VAR_3) {
  FUNC_14(VAR_26->sc_dev, "cannot register bus\n");
  VAR_31 = VAR_6;
  goto fail_lock;
 }

 if (FUNC_20(&VAR_29, ((void*)0), FUNC_10(VAR_28),
     VAR_4, VAR_1) != VAR_2) {
  FUNC_14(VAR_26->sc_dev, "cannot create path\n");
  VAR_31 = VAR_6;
  goto fail_bus;
 }

 if (FUNC_22(VAR_0, VAR_22, VAR_28, VAR_29) !=
     VAR_2) {
  FUNC_14(VAR_26->sc_dev, "cannot register async handler\n");
  VAR_31 = VAR_6;
  goto fail_path;
 }

 VAR_26->sc_sim = VAR_28;
 VAR_26->sc_path = VAR_29;





 VAR_26->sc_cfflags = 0;

 VAR_26->sc_state = 0;
 FUNC_17(VAR_26, 1);

 FUNC_4(&VAR_26->free_list);
 if ((VAR_26->ecb_array =
     FUNC_16(sizeof(struct ncr53c9x_ecb) * VAR_13, VAR_9,
     VAR_10 | VAR_11)) == ((void*)0)) {
  FUNC_14(VAR_26->sc_dev, "cannot allocate ECB array\n");
  VAR_31 = VAR_7;
  goto fail_async;
 }
 for (VAR_32 = 0; VAR_32 < VAR_13; VAR_32++) {
  VAR_30 = &VAR_26->ecb_array[VAR_32];
  VAR_30->sc = VAR_26;
  VAR_30->tag_id = VAR_32;
  FUNC_6(&VAR_30->ch, &VAR_26->sc_lock, 0);
  FUNC_5(&VAR_26->free_list, VAR_30, VAR_19);
 }

 FUNC_7(&VAR_26->sc_watchdog, 60 * VAR_20, VAR_25, VAR_26);

 FUNC_3(VAR_26);

 return (0);

fail_async:
 FUNC_22(0, VAR_22, VAR_28, VAR_29);
fail_path:
 FUNC_21(VAR_29);
fail_bus:
 FUNC_18(FUNC_10(VAR_28));
fail_lock:
 FUNC_3(VAR_26);
 FUNC_9(VAR_28, VAR_18);
fail_devq:
 FUNC_12(VAR_27);
fail_tinfo:
 FUNC_15(VAR_26->sc_tinfo, VAR_9);
fail_imess:
 if (VAR_26->sc_imess_self)
  FUNC_15(VAR_26->sc_imess, VAR_9);
fail_omess:
 if (VAR_26->sc_omess_self)
  FUNC_15(VAR_26->sc_omess, VAR_9);
 return (VAR_31);
}
