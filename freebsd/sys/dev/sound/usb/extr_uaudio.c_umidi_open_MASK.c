
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct umidi_sub_chan {int read_open; int write_open; int state; } ;
struct umidi_chan {int mtx; int write_open_refcount; int read_open_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct umidi_sub_chan* FUNC_2 (struct usb_fifo*) ;
 scalar_t__ FUNC_3 (struct usb_fifo*,int,int) ;
 struct umidi_chan* FUNC_4 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_5(struct usb_fifo *VAR_4, int VAR_5)
{
 struct umidi_chan *VAR_6 = FUNC_4(VAR_4);
 struct umidi_sub_chan *VAR_7 = FUNC_2(VAR_4);

 if (VAR_5 & VAR_1) {
  if (FUNC_3(VAR_4, 4, (1024 / 4))) {
   return (VAR_0);
  }
  FUNC_0(&VAR_6->mtx);
  VAR_6->read_open_refcount++;
  VAR_7->read_open = 1;
  FUNC_1(&VAR_6->mtx);
 }
 if (VAR_5 & VAR_2) {
  if (FUNC_3(VAR_4, 32, (1024 / 32))) {
   return (VAR_0);
  }

  FUNC_0(&VAR_6->mtx);
  VAR_6->write_open_refcount++;
  VAR_7->write_open = 1;


  VAR_7->state = VAR_3;
  FUNC_1(&VAR_6->mtx);
 }
 return (0);
}
