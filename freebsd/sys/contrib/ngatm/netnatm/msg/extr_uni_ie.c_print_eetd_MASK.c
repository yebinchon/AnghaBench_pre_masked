
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unicx {int dummy; } ;
struct TYPE_2__ {int present; } ;
struct uni_ie_eetd {TYPE_1__ h; int pmtd; int pctd; int maximum; int cumulative; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct unicx*,char*,char*,...) ;
 int FUNC_1 (char*,struct unicx*) ;
 int FUNC_2 (struct unicx*) ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*,struct unicx*) ;

__attribute__((used)) static void
FUNC_4(struct uni_ie_eetd *VAR_6, struct unicx *VAR_7)
{
 if (FUNC_3("eetd", &VAR_6->h, VAR_7))
  return;

 if (VAR_6->h.present & VAR_1)
  FUNC_0(VAR_7, "cum", "%u", VAR_6->cumulative);
 if (VAR_6->h.present & VAR_2) {
  if (VAR_6->maximum == VAR_0)
   FUNC_0(VAR_7, "max", "any");
  else
   FUNC_0(VAR_7, "max", "%u", VAR_6->maximum);
 }
 if (VAR_6->h.present & VAR_4)
  FUNC_0(VAR_7, "pnni_cum", "%u", VAR_6->pctd);
 if (VAR_6->h.present & VAR_5)
  FUNC_0(VAR_7, "pnni_max", "%u", VAR_6->pmtd);
 if (VAR_6->h.present & VAR_3)
  FUNC_1("netgen", VAR_7);

 FUNC_2(VAR_7);
}
