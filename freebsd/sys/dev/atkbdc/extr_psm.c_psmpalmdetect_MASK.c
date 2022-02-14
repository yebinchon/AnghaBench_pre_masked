
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ capPen; scalar_t__ capPalmDetect; scalar_t__ capReportsV; scalar_t__ capAdvancedGestures; scalar_t__ capMultiFinger; } ;
struct TYPE_5__ {scalar_t__ max_width; scalar_t__ max_pressure; } ;
struct psm_softc {TYPE_2__ synhw; TYPE_1__ syninfo; } ;
struct TYPE_7__ {scalar_t__ w; scalar_t__ p; int flags; } ;
typedef TYPE_3__ finger_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct psm_softc *VAR_2, finger_t *VAR_3, int VAR_4)
{
 if (!(
     ((VAR_2->synhw.capMultiFinger || VAR_2->synhw.capAdvancedGestures) &&
       !VAR_2->synhw.capReportsV && VAR_4 > 1) ||
     (VAR_2->synhw.capReportsV && VAR_4 > 2) ||
     (VAR_2->synhw.capPalmDetect && VAR_3->w <= VAR_2->syninfo.max_width) ||
     (!VAR_2->synhw.capPalmDetect && VAR_3->p <= VAR_2->syninfo.max_pressure) ||
     (VAR_2->synhw.capPen && VAR_3->flags & VAR_1))) {
  FUNC_0(2, (VAR_0, "synaptics: palm detected! (%d)\n", VAR_3->w));
  return (1);
 }
 return (0);
}
