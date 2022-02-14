
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ running_index; } ;
struct TYPE_4__ {scalar_t__ attn_bits_index; } ;
struct host_sp_status_block {TYPE_1__ sp_sb; TYPE_2__ atten_status_block; } ;
struct bxe_softc {scalar_t__ def_att_idx; scalar_t__ def_idx; struct host_sp_status_block* def_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static uint16_t
FUNC_1(struct bxe_softc *VAR_2)
{
    struct host_sp_status_block *VAR_3 = VAR_2->def_sb;
    uint16_t VAR_4 = 0;

    FUNC_0();

    if (VAR_2->def_att_idx != VAR_3->atten_status_block.attn_bits_index) {
        VAR_2->def_att_idx = VAR_3->atten_status_block.attn_bits_index;
        VAR_4 |= VAR_0;
    }

    if (VAR_2->def_idx != VAR_3->sp_sb.running_index) {
        VAR_2->def_idx = VAR_3->sp_sb.running_index;
        VAR_4 |= VAR_1;
    }

    FUNC_0();

    return (VAR_4);
}
