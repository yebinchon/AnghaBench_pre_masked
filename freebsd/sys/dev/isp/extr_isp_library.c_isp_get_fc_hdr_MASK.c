
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int parameter; int rx_id; int ox_id; int seq_cnt; int df_ctl; int seq_id; int * f_ctl; int type; int * s_id; int cs_ctl; int * d_id; int r_ctl; } ;
typedef TYPE_1__ fc_hdr_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(ispsoftc_t *VAR_0, fc_hdr_t *VAR_1, fc_hdr_t *VAR_2)
{
        FUNC_2(VAR_0, &VAR_1->r_ctl, VAR_2->r_ctl);
        FUNC_2(VAR_0, &VAR_1->d_id[0], VAR_2->d_id[0]);
        FUNC_2(VAR_0, &VAR_1->d_id[1], VAR_2->d_id[1]);
        FUNC_2(VAR_0, &VAR_1->d_id[2], VAR_2->d_id[2]);
        FUNC_2(VAR_0, &VAR_1->cs_ctl, VAR_2->cs_ctl);
        FUNC_2(VAR_0, &VAR_1->s_id[0], VAR_2->s_id[0]);
        FUNC_2(VAR_0, &VAR_1->s_id[1], VAR_2->s_id[1]);
        FUNC_2(VAR_0, &VAR_1->s_id[2], VAR_2->s_id[2]);
        FUNC_2(VAR_0, &VAR_1->type, VAR_2->type);
        FUNC_2(VAR_0, &VAR_1->f_ctl[0], VAR_2->f_ctl[0]);
        FUNC_2(VAR_0, &VAR_1->f_ctl[1], VAR_2->f_ctl[1]);
        FUNC_2(VAR_0, &VAR_1->f_ctl[2], VAR_2->f_ctl[2]);
        FUNC_2(VAR_0, &VAR_1->seq_id, VAR_2->seq_id);
        FUNC_2(VAR_0, &VAR_1->df_ctl, VAR_2->df_ctl);
        FUNC_0(VAR_0, &VAR_1->seq_cnt, VAR_2->seq_cnt);
        FUNC_0(VAR_0, &VAR_1->ox_id, VAR_2->ox_id);
        FUNC_0(VAR_0, &VAR_1->rx_id, VAR_2->rx_id);
        FUNC_1(VAR_0, &VAR_1->parameter, VAR_2->parameter);
}
