
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct udl_softc {int sc_cv; int sc_cmd_buf_free; int sc_cmd_buf_pending; } ;
struct udl_cmd_head {int dummy; } ;
struct udl_cmd_buf {int off; int buf; } ;


 int FUNC_0 (int *,struct udl_cmd_head*,int ) ;
 struct udl_cmd_buf* FUNC_1 (int *) ;
 int FUNC_2 (struct udl_cmd_head*,struct udl_cmd_buf*,int ) ;
 int FUNC_3 (int *,struct udl_cmd_buf*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct usb_xfer*) ;


 int FUNC_5 (int *) ;
 int VAR_2 ;
 struct udl_cmd_buf* FUNC_6 (struct udl_softc*) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct udl_cmd_head* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,unsigned int,int ,int ) ;
 int FUNC_10 (struct usb_xfer*,unsigned int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct udl_softc* FUNC_12 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct udl_softc *VAR_5 = FUNC_12(VAR_3);
 struct udl_cmd_head *VAR_6 = FUNC_8(VAR_3);
 struct udl_cmd_buf *VAR_7;
 unsigned VAR_8;

 switch (FUNC_4(VAR_3)) {
 case 128:
  FUNC_0(&VAR_5->sc_cmd_buf_free, VAR_6, VAR_2);
 case 129:
tr_setup:
  for (VAR_8 = 0; VAR_8 != VAR_0; VAR_8++) {
   VAR_7 = FUNC_1(&VAR_5->sc_cmd_buf_pending);
   if (VAR_7 == ((void*)0)) {
    VAR_7 = FUNC_6(VAR_5);
    if (VAR_7 == ((void*)0))
     break;
   } else {
    FUNC_3(&VAR_5->sc_cmd_buf_pending, VAR_7, VAR_2);
   }
   FUNC_2(VAR_6, VAR_7, VAR_2);
   FUNC_9(VAR_3, VAR_8, VAR_7->buf, VAR_7->off);
  }
  if (VAR_8 != 0) {
   FUNC_10(VAR_3, VAR_8);
   FUNC_7(VAR_3);
  }
  break;
 default:
  FUNC_0(&VAR_5->sc_cmd_buf_free, VAR_6, VAR_2);
  if (VAR_4 != VAR_1) {

   FUNC_11(VAR_3);
   goto tr_setup;
  }
  break;
 }

 FUNC_5(&VAR_5->sc_cv);
}
