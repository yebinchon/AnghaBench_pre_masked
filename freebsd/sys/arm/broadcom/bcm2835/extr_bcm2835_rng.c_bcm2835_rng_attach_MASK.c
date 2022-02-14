
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sbuf {int dummy; } ;
struct bcm2835_rng_softc {int sc_rngto; int sc_stall_count; int sc_underrun; int * sc_mem_res; int sc_rbg2x; int sc_dev; } ;
typedef int device_t ;


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
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct bcm2835_rng_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int VAR_11 ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bcm2835_rng_softc*,struct sbuf*) ;
 int VAR_12 ;
 int FUNC_7 (struct bcm2835_rng_softc*) ;
 scalar_t__ VAR_13 ;
 int * FUNC_8 (int ,int ,int*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,struct bcm2835_rng_softc*) ;
 struct bcm2835_rng_softc* FUNC_11 (int ) ;
 struct sysctl_ctx_list* FUNC_12 (int ) ;
 struct sysctl_oid* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,int ) ;
 int VAR_14 ;
 int FUNC_15 (struct sbuf*) ;
 int FUNC_16 (struct sbuf*) ;
 int FUNC_17 (struct sbuf*) ;
 int FUNC_18 (struct sbuf*,int *,int,int) ;
 int FUNC_19 (struct sbuf*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_20(device_t VAR_17)
{
 struct bcm2835_rng_softc *VAR_18;
 struct sysctl_ctx_list *VAR_19;
 struct sysctl_oid *VAR_20;
 int VAR_21, VAR_22;

 VAR_21 = 0;
 VAR_18 = FUNC_11(VAR_17);
 VAR_18->sc_dev = VAR_17;
 VAR_18->sc_stall_count = VAR_8;


 FUNC_9(&VAR_18->sc_rngto, VAR_0);

 FUNC_4("bcmrng.2xspeed", &VAR_18->sc_rbg2x);
 FUNC_4("bcmrng.stall_count", &VAR_18->sc_stall_count);


 VAR_22 = 0;
 VAR_18->sc_mem_res = FUNC_8(VAR_17, VAR_11, &VAR_22,
     VAR_7);
 if (VAR_18->sc_mem_res == ((void*)0)) {
  FUNC_5(VAR_17);
  return (VAR_5);
 }


 FUNC_7(VAR_18);


 if (VAR_13) {
  struct sbuf VAR_23;

  (void) FUNC_18(&VAR_23, ((void*)0), 256,
      VAR_9 | VAR_10);
  FUNC_6(VAR_18, &VAR_23);
  FUNC_19(&VAR_23);
  VAR_21 = FUNC_17(&VAR_23);
  if (VAR_21 == 0)
   FUNC_14(VAR_17, "%s", FUNC_15(&VAR_23));
  FUNC_16(&VAR_23);
 }

 VAR_19 = FUNC_12(VAR_17);
 VAR_20 = FUNC_13(VAR_17);
 FUNC_1(VAR_19, FUNC_3(VAR_20), VAR_6,
     "underrun", VAR_1, &VAR_18->sc_underrun,
     "Number of FIFO underruns");
 FUNC_2(VAR_19, FUNC_3(VAR_20), VAR_6,
     "2xspeed", VAR_3 | VAR_2, VAR_18, 0,
     VAR_15, "I", "Enable RBG 2X SPEED");
 FUNC_0(VAR_19, FUNC_3(VAR_20), VAR_6,
     "stall_count", VAR_2, &VAR_18->sc_stall_count,
     VAR_8, "Number of underruns to assume RNG stall");
 FUNC_10(&VAR_18->sc_rngto, VAR_14, VAR_12, VAR_18);

 return (0);
}
