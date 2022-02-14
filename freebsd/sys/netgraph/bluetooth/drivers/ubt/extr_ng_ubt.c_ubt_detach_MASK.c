
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubt_softc {int sc_ng_mtx; int sc_if_mtx; int sc_scoq; int sc_aclq; int sc_cmdq; int sc_xfer; int sc_task; int * sc_node; } ;
typedef int * node_p ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubt_softc*) ;
 int FUNC_3 (struct ubt_softc*) ;
 int VAR_0 ;
 struct ubt_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ) ;

int
FUNC_9(device_t VAR_2)
{
 struct ubt_softc *VAR_3 = FUNC_4(VAR_2);
 node_p VAR_4 = VAR_3->sc_node;


 if (VAR_4 != ((void*)0)) {
  VAR_3->sc_node = ((void*)0);
  FUNC_1(VAR_4);
  FUNC_6(VAR_4);
 }


 FUNC_7(VAR_1, &VAR_3->sc_task);


 FUNC_8(VAR_3->sc_xfer, VAR_0);


 FUNC_2(VAR_3);
 FUNC_0(&VAR_3->sc_cmdq);
 FUNC_0(&VAR_3->sc_aclq);
 FUNC_0(&VAR_3->sc_scoq);
 FUNC_3(VAR_3);

 FUNC_5(&VAR_3->sc_if_mtx);
 FUNC_5(&VAR_3->sc_ng_mtx);

 return (0);
}
