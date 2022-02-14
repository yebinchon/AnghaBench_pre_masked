
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_mibStats; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,int *) ;

__attribute__((used)) static void
FUNC_5(struct ath_hal *VAR_3)
{
 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, VAR_2, "Disable MIB counters\n");

 FUNC_4(VAR_3, &VAR_4->ah_mibStats);
 FUNC_3(VAR_3);

 FUNC_2(VAR_3, VAR_0, 0);
 FUNC_2(VAR_3, VAR_1, 0);
}
