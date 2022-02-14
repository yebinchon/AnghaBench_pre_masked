
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_fifo {int dummy; } ;
struct umidi_chan {int ** xfer; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct usb_fifo*,int *,int,int*,int ) ;
 struct umidi_chan* FUNC_1 (struct usb_fifo*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct usb_fifo *VAR_1)
{
 struct umidi_chan *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->xfer[VAR_0] == ((void*)0)) {
  uint8_t VAR_3[1];
  int VAR_4;
  do {

   FUNC_0(VAR_1, VAR_3, 1, &VAR_4, 0);
  } while (VAR_4 > 0);
 } else {
  FUNC_2(VAR_2->xfer[VAR_0]);
 }
}
