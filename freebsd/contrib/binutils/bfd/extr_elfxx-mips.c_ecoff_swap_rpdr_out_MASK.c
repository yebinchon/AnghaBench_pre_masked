
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpdr_ext {int p_irpss; int p_pcreg; int p_framereg; int p_frameoffset; int p_fregoffset; int p_fregmask; int p_regoffset; int p_regmask; int p_adr; } ;
typedef int bfd ;
struct TYPE_3__ {int irpss; int pcreg; int framereg; int frameoffset; int fregoffset; int fregmask; int regoffset; int regmask; int adr; } ;
typedef TYPE_1__ RPDR ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_0, const RPDR *VAR_1, struct rpdr_ext *VAR_2)
{
  FUNC_2 (VAR_0, VAR_1->adr, VAR_2->p_adr);
  FUNC_1 (VAR_0, VAR_1->regmask, VAR_2->p_regmask);
  FUNC_1 (VAR_0, VAR_1->regoffset, VAR_2->p_regoffset);
  FUNC_1 (VAR_0, VAR_1->fregmask, VAR_2->p_fregmask);
  FUNC_1 (VAR_0, VAR_1->fregoffset, VAR_2->p_fregoffset);
  FUNC_1 (VAR_0, VAR_1->frameoffset, VAR_2->p_frameoffset);

  FUNC_0 (VAR_0, VAR_1->framereg, VAR_2->p_framereg);
  FUNC_0 (VAR_0, VAR_1->pcreg, VAR_2->p_pcreg);

  FUNC_1 (VAR_0, VAR_1->irpss, VAR_2->p_irpss);
}
