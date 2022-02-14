
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_11__ {int type; int fm_cld; int fmqm_gs; int fm_npi; int fmfp_extc; } ;
struct TYPE_9__ {int type; scalar_t__ sleep; } ;
struct TYPE_13__ {TYPE_3__ getParams; TYPE_1__ setParams; } ;
typedef TYPE_5__ t_FmGetSetParams ;
struct TYPE_14__ {TYPE_4__* p_FmFpmRegs; TYPE_2__* p_FmQmiRegs; scalar_t__ baseAddr; } ;
typedef TYPE_6__ t_Fm ;
struct TYPE_15__ {int iready; } ;
typedef TYPE_7__ t_FMIramRegs ;
typedef int t_Error ;
struct TYPE_12__ {int fmfp_extc; int fm_npi; int fm_cld; int fmfp_brkc; } ;
struct TYPE_10__ {int fmqm_gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int) ;

t_Error FUNC_3(t_Handle VAR_13, t_FmGetSetParams *VAR_14)
{
 t_Fm* VAR_15 = (t_Fm*)VAR_13;
 if (VAR_14->setParams.type & VAR_9)
 {
  FUNC_2(VAR_15->p_FmFpmRegs->fm_cld, FUNC_0(
    VAR_15->p_FmFpmRegs->fm_cld) | 0x00000800);
 }
 if (VAR_14->setParams.type & VAR_0)
 {
     t_FMIramRegs *VAR_16 = (t_FMIramRegs *)FUNC_1(VAR_15->baseAddr + VAR_2);
  FUNC_2(VAR_16->iready,FUNC_0(VAR_16->iready) & ~VAR_8);
 }
 if (VAR_14->setParams.type & VAR_11)
  FUNC_2(VAR_15->p_FmFpmRegs->fmfp_extc,0x80000000);
 if (VAR_14->setParams.type & VAR_12)
  FUNC_2(VAR_15->p_FmFpmRegs->fmfp_extc,0x00800000);
 if (VAR_14->setParams.type & VAR_10)
 {
  if (VAR_14->setParams.sleep)
   FUNC_2(VAR_15->p_FmFpmRegs->fmfp_brkc, FUNC_0(
    VAR_15->p_FmFpmRegs->fmfp_brkc) | VAR_3);
  else
   FUNC_2(VAR_15->p_FmFpmRegs->fmfp_brkc, FUNC_0(
    VAR_15->p_FmFpmRegs->fmfp_brkc) & ~VAR_3);
 }
 if (VAR_14->getParams.type & VAR_6)
  VAR_14->getParams.fm_cld = FUNC_0(VAR_15->p_FmFpmRegs->fm_cld);
 if (VAR_14->getParams.type & VAR_5)
  VAR_14->getParams.fmqm_gs = FUNC_0(VAR_15->p_FmQmiRegs->fmqm_gs);
 if (VAR_14->getParams.type & VAR_7)
  VAR_14->getParams.fm_npi = FUNC_0(VAR_15->p_FmFpmRegs->fm_npi);
 if (VAR_14->getParams.type & VAR_4)
  VAR_14->getParams.fmfp_extc = FUNC_0(VAR_15->p_FmFpmRegs->fmfp_extc);
 return VAR_1;
}
