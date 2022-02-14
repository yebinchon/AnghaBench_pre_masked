
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_rg {TYPE_1__* qmi_rg; TYPE_2__* bmi_rg; } ;
struct fman_cfg {int qmi_def_tnums_thresh; scalar_t__ qmi_deq_option_support; } ;
struct TYPE_4__ {int fmbm_init; } ;
struct TYPE_3__ {int fmqm_gc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;

int FUNC_1(struct fman_rg *VAR_4, struct fman_cfg *VAR_5)
{
 uint32_t VAR_6 = 0;






 VAR_6 = VAR_3;
 if (VAR_5->qmi_deq_option_support)
  VAR_6 |= (uint32_t)(((VAR_5->qmi_def_tnums_thresh) << 8) |
    (uint32_t)VAR_5->qmi_def_tnums_thresh);

 FUNC_0(VAR_0, &VAR_4->bmi_rg->fmbm_init);
 FUNC_0(VAR_6 | VAR_2 | VAR_1,
   &VAR_4->qmi_rg->fmqm_gc);

 return 0;
}
