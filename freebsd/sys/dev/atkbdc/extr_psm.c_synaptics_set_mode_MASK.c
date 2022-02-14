
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ model; } ;
struct TYPE_3__ {scalar_t__ capReportsV; scalar_t__ capAdvancedGestures; } ;
struct psm_softc {int kbdc; TYPE_2__ hw; TYPE_1__ synhw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct psm_softc *VAR_2, int VAR_3) {
 FUNC_0(VAR_2->kbdc, VAR_3);


 FUNC_1(VAR_2->kbdc, 20);





 if ((VAR_2->synhw.capAdvancedGestures || VAR_2->synhw.capReportsV) &&
     VAR_2->hw.model == VAR_0 && !(VAR_3 & (1 << 5))) {
  FUNC_0(VAR_2->kbdc, VAR_1);
  FUNC_1(VAR_2->kbdc, 0xc8);
 }
}
