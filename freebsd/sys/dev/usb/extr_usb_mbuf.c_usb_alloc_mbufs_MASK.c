
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_mbuf {int cur_data_len; int max_data_len; int * min_data_ptr; int * cur_data_ptr; } ;
struct usb_ifqueue {int dummy; } ;
struct malloc_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_ifqueue*,struct usb_mbuf*) ;
 void* FUNC_1 (int,struct malloc_type*,int) ;

void *
FUNC_2(struct malloc_type *VAR_3, struct usb_ifqueue *VAR_4,
    usb_size_t VAR_5, uint16_t VAR_6)
{
 struct usb_mbuf *VAR_7;
 uint8_t *VAR_8;
 void *VAR_9 = ((void*)0);
 usb_size_t VAR_10;


 VAR_5 += ((-VAR_5) & (VAR_2 - 1));

 if (VAR_6 && VAR_5) {

  VAR_10 = (VAR_5 + sizeof(struct usb_mbuf)) * VAR_6;

  VAR_9 = FUNC_1(VAR_10, VAR_3, VAR_0 | VAR_1);

  if (VAR_9 == ((void*)0)) {
   goto done;
  }
  VAR_7 = VAR_9;
  VAR_8 = (void *)(VAR_7 + VAR_6);

  while (VAR_6--) {

   VAR_7->cur_data_ptr =
       VAR_7->min_data_ptr = VAR_8;

   VAR_7->cur_data_len =
       VAR_7->max_data_len = VAR_5;

   FUNC_0(VAR_4, VAR_7);

   VAR_7++;
   VAR_8 += VAR_5;
  }
 }
done:
 return (VAR_9);
}
