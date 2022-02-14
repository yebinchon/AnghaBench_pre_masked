
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_interface {int * idesc; } ;
struct usb_hid_descriptor {TYPE_1__* descrs; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;
struct malloc_type {int dummy; } ;
struct TYPE_2__ {int wDescriptorLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (void*,struct malloc_type*) ;
 struct usb_hid_descriptor* FUNC_2 (int ,int *) ;
 void* FUNC_3 (int ,struct malloc_type*,int) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct usb_device*) ;
 struct usb_interface* FUNC_7 (struct usb_device*,int ) ;
 scalar_t__ FUNC_8 (struct usb_device*,struct mtx*,void*,int ,int ) ;

usb_error_t
FUNC_9(struct usb_device *VAR_6, struct mtx *VAR_7,
    void **VAR_8, uint16_t *VAR_9,
    struct malloc_type *VAR_10, uint8_t VAR_11)
{
 struct usb_interface *VAR_12 = FUNC_7(VAR_6, VAR_11);
 struct usb_hid_descriptor *VAR_13;
 usb_error_t VAR_14;

 if ((VAR_12 == ((void*)0)) || (VAR_12->idesc == ((void*)0))) {
  return (VAR_2);
 }
 VAR_13 = FUNC_2
     (FUNC_6(VAR_6), VAR_12->idesc);

 if (VAR_13 == ((void*)0)) {
  return (VAR_3);
 }
 *VAR_9 = FUNC_0(VAR_13->descrs[0].wDescriptorLength);
 if (*VAR_9 == 0) {
  return (VAR_3);
 }
 if (VAR_7)
  FUNC_5(VAR_7);

 *VAR_8 = FUNC_3(*VAR_9, VAR_10, VAR_1 | VAR_0);

 if (VAR_7)
  FUNC_4(VAR_7);

 if (*VAR_8 == ((void*)0)) {
  return (VAR_4);
 }
 VAR_14 = FUNC_8
     (VAR_6, VAR_7, *VAR_8, *VAR_9, VAR_11);

 if (VAR_14) {
  FUNC_1(*VAR_8, VAR_10);
  *VAR_8 = ((void*)0);
  return (VAR_14);
 }
 return (VAR_5);
}
