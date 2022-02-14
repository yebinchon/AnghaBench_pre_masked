
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ubt_softc_p ;
struct TYPE_3__ {int sc_task_flags; int sc_task; int sc_ng_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(ubt_softc_p VAR_5, int VAR_6)
{
 FUNC_0(&VAR_5->sc_ng_mtx, VAR_0);
 if (VAR_6 != 0) {
  if ((VAR_6 & VAR_3) != 0)
   VAR_5->sc_task_flags &= ~VAR_2;

  VAR_5->sc_task_flags |= VAR_6;
 }

 if (VAR_5->sc_task_flags & VAR_1)
  return;

 if (FUNC_1(VAR_4, &VAR_5->sc_task) == 0) {
  VAR_5->sc_task_flags |= VAR_1;
  return;
 }


}
