
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,scalar_t__) ;
 int FUNC_2 (struct ath_hal*) ;

void
FUNC_3(struct ath_hal *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3 != VAR_4) {
  VAR_3 |= VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_3);
 }
 return;
}
