
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal_5212 {int ah_procPhyErr; int ah_ani; int ah_aniParams5; int ah_aniParams24; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniParams {int dummy; } ;
struct TYPE_2__ {int ah_opmode; int ah_curchan; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct ar5212AniParams const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int) ;
 int FUNC_6 (struct ath_hal*,int *) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_4, const struct ar5212AniParams *VAR_5,
 const struct ar5212AniParams *VAR_6)
{
 struct ath_hal_5212 *VAR_7 = FUNC_0(VAR_4);
 HAL_BOOL VAR_8 = (VAR_7->ah_procPhyErr & VAR_2) != 0;

 FUNC_4(VAR_4, VAR_3, VAR_0);

 FUNC_2(&VAR_7->ah_aniParams24, VAR_5, sizeof(*VAR_5));
 FUNC_6(VAR_4, &VAR_7->ah_aniParams24);
 FUNC_2(&VAR_7->ah_aniParams5, VAR_6, sizeof(*VAR_6));
 FUNC_6(VAR_4, &VAR_7->ah_aniParams5);

 FUNC_3(VAR_7->ah_ani, sizeof(VAR_7->ah_ani));
 FUNC_5(VAR_4, FUNC_1(VAR_4)->ah_curchan,
     FUNC_1(VAR_4)->ah_opmode, VAR_0);

 FUNC_4(VAR_4, VAR_3, VAR_8);

 return VAR_1;
}
