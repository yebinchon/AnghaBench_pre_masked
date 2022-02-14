
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int u_long ;
struct usb_fifo {int dummy; } ;
struct uled_color {char red; char green; char blue; } ;
struct uled_softc {int sc_flags; int sc_mtx; struct uled_color sc_color; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uled_softc*,int ,int ,int,int ,char*,int) ;
 struct uled_softc* FUNC_3 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_4(struct usb_fifo *VAR_4, u_long VAR_5, void *VAR_6, int VAR_7)
{
 struct uled_softc *VAR_8;
 struct uled_color VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_4);
 VAR_10 = 0;

 FUNC_0(&VAR_8->sc_mtx);

 switch(VAR_5) {
 case 129:
  *(struct uled_color *)VAR_6 = VAR_8->sc_color;
  break;
 case 128:
  VAR_9 = *(struct uled_color *)VAR_6;
  uint8_t VAR_11[8];

  VAR_8->sc_color.red = VAR_9.red;
  VAR_8->sc_color.green = VAR_9.green;
  VAR_8->sc_color.blue = VAR_9.blue;

  if (VAR_8->sc_flags & VAR_1) {
   VAR_11[0] = 0x1;
   VAR_11[1] = 'n';
   VAR_11[2] = VAR_9.red;
   VAR_11[3] = VAR_9.green;
   VAR_11[4] = VAR_9.blue;
   VAR_11[5] = VAR_11[6] = VAR_11[7] = 0;
  } else {
   VAR_11[0] = VAR_9.red;
   VAR_11[1] = VAR_9.green;
   VAR_11[2] = VAR_9.blue;
   VAR_11[3] = VAR_11[4] = VAR_11[5] = 0;
   VAR_11[6] = 0x1a;
   VAR_11[7] = 0x05;
  }
  VAR_10 = FUNC_2(VAR_8, VAR_3,
      VAR_2, 0x200, 0, VAR_11, sizeof(VAR_11));
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }

 FUNC_1(&VAR_8->sc_mtx);
 return (VAR_10);
}
