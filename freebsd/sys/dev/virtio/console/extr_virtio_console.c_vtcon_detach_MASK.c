
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {int vtcon_flags; int vtcon_ctrl_tx_mtx; int vtcon_mtx; int vtcon_ctrl_task; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_softc*) ;
 struct vtcon_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (struct vtcon_softc*) ;
 int FUNC_7 (struct vtcon_softc*) ;
 int FUNC_8 (struct vtcon_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct vtcon_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4);
 VAR_4->vtcon_flags |= VAR_0;
 if (FUNC_3(VAR_3))
  FUNC_8(VAR_4);
 FUNC_1(VAR_4);

 if (VAR_4->vtcon_flags & VAR_1) {
  FUNC_5(VAR_2, &VAR_4->vtcon_ctrl_task);
  FUNC_6(VAR_4);
 }

 FUNC_7(VAR_4);
 FUNC_4(&VAR_4->vtcon_mtx);
 FUNC_4(&VAR_4->vtcon_ctrl_tx_mtx);

 return (0);
}
