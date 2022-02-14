
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct usb_fifo {int dummy; } ;
struct uep_softc {int pollrate; int ** xfer; } ;


 size_t VAR_0 ;
 struct uep_softc* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_fifo *VAR_1)
{
 struct uep_softc *VAR_2 = FUNC_0(VAR_1);
 u_int VAR_3;

 if ((VAR_3 = VAR_2->pollrate) > 1000)
  VAR_3 = 1000;

 if (VAR_3 > 0 && VAR_2->xfer[VAR_0] != ((void*)0)) {
  FUNC_2(VAR_2->xfer[VAR_0]);
  FUNC_3(VAR_2->xfer[VAR_0], 1000 / VAR_3);
  VAR_2->pollrate = 0;
 }

 FUNC_1(VAR_2->xfer[VAR_0]);
}
