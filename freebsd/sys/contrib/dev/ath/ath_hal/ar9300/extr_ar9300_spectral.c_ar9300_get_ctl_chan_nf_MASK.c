
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_private {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_4__ {TYPE_1__* nfp; } ;
struct TYPE_3__ {int nominal; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 struct ath_hal_private* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hal*,int ) ;

int16_t FUNC_4(struct ath_hal *VAR_4)
{
    int16_t VAR_5;




    if ( (FUNC_3(VAR_4, VAR_0) & VAR_1) == 0) {

        VAR_5 = FUNC_2(FUNC_3(VAR_4, VAR_2), VAR_3);
    } else {

        VAR_5 = FUNC_0(VAR_4)->nfp->nominal;
    }
    if (VAR_5 & 0x100) {
        VAR_5 = (0 - ((VAR_5 ^ 0x1ff) + 1));
    }
    return VAR_5;
}
