
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xbd_flag_t ;
struct xbd_softc {int xbd_flags; int xbd_qfrozen_cnt; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct xbd_softc *VAR_1, xbd_flag_t VAR_2)
{
 if (VAR_2 != VAR_0 && (VAR_1->xbd_flags & VAR_2) != 0)
  return;

 VAR_1->xbd_flags |= VAR_2;
 VAR_1->xbd_qfrozen_cnt++;
}
