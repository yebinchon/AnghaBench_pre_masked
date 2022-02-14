
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustorage_fs_softc {int sc_mtx; int sc_xfer; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ustorage_fs_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct ustorage_fs_softc *VAR_2 = FUNC_0(VAR_1);



 FUNC_2(VAR_2->sc_xfer, VAR_0);

 FUNC_1(&VAR_2->sc_mtx);

 return (0);
}
