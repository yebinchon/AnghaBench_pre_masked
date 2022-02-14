
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ubt_softc_p ;
struct TYPE_5__ {int sc_task_flags; int sc_if_mtx; int * sc_xfer; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_13, int VAR_14)
{
 ubt_softc_p VAR_15 = VAR_13;
 int VAR_16, VAR_17;

 FUNC_0(VAR_15);
 VAR_16 = VAR_15->sc_task_flags;
 VAR_15->sc_task_flags = 0;
 FUNC_1(VAR_15);







 if (VAR_16 & VAR_3)
  for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17 ++)
   FUNC_5(VAR_15->sc_xfer[VAR_17]);


 if (VAR_16 & VAR_0) {




  FUNC_2(&VAR_15->sc_if_mtx);

  FUNC_4(VAR_15, VAR_7);
  FUNC_4(VAR_15, VAR_4);
  FUNC_4(VAR_15, VAR_8);
  FUNC_4(VAR_15, VAR_9);
  FUNC_4(VAR_15, VAR_10);
  FUNC_4(VAR_15, VAR_11);

  FUNC_3(&VAR_15->sc_if_mtx);
 }


 if (VAR_16 & VAR_2) {
  FUNC_2(&VAR_15->sc_if_mtx);
  FUNC_4(VAR_15, VAR_6);
  FUNC_3(&VAR_15->sc_if_mtx);
 }


 if (VAR_16 & VAR_1) {
  FUNC_2(&VAR_15->sc_if_mtx);
  FUNC_4(VAR_15, VAR_5);
  FUNC_3(&VAR_15->sc_if_mtx);
 }
}
