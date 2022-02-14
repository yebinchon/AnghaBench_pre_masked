
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {int dummy; } ;
struct uni_abr_rec {int present; int adtf; int cdf; int trm; int nrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct unicx*,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct unicx *VAR_4, struct uni_abr_rec *VAR_5)
{
 if(VAR_5->present & VAR_2)
  FUNC_0(VAR_4, "nrm", "%d", VAR_5->nrm);
 if(VAR_5->present & VAR_3)
  FUNC_0(VAR_4, "trm", "%d", VAR_5->trm);
 if(VAR_5->present & VAR_1)
  FUNC_0(VAR_4, "cdf", "%d", VAR_5->cdf);
 if(VAR_5->present & VAR_0)
  FUNC_0(VAR_4, "adtf", "%d", VAR_5->adtf);
}
