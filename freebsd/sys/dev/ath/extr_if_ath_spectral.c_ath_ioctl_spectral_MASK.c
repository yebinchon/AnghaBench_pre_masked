
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_spectral_state {int spectral_enable_after_reset; int spectral_state; } ;
struct ath_softc {int sc_dospectral; int sc_dev; int sc_ah; struct ath_spectral_state* sc_spectral; } ;
struct ath_diag {unsigned int ad_id; int ad_in_size; int ad_out_size; int ad_out_data; int ad_in_data; } ;
typedef int peout ;
typedef int HAL_SPECTRAL_PARAM ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;







 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*,int ) ;
 int FUNC_9 (int ,void*,int) ;
 scalar_t__ FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (void*,int ) ;
 void* FUNC_13 (int,int ,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int ,int) ;

int
FUNC_16(struct ath_softc *VAR_10, struct ath_diag *VAR_11)
{
 unsigned int VAR_12 = VAR_11->ad_id & VAR_1;
 void *VAR_13 = ((void*)0);
 void *VAR_14 = ((void*)0);
 u_int32_t VAR_15 = VAR_11->ad_in_size;
 u_int32_t VAR_16 = VAR_11->ad_out_size;
 int VAR_17 = 0;
 HAL_SPECTRAL_PARAM VAR_18;
 HAL_SPECTRAL_PARAM *VAR_19;
 struct ath_spectral_state *VAR_20 = VAR_10->sc_spectral;
 int VAR_21;

 if (! FUNC_6(VAR_10->sc_ah))
  return (VAR_4);

 FUNC_0(VAR_10);
 FUNC_8(VAR_10, VAR_6);
 FUNC_1(VAR_10);

 if (VAR_11->ad_id & VAR_2) {



  VAR_13 = FUNC_13(VAR_15, VAR_8, VAR_7);
  if (VAR_13 == ((void*)0)) {
   VAR_17 = VAR_5;
   goto bad;
  }
  VAR_17 = FUNC_9(VAR_11->ad_in_data, VAR_13, VAR_15);
  if (VAR_17)
   goto bad;
 }
 if (VAR_11->ad_id & VAR_0) {







  VAR_14 = FUNC_13(VAR_16, VAR_8, VAR_7 | VAR_9);
  if (VAR_14 == ((void*)0)) {
   VAR_17 = VAR_5;
   goto bad;
  }
 }
 switch (VAR_12) {
  case 131:
   FUNC_15(&VAR_18, 0, sizeof(VAR_18));
   VAR_16 = sizeof(HAL_SPECTRAL_PARAM);
   FUNC_3(VAR_10->sc_ah, &VAR_18);
   VAR_19 = (HAL_SPECTRAL_PARAM *) VAR_14;
   FUNC_14(VAR_19, &VAR_18, sizeof(*VAR_19));
   break;
  case 130:
   if (VAR_15 < sizeof(HAL_SPECTRAL_PARAM)) {
    VAR_17 = VAR_4;
    break;
   }
   VAR_19 = (HAL_SPECTRAL_PARAM *) VAR_13;
   FUNC_2(VAR_10->sc_ah, VAR_19);

   FUNC_3(VAR_10->sc_ah,
       &VAR_20->spectral_state);
   break;
  case 129:
   FUNC_2(VAR_10->sc_ah,
       &VAR_20->spectral_state);
   (void) FUNC_4(VAR_10->sc_ah);
   VAR_10->sc_dospectral = 1;

   break;
  case 128:
   (void) FUNC_5(VAR_10->sc_ah);
   VAR_10->sc_dospectral = 0;

   break;
  case 132:
   if (VAR_15 < sizeof(int)) {
    FUNC_11(VAR_10->sc_dev, "%d != %d\n",
        VAR_15,
        (int) sizeof(int));
    VAR_17 = VAR_4;
    break;
   }
   if (VAR_13 == ((void*)0)) {
    FUNC_11(VAR_10->sc_dev, "indata=NULL\n");
    VAR_17 = VAR_4;
    break;
   }
   VAR_21 = * ((int *) VAR_13);
   if (VAR_21 == 0)
    VAR_20->spectral_enable_after_reset = 0;
   else
    VAR_20->spectral_enable_after_reset = 1;
   break;
  case 133:

  case 134:

  break;
  default:
   VAR_17 = VAR_4;
   goto bad;
 }
 if (VAR_16 < VAR_11->ad_out_size)
  VAR_11->ad_out_size = VAR_16;
 if (VAR_14 && FUNC_10(VAR_14, VAR_11->ad_out_data, VAR_11->ad_out_size))
  VAR_17 = VAR_3;
bad:
 if ((VAR_11->ad_id & VAR_2) && VAR_13 != ((void*)0))
  FUNC_12(VAR_13, VAR_8);
 if ((VAR_11->ad_id & VAR_0) && VAR_14 != ((void*)0))
  FUNC_12(VAR_14, VAR_8);
 FUNC_0(VAR_10);
 FUNC_7(VAR_10);
 FUNC_1(VAR_10);

 return (VAR_17);
}
