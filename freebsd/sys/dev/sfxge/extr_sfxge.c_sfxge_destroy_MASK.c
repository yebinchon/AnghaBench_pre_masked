
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int task_reset; int dev; int * enp; } ;
typedef int efx_nic_t ;


 int FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sfxge_softc*) ;
 int FUNC_8 (struct sfxge_softc*) ;
 int FUNC_9 (struct sfxge_softc*) ;
 int FUNC_10 (struct sfxge_softc*) ;
 int FUNC_11 (struct sfxge_softc*) ;
 int FUNC_12 (struct sfxge_softc*) ;
 int FUNC_13 (struct sfxge_softc*) ;
 int FUNC_14 (struct sfxge_softc*) ;
 int FUNC_15 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_16(struct sfxge_softc *VAR_1)
{
 efx_nic_t *VAR_2;


 FUNC_14(VAR_1);


 FUNC_13(VAR_1);


 FUNC_12(VAR_1);


 FUNC_9(VAR_1);


 FUNC_10(VAR_1);


 FUNC_2(VAR_1->enp);
 FUNC_5(VAR_1->enp);
 FUNC_4(VAR_1->enp);
 FUNC_3(VAR_1->enp);


 FUNC_11(VAR_1);


 VAR_2 = VAR_1->enp;
 VAR_1->enp = ((void*)0);
 FUNC_1(VAR_2);


 FUNC_8(VAR_1);


 FUNC_7(VAR_1);

 (void) FUNC_6(VAR_1->dev);

 FUNC_15(VAR_0, &VAR_1->task_reset);


 FUNC_0(VAR_1);
}
