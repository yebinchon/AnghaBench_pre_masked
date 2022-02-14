
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tpm_softc {int sc_init; int sc_bh; int sc_bt; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,int) ;

int
FUNC_5(struct tpm_softc *VAR_11, int VAR_12)
{
 u_int32_t VAR_13;
 int VAR_14, VAR_15;

 if (VAR_12 != 0)
  return VAR_1;

 if ((FUNC_0(VAR_11->sc_bt, VAR_11->sc_bh, VAR_5) &
     (VAR_10 | VAR_6)) ==
     (VAR_10 | VAR_6))
  return 0;

 FUNC_1(VAR_11->sc_bt, VAR_11->sc_bh, VAR_5,
     VAR_8);

 VAR_14 = FUNC_3(VAR_9);

 while ((VAR_13 = FUNC_0(VAR_11->sc_bt, VAR_11->sc_bh, VAR_5) &
     (VAR_10 | VAR_6)) !=
     (VAR_10 | VAR_6) && VAR_14--) {
  VAR_15 = FUNC_4(VAR_11->sc_init, VAR_4 | VAR_3, "tpm_locality", 1);
  if (VAR_15 && VAR_15 != VAR_2) {



   return VAR_15;
  }
 }

 if ((VAR_13 & (VAR_10 | VAR_6)) !=
     (VAR_10 | VAR_6)) {



  return VAR_0;
 }

 return 0;
}
