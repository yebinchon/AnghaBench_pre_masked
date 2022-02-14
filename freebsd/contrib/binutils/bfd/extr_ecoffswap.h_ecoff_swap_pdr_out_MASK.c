
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pdr_ext {int* p_bits1; int* p_bits2; int p_localoff; int p_gp_prologue; int p_cbLineOffset; int p_lnHigh; int p_lnLow; int p_pcreg; int p_framereg; int p_frameoffset; int p_fregoffset; int p_fregmask; int p_iopt; int p_regoffset; int p_regmask; int p_iline; int p_isym; int p_adr; } ;
typedef int bfd ;
struct TYPE_3__ {int reserved; int localoff; scalar_t__ prof; scalar_t__ reg_frame; scalar_t__ gp_used; int gp_prologue; int cbLineOffset; int lnHigh; int lnLow; int pcreg; int framereg; int frameoffset; int fregoffset; int fregmask; int iopt; int regoffset; int regmask; int iline; int isym; int adr; } ;
typedef TYPE_1__ PDR ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_14, const PDR *VAR_15, void * VAR_16)
{
  struct pdr_ext *VAR_17 = (struct pdr_ext *) VAR_16;
  PDR VAR_18[1];


  *VAR_18 = *VAR_15;

  FUNC_0 (VAR_14, VAR_18->adr, VAR_17->p_adr);
  FUNC_2 (VAR_14, VAR_18->isym, VAR_17->p_isym);
  FUNC_2 (VAR_14, VAR_18->iline, VAR_17->p_iline);
  FUNC_2 (VAR_14, VAR_18->regmask, VAR_17->p_regmask);
  FUNC_2 (VAR_14, VAR_18->regoffset, VAR_17->p_regoffset);
  FUNC_2 (VAR_14, VAR_18->iopt, VAR_17->p_iopt);
  FUNC_2 (VAR_14, VAR_18->fregmask, VAR_17->p_fregmask);
  FUNC_2 (VAR_14, VAR_18->fregoffset, VAR_17->p_fregoffset);
  FUNC_2 (VAR_14, VAR_18->frameoffset, VAR_17->p_frameoffset);
  FUNC_1 (VAR_14, VAR_18->framereg, VAR_17->p_framereg);
  FUNC_1 (VAR_14, VAR_18->pcreg, VAR_17->p_pcreg);
  FUNC_2 (VAR_14, VAR_18->lnLow, VAR_17->p_lnLow);
  FUNC_2 (VAR_14, VAR_18->lnHigh, VAR_17->p_lnHigh);
  FUNC_0 (VAR_14, VAR_18->cbLineOffset, VAR_17->p_cbLineOffset);
}
