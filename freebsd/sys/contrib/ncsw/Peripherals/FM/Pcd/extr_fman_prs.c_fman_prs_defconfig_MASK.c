
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_prs_cfg {int prs_exceptions; int max_prs_cyc_lim; scalar_t__ port_id_stat; } ;


 int VAR_0 ;

void FUNC_0(struct fman_prs_cfg *VAR_1)
{
 VAR_1->port_id_stat = 0;
 VAR_1->max_prs_cyc_lim = VAR_0;
 VAR_1->prs_exceptions = 0x03000000;
}
