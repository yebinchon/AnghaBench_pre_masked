
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct usb_host_endpoint {int * bsd_xfer; int bsd_urb_list; } ;
struct TYPE_3__ {int * tqe_prev; } ;
struct urb {size_t number_of_packets; int kill_count; int (* complete ) (struct urb*) ;TYPE_2__* iso_frame_desc; scalar_t__ actual_length; int status; TYPE_1__ bsd_urb_list; struct usb_host_endpoint* endpoint; } ;
struct TYPE_4__ {scalar_t__ actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct urb*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,struct urb*,int) ;

__attribute__((used)) static int
FUNC_6(struct urb *VAR_4, uint8_t VAR_5)
{
 struct usb_host_endpoint *VAR_6;
 uint16_t VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 if (VAR_4 == ((void*)0))
  return (-VAR_1);

 VAR_8 = FUNC_2(&VAR_2) ? 0 : 1;
 if (VAR_8)
  FUNC_1(&VAR_2);
 if (VAR_5)
  VAR_4->kill_count++;

 if (VAR_4->endpoint == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto done;
 }
 VAR_6 = VAR_4->endpoint;

 if (VAR_4->bsd_urb_list.tqe_prev) {


  FUNC_0(&VAR_6->bsd_urb_list, VAR_4, VAR_3);
  VAR_4->bsd_urb_list.tqe_prev = ((void*)0);
  VAR_4->status = -VAR_0;
  VAR_4->actual_length = 0;

  for (VAR_7 = 0; VAR_7 < VAR_4->number_of_packets; VAR_7++) {
   VAR_4->iso_frame_desc[VAR_7].actual_length = 0;
  }

  if (VAR_4->complete) {
   (VAR_4->complete) (VAR_4);
  }
 } else {







  FUNC_5(VAR_6->bsd_xfer[0], VAR_4, VAR_5);
  FUNC_5(VAR_6->bsd_xfer[1], VAR_4, VAR_5);
 }
 VAR_9 = 0;
done:
 if (VAR_5)
  VAR_4->kill_count--;
 if (VAR_8)
  FUNC_3(&VAR_2);
 return (VAR_9);
}
