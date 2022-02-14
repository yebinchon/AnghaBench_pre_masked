
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_4__ {int nf_cw_int_delta; TYPE_1__* nfp; } ;
struct TYPE_3__ {int nominal; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

int16_t FUNC_3(struct ath_hal *VAR_5)
{
    int16_t VAR_6;



    if ((FUNC_2(VAR_5, VAR_1) & VAR_2) == 0) {
        VAR_6 = FUNC_1(FUNC_2(VAR_5, VAR_3), VAR_0);
        if (VAR_6 & 0x100) {
            VAR_6 = 0 - ((VAR_6 ^ 0x1ff) + 1);
        }
    } else {

        VAR_6 = FUNC_0(VAR_5)->nfp->nominal + FUNC_0(VAR_5)->nf_cw_int_delta +
            VAR_4;
    }
    return VAR_6;
}
