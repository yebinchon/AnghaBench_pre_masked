
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int * xbd_disk; int xbd_users; } ;
typedef int device_t ;
typedef int XenbusState ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct xbd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xbd_softc*) ;
 int FUNC_7 (struct xbd_softc*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_0, XenbusState VAR_1)
{
 struct xbd_softc *VAR_2 = FUNC_2(VAR_0);

 FUNC_0("backend_state=%d\n", VAR_1);

 switch (VAR_1) {
 case 128:
 case 131:
 case 130:
 case 129:
 case 136:
  break;

 case 133:
 case 132:
  FUNC_7(VAR_2);
  break;

 case 134:
  FUNC_7(VAR_2);
  FUNC_6(VAR_2);
  break;

 case 135:
  if (VAR_2->xbd_users > 0) {
   FUNC_3(VAR_0, "detaching with pending users\n");
   FUNC_1(VAR_2->xbd_disk != ((void*)0),
       ("NULL disk with pending users\n"));
   FUNC_4(VAR_2->xbd_disk);
  } else {
   FUNC_5(VAR_0);
  }
  break;
 }
}
