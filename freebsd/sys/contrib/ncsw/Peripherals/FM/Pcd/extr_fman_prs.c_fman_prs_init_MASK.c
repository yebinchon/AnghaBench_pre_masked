
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_prs_regs {int fmpr_ppsc; int fmpr_perer; int fmpr_perr; int fmpr_pever; int fmpr_pevr; int fmpr_rpclim; } ;
struct fman_prs_cfg {int max_prs_cyc_lim; int prs_exceptions; int port_id_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;

int FUNC_1(struct fman_prs_regs *VAR_5, struct fman_prs_cfg *VAR_6)
{
 uint32_t VAR_7;

 FUNC_0(VAR_6->max_prs_cyc_lim, &VAR_5->fmpr_rpclim);
 FUNC_0((VAR_4 | VAR_3),
   &VAR_5->fmpr_pevr);

 if (VAR_6->prs_exceptions & VAR_1)
  FUNC_0(VAR_4, &VAR_5->fmpr_pever);
 else
  FUNC_0(0, &VAR_5->fmpr_pever);

 FUNC_0(VAR_2, &VAR_5->fmpr_perr);

 VAR_7 = 0;
 if (VAR_6->prs_exceptions & VAR_0)
  VAR_7 |= VAR_2;
 FUNC_0(VAR_7, &VAR_5->fmpr_perer);

 FUNC_0(VAR_6->port_id_stat, &VAR_5->fmpr_ppsc);

 return 0;
}
