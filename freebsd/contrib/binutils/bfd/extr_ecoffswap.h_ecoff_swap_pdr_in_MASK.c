
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pdr_ext {int* p_bits1; int* p_bits2; int p_localoff; int p_gp_prologue; int p_cbLineOffset; int p_lnHigh; int p_lnLow; int p_pcreg; int p_framereg; int p_frameoffset; int p_fregoffset; int p_fregmask; int p_iopt; int p_regoffset; int p_regmask; int p_iline; int p_isym; int p_adr; } ;
typedef int bfd ;
struct TYPE_3__ {long isym; long iline; int gp_used; int reg_frame; int prof; int reserved; void* localoff; void* gp_prologue; void* cbLineOffset; void* lnHigh; void* lnLow; void* pcreg; void* framereg; void* frameoffset; void* fregoffset; void* fregmask; void* iopt; void* regoffset; void* regmask; void* adr; } ;
typedef TYPE_1__ PDR ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
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
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (void*,int ,int) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_14, void * VAR_15, PDR *VAR_16)
{
  struct pdr_ext VAR_17[1];

  *VAR_17 = *(struct pdr_ext *) VAR_15;

  FUNC_8 ((void *) VAR_16, 0, sizeof (*VAR_16));

  VAR_16->adr = FUNC_0 (VAR_14, VAR_17->p_adr);
  VAR_16->isym = FUNC_2 (VAR_14, VAR_17->p_isym);
  VAR_16->iline = FUNC_2 (VAR_14, VAR_17->p_iline);
  VAR_16->regmask = FUNC_2 (VAR_14, VAR_17->p_regmask);
  VAR_16->regoffset = FUNC_4 (VAR_14, VAR_17->p_regoffset);
  VAR_16->iopt = FUNC_4 (VAR_14, VAR_17->p_iopt);
  VAR_16->fregmask = FUNC_2 (VAR_14, VAR_17->p_fregmask);
  VAR_16->fregoffset = FUNC_4 (VAR_14, VAR_17->p_fregoffset);
  VAR_16->frameoffset = FUNC_4 (VAR_14, VAR_17->p_frameoffset);
  VAR_16->framereg = FUNC_1 (VAR_14, VAR_17->p_framereg);
  VAR_16->pcreg = FUNC_1 (VAR_14, VAR_17->p_pcreg);
  VAR_16->lnLow = FUNC_2 (VAR_14, VAR_17->p_lnLow);
  VAR_16->lnHigh = FUNC_2 (VAR_14, VAR_17->p_lnHigh);
  VAR_16->cbLineOffset = FUNC_0 (VAR_14, VAR_17->p_cbLineOffset);
}
