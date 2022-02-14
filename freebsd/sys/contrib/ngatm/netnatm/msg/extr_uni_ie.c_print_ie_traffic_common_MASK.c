
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct unicx {int dummy; } ;
struct uni_xtraffic {scalar_t__ bdisc; scalar_t__ fdisc; scalar_t__ btag; scalar_t__ ftag; int babr1; int bmbs1; int bmbs0; int bscr1; int bscr0; int bpcr1; int bpcr0; int fabr1; int fmbs1; int fmbs0; int fscr1; int fscr0; int fpcr1; int fpcr0; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct unicx*,char*,char*) ;
 int FUNC_1 (char*,struct unicx*) ;
 int FUNC_2 (struct unicx*,char*,...) ;
 int FUNC_3 (char,struct unicx*) ;

__attribute__((used)) static void
FUNC_4(struct unicx *VAR_16, u_int VAR_17, struct uni_xtraffic *VAR_18)
{
 FUNC_0(VAR_16, "fwd", "(");
 if(VAR_17 & VAR_11)
  FUNC_2(VAR_16, "%u", VAR_18->fpcr0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_12)
  FUNC_2(VAR_16, "%u", VAR_18->fpcr1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_13)
  FUNC_2(VAR_16, "%u", VAR_18->fscr0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_14)
  FUNC_2(VAR_16, "%u", VAR_18->fscr1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_9)
  FUNC_2(VAR_16, "%u", VAR_18->fmbs0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_10)
  FUNC_2(VAR_16, "%u", VAR_18->fmbs1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_8)
  FUNC_2(VAR_16, "%u", VAR_18->fabr1);
 FUNC_2(VAR_16, ")");

 FUNC_0(VAR_16, "bwd", "(");
 if(VAR_17 & VAR_4)
  FUNC_2(VAR_16, "%u", VAR_18->bpcr0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_5)
  FUNC_2(VAR_16, "%u", VAR_18->bpcr1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_6)
  FUNC_2(VAR_16, "%u", VAR_18->bscr0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_7)
  FUNC_2(VAR_16, "%u", VAR_18->bscr1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_2)
  FUNC_2(VAR_16, "%u", VAR_18->bmbs0);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_3)
  FUNC_2(VAR_16, "%u", VAR_18->bmbs1);
 FUNC_3(',', VAR_16);
 if(VAR_17 & VAR_0)
  FUNC_2(VAR_16, "%u", VAR_18->babr1);
 FUNC_2(VAR_16, ")");

 if(VAR_17 & VAR_1)
  FUNC_1("best_effort", VAR_16);
 if(VAR_17 & VAR_15) {
  FUNC_0(VAR_16, "tag", "(");
  if(VAR_18->ftag)
   FUNC_2(VAR_16, "fwd");
  FUNC_3(',', VAR_16);
  if(VAR_18->btag)
   FUNC_2(VAR_16, "bwd");
  FUNC_3(')', VAR_16);

  FUNC_0(VAR_16, "disc", "(");
  if(VAR_18->fdisc)
   FUNC_2(VAR_16, "fwd");
  FUNC_3(',', VAR_16);
  if(VAR_18->bdisc)
   FUNC_2(VAR_16, "bwd");
  FUNC_3(')', VAR_16);
 }
}
