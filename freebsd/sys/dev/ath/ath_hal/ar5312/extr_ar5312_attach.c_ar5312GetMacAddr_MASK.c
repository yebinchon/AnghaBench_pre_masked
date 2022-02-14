
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct ar531x_boarddata {int * wlan1Mac; int * wlan0Mac; } ;
struct TYPE_2__ {int ah_macaddr; } ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ar531x_boarddata* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (struct ath_hal*,char*,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_2)
{
 const struct ar531x_boarddata *VAR_3 = FUNC_1(VAR_2);
        int VAR_4 = FUNC_2(VAR_2);
        const uint8_t *VAR_5;

 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_3->wlan0Mac;
  break;
 case 1:
  VAR_5 = VAR_3->wlan1Mac;
  break;
 default:




  return VAR_0;
 }
 FUNC_3(FUNC_0(VAR_2)->ah_macaddr, VAR_5, 6);
 return VAR_1;
}
