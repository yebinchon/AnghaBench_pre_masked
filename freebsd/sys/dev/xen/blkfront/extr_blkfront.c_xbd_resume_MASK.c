
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_state; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct xbd_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct xbd_softc*) ;
 int FUNC_3 (struct xbd_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct xbd_softc *VAR_3 = FUNC_1(VAR_2);

 if (VAR_1) {
  VAR_3->xbd_state = VAR_0;
  return (0);
 }

 FUNC_0("xbd_resume: %s\n", FUNC_4(VAR_2));

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 return (0);
}
