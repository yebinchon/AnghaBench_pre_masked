
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_4__ {int shortPreamble; int rateCode; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static uint8_t
FUNC_1(struct ath_hal *VAR_0, const HAL_RATE_TABLE *VAR_1,
    int VAR_2, int VAR_3)
{
 uint8_t VAR_4;







 FUNC_0(VAR_2 != 0xff, ("cix not setup"));
 VAR_4 = VAR_1->info[VAR_2].rateCode;


 if (VAR_3)
  VAR_4 |= VAR_1->info[VAR_2].shortPreamble;

 return (VAR_4);
}
