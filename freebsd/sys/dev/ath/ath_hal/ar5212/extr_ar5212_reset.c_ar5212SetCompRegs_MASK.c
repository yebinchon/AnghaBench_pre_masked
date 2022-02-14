
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_5212 {int* ah_decompMask; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halCompressSupport; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
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
 int VAR_11 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void
FUNC_4(struct ath_hal *VAR_12)
{
 struct ath_hal_5212 *VAR_13 = FUNC_0(VAR_12);
 int VAR_14;


 if (!FUNC_1(VAR_12)->ah_caps.halCompressSupport)
  return;

 FUNC_3(VAR_12, VAR_8, 1);

 FUNC_3(VAR_12, VAR_0,
  (VAR_6 >> 8) & VAR_2);

 FUNC_3(VAR_12, VAR_0,
  FUNC_2(VAR_12, VAR_0) | VAR_1);
 FUNC_3(VAR_12, VAR_3,
  VAR_5 | VAR_4);

 FUNC_3(VAR_12, VAR_7, 0);


 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  FUNC_3(VAR_12, VAR_9, VAR_14);
  FUNC_3(VAR_12, VAR_10, VAR_13->ah_decompMask[VAR_14]);
 }
}
