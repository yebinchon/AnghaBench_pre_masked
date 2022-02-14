
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int * sc_xfer; int keys_bmap; int free_keys_bmap; int tx_task; int calib_task; scalar_t__ sc_calibrating; scalar_t__ sc_vap_is_running; scalar_t__ sc_running; } ;


 int FUNC_0 (struct rsu_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct rsu_softc*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rsu_softc*) ;
 int FUNC_4 (struct rsu_softc*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct rsu_softc *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);
 if (!VAR_2->sc_running) {
  FUNC_1(VAR_2);
  return;
 }

 VAR_2->sc_running = 0;
 VAR_2->sc_vap_is_running = 0;
 VAR_2->sc_calibrating = 0;
 FUNC_6(VAR_1, &VAR_2->calib_task, ((void*)0));
 FUNC_5(VAR_1, &VAR_2->tx_task, ((void*)0));


 FUNC_4(VAR_2);





 FUNC_2(VAR_2->free_keys_bmap, 0, sizeof(VAR_2->free_keys_bmap));
 FUNC_2(VAR_2->keys_bmap, 0, sizeof(VAR_2->keys_bmap));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_7(VAR_2->sc_xfer[VAR_3]);


 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
}
