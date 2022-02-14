
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fman_rg {TYPE_1__* bmi_rg; TYPE_2__* qmi_rg; } ;
typedef enum fman_exceptions { ____Placeholder_fman_exceptions } fman_exceptions ;
struct TYPE_4__ {int fmqm_eif; int fmqm_if; } ;
struct TYPE_3__ {int fmbm_ifr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct fman_rg *VAR_7,
  enum fman_exceptions VAR_8)
{
 switch (VAR_8) {
 case 130:
  FUNC_0(VAR_4,
    &VAR_7->qmi_rg->fmqm_eif);
  break;
 case 128:
  FUNC_0(VAR_6,
    &VAR_7->qmi_rg->fmqm_if);
  break;
 case 129:
  FUNC_0(VAR_5,
    &VAR_7->qmi_rg->fmqm_eif);
  break;
 case 133:
  FUNC_0(VAR_1,
    &VAR_7->bmi_rg->fmbm_ifr);
  break;
 case 131:
  FUNC_0(VAR_3,
    &VAR_7->bmi_rg->fmbm_ifr);
  break;
 case 132:
  FUNC_0(VAR_2,
    &VAR_7->bmi_rg->fmbm_ifr);
  break;
 case 134:
  FUNC_0(VAR_0,
    &VAR_7->bmi_rg->fmbm_ifr);
  break;
 default:
  break;
 }
}
