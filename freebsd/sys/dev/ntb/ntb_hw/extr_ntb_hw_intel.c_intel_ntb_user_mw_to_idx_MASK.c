
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ b2b_mw_idx; scalar_t__ b2b_off; scalar_t__ msix_mw_idx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0(struct ntb_softc *VAR_1, unsigned VAR_2)
{

 if ((VAR_1->b2b_mw_idx != VAR_0 && VAR_1->b2b_off == 0 &&
     VAR_2 >= VAR_1->b2b_mw_idx) ||
     (VAR_1->msix_mw_idx != VAR_0 && VAR_2 >= VAR_1->msix_mw_idx))
  VAR_2++;
 if ((VAR_1->b2b_mw_idx != VAR_0 && VAR_1->b2b_off == 0 &&
     VAR_2 >= VAR_1->b2b_mw_idx) &&
     (VAR_1->msix_mw_idx != VAR_0 && VAR_2 >= VAR_1->msix_mw_idx))
  VAR_2++;
 return (VAR_2);
}
