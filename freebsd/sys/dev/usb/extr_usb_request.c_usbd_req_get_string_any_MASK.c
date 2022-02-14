
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ no_strings; } ;
struct usb_device {int langid; TYPE_1__ flags; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (struct usb_device*,struct mtx*,char*,int,int ,scalar_t__) ;

usb_error_t
FUNC_4(struct usb_device *VAR_3, struct mtx *VAR_4, char *VAR_5,
    uint16_t VAR_6, uint8_t VAR_7)
{
 char *VAR_8;
 uint8_t *VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 uint8_t VAR_13;
 usb_error_t VAR_14;

 if (VAR_6 == 0) {

  return (VAR_1);
 }
 if (VAR_7 == 0) {

  VAR_5[0] = 0;
  return (VAR_0);
 }
 if (VAR_3->flags.no_strings) {
  VAR_5[0] = 0;
  return (VAR_2);
 }
 VAR_14 = FUNC_3
     (VAR_3, VAR_4, VAR_5, VAR_6, VAR_3->langid, VAR_7);
 if (VAR_14) {
  VAR_5[0] = 0;
  return (VAR_14);
 }
 VAR_9 = (uint8_t *)VAR_5;

 if (VAR_9[0] < 2) {

  VAR_5[0] = 0;
  return (VAR_0);
 }

 VAR_6--;


 VAR_8 = VAR_5;
 VAR_11 = (VAR_9[0] / 2) - 1;
 if (VAR_11 > VAR_6) {
  VAR_11 = VAR_6;
 }

 VAR_9 += 2;


 VAR_13 = 3;


 for (VAR_10 = 0; (VAR_10 != VAR_11); VAR_10++) {
  VAR_12 = FUNC_0(VAR_9 + (2 * VAR_10));


  if (((VAR_12 & 0xff00) == 0) && (VAR_13 & 1)) {

   *VAR_8 = VAR_12;
   VAR_13 = 1;
  } else if (((VAR_12 & 0x00ff) == 0) && (VAR_13 & 2)) {

   *VAR_8 = VAR_12 >> 8;
   VAR_13 = 2;
  } else {

   continue;
  }






  if (FUNC_1(*VAR_8) ||
      FUNC_2(*VAR_8) ||
      *VAR_8 == '-' ||
      *VAR_8 == '+' ||
      *VAR_8 == ' ' ||
      *VAR_8 == '.' ||
      *VAR_8 == ',' ||
      *VAR_8 == ':' ||
      *VAR_8 == '/' ||
      *VAR_8 == '(' ||
      *VAR_8 == ')') {

   VAR_8++;
  }

 }
 *VAR_8 = 0;
 return (VAR_1);
}
