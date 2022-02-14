
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = VAR_9 ? VAR_9 : ~0;
 HAL_BOOL VAR_11;

 (void) FUNC_1(VAR_8, VAR_6);
 FUNC_2(VAR_8, VAR_3, VAR_9);


 FUNC_0(15);

 VAR_9 &= VAR_5 | VAR_4;
 VAR_10 &= VAR_5 | VAR_4;
 VAR_11 = FUNC_3(VAR_8, VAR_3, VAR_10, VAR_9);
        if ((VAR_9 & VAR_5) == 0) {
  if (FUNC_4()) {



   VAR_10 = VAR_7 | VAR_2 | VAR_1;
   FUNC_2(VAR_8, VAR_0, VAR_10);
  } else
   FUNC_2(VAR_8, VAR_0, VAR_7);
 }
 return VAR_11;
}
