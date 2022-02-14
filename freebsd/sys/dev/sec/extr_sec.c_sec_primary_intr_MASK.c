
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct sec_softc {int sc_int_error_mask; int sc_blocked; int sc_cid; int sc_shutdown; int sc_dev; } ;
struct sec_desc {scalar_t__ sd_error; TYPE_2__* sd_crp; TYPE_1__* sd_desc; } ;
struct TYPE_4__ {scalar_t__ crp_etype; } ;
struct TYPE_3__ {int shd_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sec_softc*,struct sec_desc*) ;
 int FUNC_2 (struct sec_desc*) ;
 int FUNC_3 (struct sec_softc*) ;
 int FUNC_4 (struct sec_softc*,int) ;
 int FUNC_5 (struct sec_desc*,int) ;
 struct sec_desc* FUNC_6 (struct sec_softc*) ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (struct sec_softc*,int ) ;
 int FUNC_9 (struct sec_softc*) ;
 scalar_t__ FUNC_10 (struct sec_softc*) ;
 int FUNC_11 (struct sec_softc*,int ) ;
 int FUNC_12 (struct sec_softc*,int ) ;
 int FUNC_13 (struct sec_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int) ;
 int VAR_9 ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (struct sec_softc*,int,int ) ;
 int FUNC_18 (struct sec_softc*) ;
 struct sec_desc* FUNC_19 (struct sec_softc*,int) ;

__attribute__((used)) static void
FUNC_20(void *VAR_10)
{
 struct sec_softc *VAR_11 = VAR_10;
 struct sec_desc *VAR_12;
 uint64_t VAR_13;
 int VAR_14, VAR_15 = 0;

 FUNC_8(VAR_11, VAR_8);


 VAR_13 = FUNC_11(VAR_11, VAR_7);
 if (VAR_13 & VAR_11->sc_int_error_mask) {

  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
   if ((VAR_13 & FUNC_7(VAR_14)) == 0)
    continue;

   FUNC_16(VAR_11->sc_dev,
       "I/O error on channel %i!\n", VAR_14);


   VAR_12 = FUNC_19(VAR_11, FUNC_11(VAR_11,
       FUNC_0(VAR_14)));

   if (VAR_12 != ((void*)0))
    VAR_12->sd_error = VAR_4;


   FUNC_17(VAR_11, VAR_14, 0);
  }
 }


 FUNC_13(VAR_11, VAR_6, 0xFFFFFFFFFFFFFFFFULL);

 FUNC_12(VAR_11, VAR_8);
 FUNC_8(VAR_11, VAR_9);


 FUNC_4(VAR_11, VAR_2 | VAR_3);

 while (FUNC_10(VAR_11) > 0) {
  VAR_12 = FUNC_6(VAR_11);

  if (VAR_12->sd_desc->shd_done != 0xFF && VAR_12->sd_error == 0) {
   FUNC_9(VAR_11);
   break;
  }

  FUNC_5(VAR_12, VAR_2 |
      VAR_3);

  VAR_12->sd_crp->crp_etype = VAR_12->sd_error;
  FUNC_14(VAR_12->sd_crp);

  FUNC_2(VAR_12);
  FUNC_1(VAR_11, VAR_12);
  FUNC_3(VAR_11);
 }

 FUNC_4(VAR_11, VAR_0 | VAR_1);

 if (!VAR_11->sc_shutdown) {
  VAR_15 = VAR_11->sc_blocked;
  VAR_11->sc_blocked = 0;
 }

 FUNC_12(VAR_11, VAR_9);


 FUNC_18(VAR_11);

 if (VAR_15)
  FUNC_15(VAR_11->sc_cid, VAR_15);
}
