
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicoc_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iicoc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4 = 0;
 struct iicoc_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_3(&VAR_5->sc_mtx);
 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_2(VAR_3, VAR_2);
 FUNC_4(&VAR_5->sc_mtx);
 return (VAR_4);

}
