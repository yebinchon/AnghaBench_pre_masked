
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct fman_port_bpools {int count; scalar_t__ grp_bp_depleted_num; TYPE_4__* bpool; scalar_t__ counters_enable; } ;
struct fman_port {int type; int ext_pools_num; int fm_rev_maj; TYPE_3__* bmi_regs; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ pfc_priorities_en; scalar_t__ single_bp_depleted; scalar_t__ grp_bp_depleted; scalar_t__ is_backup; scalar_t__ bpid; } ;
struct TYPE_6__ {int* fmbm_oebmpi; int fmbm_ompd; } ;
struct TYPE_5__ {int* fmbm_ebmpi; int fmbm_mpd; } ;
struct TYPE_7__ {TYPE_2__ oh; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int*) ;

int FUNC_1(const struct fman_port *VAR_11,
        const struct fman_port_bpools *VAR_12)
{
    uint32_t VAR_13, *VAR_14, *VAR_15;
    uint8_t VAR_16, VAR_17;
    bool VAR_18 = VAR_7, VAR_19;

    switch (VAR_11->type) {
    case 129:
    case 128:
        VAR_17 = VAR_11->ext_pools_num;
        VAR_19 = VAR_10;
        VAR_14 = VAR_11->bmi_regs->rx.fmbm_ebmpi;
        VAR_15 = &VAR_11->bmi_regs->rx.fmbm_mpd;
        break;
    case 130:
        if (VAR_11->fm_rev_maj != 4)
            return -VAR_6;
        VAR_17 = VAR_9;
        VAR_19 = VAR_7;
        VAR_14 = VAR_11->bmi_regs->oh.fmbm_oebmpi;
        VAR_15 = &VAR_11->bmi_regs->oh.fmbm_ompd;
        break;
    default:
        return -VAR_6;
    }

    if (VAR_19) {

        for (VAR_16 = 0;
             (VAR_16 < (VAR_12->count-1) && (VAR_16 < VAR_8 - 1));
             VAR_16++) {
            if (VAR_12->bpool[VAR_16].size > VAR_12->bpool[VAR_16+1].size)
                return -VAR_6;
        }
    }


    for (VAR_16 = 0; VAR_16 < VAR_12->count; VAR_16++) {
        VAR_13 = VAR_4;
        VAR_13 |= ((uint32_t)VAR_12->bpool[VAR_16].bpid <<
            VAR_3) & VAR_2;

        if (VAR_19) {
            if (VAR_12->counters_enable)
                VAR_13 |= VAR_1;

            if (VAR_12->bpool[VAR_16].is_backup)
                VAR_13 |= VAR_0;

            VAR_13 |= (uint32_t)VAR_12->bpool[VAR_16].size;
        }

        FUNC_0(VAR_13, &VAR_14[VAR_16]);
    }


    for (VAR_16 = VAR_12->count; VAR_16 < VAR_17; VAR_16++)
        FUNC_0(0, &VAR_14[VAR_16]);


    VAR_13 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
        if (VAR_12->bpool[VAR_16].grp_bp_depleted) {
            VAR_18 = VAR_10;
            VAR_13 |= 0x80000000 >> VAR_16;
        }

        if (VAR_12->bpool[VAR_16].single_bp_depleted)
            VAR_13 |= 0x80 >> VAR_16;

        if (VAR_12->bpool[VAR_16].pfc_priorities_en)
            VAR_13 |= 0x0100 << VAR_16;
    }

    if (VAR_18)
        VAR_13 |= ((uint32_t)VAR_12->grp_bp_depleted_num - 1) <<
            VAR_5;

    FUNC_0(VAR_13, VAR_15);
    return 0;
}
