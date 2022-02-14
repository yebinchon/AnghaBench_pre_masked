
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
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
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (struct ath_hal*,int ,int,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static HAL_BOOL
FUNC_4(struct ath_hal *VAR_9, uint32_t VAR_10, u_int VAR_11)
{
 uint32_t VAR_12 = VAR_10 ? VAR_10 : ~0;
 HAL_BOOL VAR_13;

 FUNC_1(VAR_9, VAR_3, VAR_10);

 FUNC_0(VAR_11);

 VAR_10 &= VAR_6 | VAR_4 | VAR_7 | VAR_5;
 VAR_12 &= VAR_6 | VAR_4 | VAR_7 | VAR_5;
 VAR_13 = FUNC_2(VAR_9, VAR_3, VAR_12, VAR_10);
        if ((VAR_10 & VAR_5) == 0) {
  if (FUNC_3()) {



   VAR_12 = VAR_8 | VAR_2 | VAR_1;
   FUNC_1(VAR_9, VAR_0, VAR_12);
  } else
   FUNC_1(VAR_9, VAR_0, VAR_8);
 }
 return VAR_13;
}
