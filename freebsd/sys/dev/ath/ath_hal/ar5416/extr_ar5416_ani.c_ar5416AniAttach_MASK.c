
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_procPhyErr; int ah_aniParams24; int ah_ani; int ah_aniParams5; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniParams {int dummy; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 struct ar5212AniParams const* VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct ar5212AniParams const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ath_hal*,int *) ;
 int FUNC_5 (struct ath_hal*,int *) ;

void
FUNC_6(struct ath_hal *VAR_2, const struct ar5212AniParams *VAR_3,
 const struct ar5212AniParams *VAR_4, HAL_BOOL VAR_5)
{
 struct ath_hal_5212 *VAR_6 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_0) {
  FUNC_2(&VAR_6->ah_aniParams24, VAR_3, sizeof(*VAR_3));
  FUNC_5(VAR_2, &VAR_6->ah_aniParams24);
 }
 if (VAR_4 != VAR_0) {
  FUNC_2(&VAR_6->ah_aniParams5, VAR_4, sizeof(*VAR_4));
  FUNC_5(VAR_2, &VAR_6->ah_aniParams5);
 }

 FUNC_3(VAR_6->ah_ani, sizeof(VAR_6->ah_ani));

 FUNC_4(VAR_2, &VAR_6->ah_aniParams24 );

 if (VAR_5) {
  FUNC_1(VAR_3 != VAR_0 && VAR_4 != VAR_0);
  VAR_6->ah_procPhyErr |= VAR_1;
 } else {
  VAR_6->ah_procPhyErr &= ~VAR_1;
 }
}
