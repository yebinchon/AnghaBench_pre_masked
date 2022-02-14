
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqmdio_softc {int sc_lock; int sc_offset; int sc_handle; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pqmdio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct pqmdio_softc *VAR_3;
 rman_res_t VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_2);

 FUNC_4(FUNC_2(VAR_2), &VAR_3->sc_handle);
 FUNC_0(VAR_2, VAR_1, 0, &VAR_4, &VAR_5);
 VAR_3->sc_offset = VAR_4;

 FUNC_5(&VAR_3->sc_lock, FUNC_1(VAR_2), "QorIQ MDIO lock",
     VAR_0);

 return (0);
}
