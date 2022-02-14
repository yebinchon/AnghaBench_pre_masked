
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ah_eeprom; } ;
struct TYPE_6__ {int antdiv_ctl2; int antdiv_ctl1; } ;
struct TYPE_5__ {TYPE_2__ modalHeader; } ;
struct TYPE_7__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ MODAL_EEP4K_HEADER ;
typedef TYPE_3__ HAL_EEPROM_v4k ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int * VAR_0 ;
 int FUNC_1 (struct ath_hal*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_1)
{
 const HAL_EEPROM_v4k *VAR_2 = FUNC_0(VAR_1)->ah_eeprom;
 const MODAL_EEP4K_HEADER *VAR_3 = &VAR_2->ee_base.modalHeader;

 FUNC_1(VAR_1, "[ath] AR9285 Main LNA config: %s\n",
     VAR_0[(VAR_3->antdiv_ctl2 >> 2) & 0x3]);
 FUNC_1(VAR_1, "[ath] AR9285 Alt LNA config: %s\n",
     VAR_0[VAR_3->antdiv_ctl2 & 0x3]);
 FUNC_1(VAR_1, "[ath] LNA diversity %s, Diversity %s\n",
     ((VAR_3->antdiv_ctl1 & 0x1) ? "enabled" : "disabled"),
     ((VAR_3->antdiv_ctl1 & 0x8) ? "enabled" : "disabled"));
}
