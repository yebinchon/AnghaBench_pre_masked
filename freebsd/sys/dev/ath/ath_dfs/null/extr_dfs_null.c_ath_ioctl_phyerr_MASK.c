
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_softc {int sc_ah; } ;
struct ath_diag {unsigned int ad_id; int ad_in_size; int ad_out_size; int ad_out_data; int ad_in_data; } ;
typedef int peout ;
typedef int HAL_PHYERR_PARAM ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,void*,int) ;
 scalar_t__ FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int) ;

int
FUNC_8(struct ath_softc *VAR_8, struct ath_diag *VAR_9)
{
 unsigned int VAR_10 = VAR_9->ad_id & VAR_1;
 void *VAR_11 = ((void*)0);
 void *VAR_12 = ((void*)0);
 u_int32_t VAR_13 = VAR_9->ad_in_size;
 u_int32_t VAR_14 = VAR_9->ad_out_size;
 int VAR_15 = 0;
 HAL_PHYERR_PARAM VAR_16;
 HAL_PHYERR_PARAM *VAR_17;

 if (VAR_9->ad_id & VAR_2) {



  VAR_11 = FUNC_5(VAR_13, VAR_7, VAR_6);
  if (VAR_11 == ((void*)0)) {
   VAR_15 = VAR_5;
   goto bad;
  }
  VAR_15 = FUNC_2(VAR_9->ad_in_data, VAR_11, VAR_13);
  if (VAR_15)
   goto bad;
 }
 if (VAR_9->ad_id & VAR_0) {







  VAR_12 = FUNC_5(VAR_14, VAR_7, VAR_6);
  if (VAR_12 == ((void*)0)) {
   VAR_15 = VAR_5;
   goto bad;
  }
 }
 switch (VAR_10) {
  case 128:
   if (VAR_13 < sizeof(HAL_PHYERR_PARAM)) {
    VAR_15 = VAR_4;
    break;
   }
   VAR_17 = (HAL_PHYERR_PARAM *) VAR_11;
   FUNC_0(VAR_8->sc_ah, VAR_17);
   break;
  case 129:
   FUNC_7(&VAR_16, 0, sizeof(VAR_16));
   VAR_14 = sizeof(HAL_PHYERR_PARAM);
   FUNC_1(VAR_8->sc_ah, &VAR_16);
   VAR_17 = (HAL_PHYERR_PARAM *) VAR_12;
   FUNC_6(VAR_17, &VAR_16, sizeof(*VAR_17));
   break;
  default:
   VAR_15 = VAR_4;
 }
 if (VAR_14 < VAR_9->ad_out_size)
  VAR_9->ad_out_size = VAR_14;
 if (VAR_12 && FUNC_3(VAR_12, VAR_9->ad_out_data, VAR_9->ad_out_size))
  VAR_15 = VAR_3;
bad:
 if ((VAR_9->ad_id & VAR_2) && VAR_11 != ((void*)0))
  FUNC_4(VAR_11, VAR_7);
 if ((VAR_9->ad_id & VAR_0) && VAR_12 != ((void*)0))
  FUNC_4(VAR_12, VAR_7);
 return (VAR_15);
}
