
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {scalar_t__ sc_vector; int sc_capabilities; int sc_stat; int sc_bh; int sc_bt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tpm_softc*,int,int,void*,int ) ;
 int FUNC_4 (struct tpm_softc*,int,int,void*) ;

int
FUNC_5(struct tpm_softc *VAR_11, u_int8_t VAR_12, int VAR_13, void *VAR_14)
{
 u_int8_t VAR_15;
 int VAR_16, VAR_17, VAR_18;
 if (VAR_11->sc_vector != VAR_1) {
  VAR_15 = VAR_12;
  if ((VAR_15 & VAR_7) && (VAR_11->sc_capabilities &
      VAR_3))
   return FUNC_3(VAR_11, VAR_15, VAR_13, VAR_14,
       VAR_2);


  if ((VAR_15 & VAR_9) && (VAR_11->sc_capabilities &
      VAR_4)) {
   VAR_18 = FUNC_3(VAR_11, VAR_15, VAR_13, VAR_14, VAR_10);
   if (VAR_18 != 0)
    return VAR_18;
   else
    VAR_15 = VAR_12 & ~VAR_9;
  }





  if (VAR_15 == 0)
   return 0;
 }

 VAR_16 = 3;
restart:





 VAR_15 = VAR_12;
 if (VAR_12 & VAR_9)
  VAR_15 = VAR_9;

 VAR_17 = FUNC_2(VAR_13);
again:
 if ((VAR_18 = FUNC_4(VAR_11, VAR_15, VAR_17, VAR_14)) != 0)
  return VAR_18;

 if ((VAR_15 & VAR_11->sc_stat) == VAR_9) {

  VAR_15 = VAR_12 & ~VAR_9;
  VAR_17++;
  goto again;
 }

 if ((VAR_11->sc_stat & VAR_15) != VAR_15) {




  if (VAR_16-- && (VAR_12 & VAR_9)) {
   FUNC_0(VAR_11->sc_bt, VAR_11->sc_bh, VAR_5,
       VAR_8);
   goto restart;
  }
  return VAR_0;
 }

 return 0;
}
