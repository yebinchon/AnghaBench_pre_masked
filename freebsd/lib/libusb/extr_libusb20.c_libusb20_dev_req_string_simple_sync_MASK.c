
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int temp ;
struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (struct libusb20_device*,int,int,int*,int) ;

int
FUNC_2(struct libusb20_device *VAR_2,
    uint8_t VAR_3, void *VAR_4, uint16_t VAR_5)
{
 char *VAR_6;
 int VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12[255];
 uint8_t VAR_13;



 if ((VAR_5 < 1) || (VAR_4 == ((void*)0))) {

  return (VAR_0);
 }
 VAR_7 = FUNC_1(VAR_2,
     0, 0, VAR_12, sizeof(VAR_12));
 if (VAR_7 < 0) {
  *(uint8_t *)VAR_4 = 0;
  return (VAR_7);
 }
 VAR_8 = VAR_12[2] | (VAR_12[3] << 8);

 VAR_7 = FUNC_1(VAR_2, VAR_3,
     VAR_8, VAR_12, sizeof(VAR_12));
 if (VAR_7 < 0) {
  *(uint8_t *)VAR_4 = 0;
  return (VAR_7);
 }
 if (VAR_12[0] < 2) {

  *(uint8_t *)VAR_4 = 0;
  return (VAR_1);
 }

 VAR_5--;


 VAR_9 = (VAR_12[0] / 2) - 1;
 if (VAR_9 > VAR_5) {
  VAR_9 = VAR_5;
 }

 VAR_13 = 3;


 VAR_6 = VAR_4;


 for (VAR_10 = 0; (VAR_10 != VAR_9); VAR_10++) {
  VAR_11 = VAR_12[(2 * VAR_10) + 2] | (VAR_12[(2 * VAR_10) + 3] << 8);


  if (((VAR_11 & 0xff00) == 0) && (VAR_13 & 1)) {

   *VAR_6 = VAR_11;
   VAR_13 = 1;
  } else if (((VAR_11 & 0x00ff) == 0) && (VAR_13 & 2)) {

   *VAR_6 = VAR_11 >> 8;
   VAR_13 = 2;
  } else {

   continue;
  }




  if ((*VAR_6 == '<') || (*VAR_6 == '>') || (!FUNC_0(*VAR_6))) {

   continue;
  }
  VAR_6++;
 }
 *VAR_6 = 0;

 return (0);
}
