
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_5__ {int rateCode; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;
typedef int HAL_BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int,int ,int ) ;
 int FUNC_4 (struct ath_hal*,TYPE_2__ const*,int ,size_t,int ,int ) ;

uint32_t
FUNC_5(struct ath_hal *VAR_0, const HAL_RATE_TABLE *VAR_1, uint32_t VAR_2,
    uint16_t VAR_3, HAL_BOOL VAR_4, HAL_BOOL VAR_5,
    HAL_BOOL VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;

 VAR_7 = VAR_1->info[VAR_3].rateCode;


 if (! FUNC_1(VAR_7))
  return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_5, VAR_6);


 VAR_8 = FUNC_0(VAR_7);
 FUNC_2(VAR_8 > 0 && VAR_8 <= 4,
     ("number of spatial streams needs to be 1..3: MCS rate 0x%x!",
     VAR_3));


 return FUNC_3(VAR_2, VAR_7, VAR_8, VAR_4,
     VAR_5);
}
