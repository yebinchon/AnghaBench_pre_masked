
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_host_endpoint {scalar_t__* bsd_xfer; int bsd_urb_list; } ;
struct urb {scalar_t__ kill_count; int status; struct usb_host_endpoint* endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct urb*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(struct urb *VAR_5, uint16_t VAR_6)
{
 struct usb_host_endpoint *VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0))
  return (-VAR_1);

 VAR_8 = FUNC_2(&VAR_3) ? 0 : 1;
 if (VAR_8)
  FUNC_1(&VAR_3);

 if (VAR_5->endpoint == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto done;
 }







 if (VAR_5->kill_count != 0) {
  VAR_9 = -VAR_2;
  goto done;
 }

 VAR_7 = VAR_5->endpoint;






 if (VAR_7->bsd_xfer[0] ||
     VAR_7->bsd_xfer[1]) {


  FUNC_0(&VAR_7->bsd_urb_list, VAR_5, VAR_4);

  VAR_5->status = -VAR_0;

  FUNC_4(VAR_7->bsd_xfer[0]);
  FUNC_4(VAR_7->bsd_xfer[1]);
  VAR_9 = 0;
 } else {

  VAR_5->status = -VAR_1;
  VAR_9 = -VAR_1;
 }
done:
 if (VAR_8)
  FUNC_3(&VAR_3);
 return (VAR_9);
}
