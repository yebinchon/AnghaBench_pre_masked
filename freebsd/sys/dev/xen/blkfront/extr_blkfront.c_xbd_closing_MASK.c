
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int * xbd_disk; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xbd_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct xbd_softc *VAR_3 = FUNC_1(VAR_2);

 FUNC_4(VAR_2, VAR_1);

 FUNC_0("xbd_closing: %s removed\n", FUNC_3(VAR_2));

 if (VAR_3->xbd_disk != ((void*)0)) {
  FUNC_2(VAR_3->xbd_disk);
  VAR_3->xbd_disk = ((void*)0);
 }

 FUNC_4(VAR_2, VAR_0);
}
