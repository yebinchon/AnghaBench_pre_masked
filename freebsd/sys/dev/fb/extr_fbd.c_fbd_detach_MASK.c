
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbd_softc {int sc_info; } ;
typedef int device_t ;


 struct fbd_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct fbd_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 VAR_2 = FUNC_1(VAR_1->sc_info);

 return (VAR_2);
}
