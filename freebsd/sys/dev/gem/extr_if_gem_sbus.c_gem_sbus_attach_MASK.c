
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gem_softc {int * sc_res; int sc_ih; int sc_enaddr; int sc_flags; int sc_dev; int sc_variant; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct gem_softc*,int ) ;
 int FUNC_2 (struct gem_softc*,int ,int ) ;
 int FUNC_3 (struct gem_softc*) ;
 int FUNC_4 (struct gem_softc*,int ) ;
 size_t VAR_1 ;
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
 int FUNC_5 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int,int *,int ,struct gem_softc*,int *) ;
 int FUNC_9 (int ) ;
 struct gem_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (struct gem_softc*) ;
 int FUNC_13 (struct gem_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_18)
{
 struct gem_softc *VAR_19;
 int VAR_20;
 uint32_t VAR_21;

 VAR_19 = FUNC_10(VAR_18);
 VAR_19->sc_variant = VAR_9;
 VAR_19->sc_dev = VAR_18;

 VAR_19->sc_flags = VAR_8;

 if (FUNC_6(VAR_18, VAR_17, VAR_19->sc_res)) {
  FUNC_11(VAR_18, "failed to allocate resources\n");
  FUNC_7(VAR_18, VAR_17, VAR_19->sc_res);
  return (VAR_0);
 }

 FUNC_4(VAR_19, FUNC_9(VAR_18));

 FUNC_5(VAR_18, VAR_19->sc_enaddr);

 VAR_20 = FUNC_14(VAR_18);
 VAR_21 = VAR_6;
 if ((VAR_20 & VAR_12) != 0) {
  VAR_21 |= VAR_3;
  VAR_20 >>= VAR_13;
 }
 if ((VAR_20 & VAR_15) != 0)
  VAR_21 |= VAR_5;
 else if ((VAR_20 & VAR_14) != 0)
  VAR_21 |= VAR_4;
 else {
  FUNC_11(VAR_18, "unsupported burst size\n");
  goto fail;
 }

 (void)FUNC_1(VAR_19, VAR_2);
 FUNC_0(100);
 FUNC_2(VAR_19, VAR_7, VAR_21);

 if (FUNC_12(VAR_19) != 0) {
  FUNC_11(VAR_18, "could not be attached\n");
  goto fail;
 }

 if (FUNC_8(VAR_18, VAR_19->sc_res[VAR_1], VAR_11 |
     VAR_10, ((void*)0), VAR_16, VAR_19, &VAR_19->sc_ih) != 0) {
  FUNC_11(VAR_18, "failed to set up interrupt\n");
  FUNC_13(VAR_19);
  goto fail;
 }
 return (0);

 fail:
 FUNC_3(VAR_19);
 FUNC_7(VAR_18, VAR_17, VAR_19->sc_res);
 return (VAR_0);
}
