
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int sli4_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {void* block_size; void* esoc; void* max_burst_len; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_config_auto_xfer_rdy_hp_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_1, void *VAR_2, size_t VAR_3, uint32_t VAR_4,
                                                uint32_t VAR_5, uint32_t VAR_6 )
{
        sli4_cmd_config_auto_xfer_rdy_hp_t *VAR_7 = VAR_2;

        if (!VAR_1 || !VAR_2) {
                return 0;
        }

        FUNC_0(VAR_2, 0, VAR_3);

        VAR_7->hdr.command = VAR_0;
        VAR_7->max_burst_len = VAR_4;
        VAR_7->esoc = VAR_5;
        VAR_7->block_size = VAR_6;
        return sizeof(sli4_cmd_config_auto_xfer_rdy_hp_t);
}
