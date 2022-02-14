
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_hw_ep_scratch_sub {scalar_t__ max_frame_size; int hw_endpoint_in; int hw_endpoint_out; scalar_t__ needs_out; scalar_t__ needs_in; struct usb_hw_ep_profile const* pf; int needs_ep_type; } ;
struct usb_hw_ep_scratch {int* bmInAlloc; int* bmOutAlloc; int udev; TYPE_1__* methods; } ;
typedef struct usb_hw_ep_profile {int is_simplex; scalar_t__ max_in_frame_size; scalar_t__ max_out_frame_size; } const usb_hw_ep_profile ;
struct TYPE_2__ {int (* get_hw_ep_profile ) (int ,struct usb_hw_ep_profile const**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct usb_hw_ep_profile const**,int) ;
 int FUNC_1 (struct usb_hw_ep_profile const*,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_2(struct usb_hw_ep_scratch *VAR_4,
    struct usb_hw_ep_scratch_sub *VAR_5, uint8_t VAR_6)
{
 const struct usb_hw_ep_profile *VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 VAR_8 = 0xFFFF;
 VAR_12 = 0;

 if ((!VAR_5->needs_in) && (!VAR_5->needs_out)) {
  return (0);
 }
 if (VAR_5->needs_ep_type == VAR_0) {
  VAR_13 = 1;
  VAR_14 = 1;
 } else {
  if (VAR_5->needs_in) {
   VAR_13 = 1;
   VAR_14 = 0;
  } else {
   VAR_13 = 0;
   VAR_14 = 1;
  }
 }

 for (VAR_11 = 1; VAR_11 != (VAR_3 / 2); VAR_11++) {


  (VAR_4->methods->get_hw_ep_profile) (VAR_4->udev, &VAR_7, VAR_11);
  if (VAR_7 == ((void*)0)) {

   break;
  }

  if (VAR_13 || VAR_7->is_simplex) {
   if (VAR_4->bmInAlloc[VAR_11 / 8] & (1 << (VAR_11 % 8))) {

    continue;
   }
  }

  if (VAR_14 || VAR_7->is_simplex) {
   if (VAR_4->bmOutAlloc[VAR_11 / 8] & (1 << (VAR_11 % 8))) {

    continue;
   }
  }

  if (VAR_7->is_simplex == VAR_6) {

   continue;
  }

  if (!FUNC_1(VAR_7, VAR_5->needs_ep_type, VAR_13)) {

   continue;
  }

  if (VAR_13)
   VAR_10 = VAR_7->max_in_frame_size;
  else
   VAR_10 = VAR_7->max_out_frame_size;


  if (VAR_10 >= VAR_5->max_frame_size) {
   VAR_9 = (VAR_10 - VAR_5->max_frame_size);
   if (VAR_8 > VAR_9) {
    VAR_8 = VAR_9;
    VAR_12 = VAR_11;
    VAR_5->pf = VAR_7;
   }
  }
 }


 if (VAR_12 != 0) {

  VAR_7 = VAR_5->pf;


  if (VAR_13) {
   VAR_4->bmInAlloc[VAR_12 / 8] |=
       (1 << (VAR_12 % 8));
   VAR_5->hw_endpoint_in = VAR_12 | VAR_1;
   VAR_5->needs_in = 0;
  }

  if (VAR_14) {
   VAR_4->bmOutAlloc[VAR_12 / 8] |=
       (1 << (VAR_12 % 8));
   VAR_5->hw_endpoint_out = VAR_12 | VAR_2;
   VAR_5->needs_out = 0;
  }
  return (0);
 }
 return (1);
}
