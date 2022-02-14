
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbd_softc {int * sc_info; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct fbd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct fbd_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 VAR_2->sc_dev = VAR_1;
 VAR_2->sc_info = FUNC_0(FUNC_1(VAR_1));
 if (VAR_2->sc_info == ((void*)0))
  return (VAR_0);
 VAR_3 = FUNC_3(VAR_2->sc_info);

 return (VAR_3);
}
