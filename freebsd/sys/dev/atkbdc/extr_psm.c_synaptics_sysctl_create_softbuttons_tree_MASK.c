
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int softbuttons_y; int softbutton2_x; int softbutton3_x; int sysctl_tree; int sysctl_ctx; } ;
struct TYPE_3__ {scalar_t__ topButtonPad; } ;
struct psm_softc {TYPE_2__ syninfo; TYPE_1__ synhw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,char*,int,struct psm_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(struct psm_softc *VAR_8)
{







 VAR_8->syninfo.softbuttons_y = VAR_8->synhw.topButtonPad ? -1700 : 1700;
 FUNC_0(&VAR_8->syninfo.sysctl_ctx,
     FUNC_1(VAR_8->syninfo.sysctl_tree), VAR_3,
     "softbuttons_y", VAR_2|VAR_1|VAR_0,
     VAR_8, VAR_6,
     VAR_7, "I",
     "Vertical size of softbuttons area");


 VAR_8->syninfo.softbutton2_x = 3100;
 FUNC_0(&VAR_8->syninfo.sysctl_ctx,
     FUNC_1(VAR_8->syninfo.sysctl_tree), VAR_3,
     "softbutton2_x", VAR_2|VAR_1|VAR_0,
     VAR_8, VAR_4,
     VAR_7, "I",
     "Horisontal position of 2-nd softbutton left edge (0-disable)");


 VAR_8->syninfo.softbutton3_x = 3900;
 FUNC_0(&VAR_8->syninfo.sysctl_ctx,
     FUNC_1(VAR_8->syninfo.sysctl_tree), VAR_3,
     "softbutton3_x", VAR_2|VAR_1|VAR_0,
     VAR_8, VAR_5,
     VAR_7, "I",
     "Horisontal position of 3-rd softbutton left edge (0-disable)");
}
