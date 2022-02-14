
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_int32_t ;
typedef void* u_int16_t ;
struct TYPE_8__ {void** ant_ctrl_chain; void* paprd_rate_mask_ht40; void* paprd_rate_mask_ht20; void* ant_ctrl_common2; void* ant_ctrl_common; } ;
struct TYPE_7__ {void** ant_ctrl_chain; void* paprd_rate_mask_ht40; void* paprd_rate_mask_ht20; void* ant_ctrl_common2; void* ant_ctrl_common; } ;
struct TYPE_6__ {void* swreg; void** reg_dmn; } ;
struct TYPE_9__ {TYPE_3__ modal_header_5g; TYPE_2__ modal_header_2g; TYPE_1__ base_eep_header; } ;
typedef TYPE_4__ ar9300_eeprom_t ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

void
FUNC_2(ar9300_eeprom_t *VAR_1)
{
    u_int32_t VAR_2;
    u_int16_t VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0(VAR_1->base_eep_header.reg_dmn[0]);
    VAR_1->base_eep_header.reg_dmn[0] = VAR_3;

    VAR_3 = FUNC_0(VAR_1->base_eep_header.reg_dmn[1]);
    VAR_1->base_eep_header.reg_dmn[1] = VAR_3;

    VAR_2 = FUNC_1(VAR_1->base_eep_header.swreg);
    VAR_1->base_eep_header.swreg = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_2g.ant_ctrl_common);
    VAR_1->modal_header_2g.ant_ctrl_common = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_2g.ant_ctrl_common2);
    VAR_1->modal_header_2g.ant_ctrl_common2 = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_2g.paprd_rate_mask_ht20);
    VAR_1->modal_header_2g.paprd_rate_mask_ht20 = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_2g.paprd_rate_mask_ht40);
    VAR_1->modal_header_2g.paprd_rate_mask_ht40 = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_5g.ant_ctrl_common);
    VAR_1->modal_header_5g.ant_ctrl_common = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_5g.ant_ctrl_common2);
    VAR_1->modal_header_5g.ant_ctrl_common2 = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_5g.paprd_rate_mask_ht20);
    VAR_1->modal_header_5g.paprd_rate_mask_ht20 = VAR_2;

    VAR_2 = FUNC_1(VAR_1->modal_header_5g.paprd_rate_mask_ht40);
    VAR_1->modal_header_5g.paprd_rate_mask_ht40 = VAR_2;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_3 = FUNC_0(VAR_1->modal_header_2g.ant_ctrl_chain[VAR_4]);
        VAR_1->modal_header_2g.ant_ctrl_chain[VAR_4] = VAR_3;

        VAR_3 = FUNC_0(VAR_1->modal_header_5g.ant_ctrl_chain[VAR_4]);
        VAR_1->modal_header_5g.ant_ctrl_chain[VAR_4] = VAR_3;
    }
}
