
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ath_softc {int dummy; } ;
struct ath_diag {unsigned int ad_id; scalar_t__ ad_in_size; scalar_t__ ad_out_size; int ad_out_data; int ad_in_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (scalar_t__,int ,int) ;

int
FUNC_4(struct ath_softc *VAR_9, struct ath_diag *VAR_10)
{
 unsigned int VAR_11 = VAR_10->ad_id & VAR_1;
 void *VAR_12 = ((void*)0);
 void *VAR_13 = ((void*)0);
 u_int32_t VAR_14 = VAR_10->ad_in_size;
 u_int32_t VAR_15 = VAR_10->ad_out_size;
 int VAR_16 = 0;


 if (VAR_10->ad_id & VAR_2) {



  VAR_12 = FUNC_3(VAR_14, VAR_7, VAR_6);
  if (VAR_12 == ((void*)0)) {
   VAR_16 = VAR_5;
   goto bad;
  }
  VAR_16 = FUNC_0(VAR_10->ad_in_data, VAR_12, VAR_14);
  if (VAR_16)
   goto bad;
 }
 if (VAR_10->ad_id & VAR_0) {







  VAR_13 = FUNC_3(VAR_15, VAR_7, VAR_6 | VAR_8);
  if (VAR_13 == ((void*)0)) {
   VAR_16 = VAR_5;
   goto bad;
  }
 }
 switch (VAR_11) {
  default:
   VAR_16 = VAR_4;
   goto bad;
 }
 if (VAR_15 < VAR_10->ad_out_size)
  VAR_10->ad_out_size = VAR_15;
 if (VAR_13 && FUNC_1(VAR_13, VAR_10->ad_out_data, VAR_10->ad_out_size))
  VAR_16 = VAR_3;
bad:
 if ((VAR_10->ad_id & VAR_2) && VAR_12 != ((void*)0))
  FUNC_2(VAR_12, VAR_7);
 if ((VAR_10->ad_id & VAR_0) && VAR_13 != ((void*)0))
  FUNC_2(VAR_13, VAR_7);
 return (VAR_16);
}
