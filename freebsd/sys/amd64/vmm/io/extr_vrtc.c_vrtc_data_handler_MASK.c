
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct rtcdev {int reg_c; } ;
struct vrtc {int addr; struct rtcdev rtcdev; } ;
struct vm {int dummy; } ;
typedef int sbintime_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vm*,int,char*,int) ;
 int FUNC_2 (struct vm*,int,char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct vrtc*) ;
 int FUNC_4 (struct vrtc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct vrtc*) ;
 scalar_t__ FUNC_6 (struct vrtc*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,struct vrtc*,int ) ;
 struct vrtc* FUNC_9 (struct vm*) ;
 scalar_t__ FUNC_10 (struct vrtc*,int *) ;
 int FUNC_11 (struct vrtc*,int) ;
 int FUNC_12 (struct vrtc*,int) ;
 int FUNC_13 (struct vrtc*,int ) ;
 int FUNC_14 (struct vrtc*,scalar_t__,int ) ;

int
FUNC_15(struct vm *VAR_3, int VAR_4, bool VAR_5, int VAR_6, int VAR_7,
    uint32_t *VAR_8)
{
 struct vrtc *VAR_9;
 struct rtcdev *VAR_10;
 sbintime_t VAR_11;
 time_t VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_9(VAR_3);
 VAR_10 = &VAR_9->rtcdev;

 if (VAR_7 != 1)
  return (-1);

 FUNC_3(VAR_9);
 VAR_14 = VAR_9->addr;
 if (VAR_14 >= sizeof(struct rtcdev)) {
  FUNC_4(VAR_9);
  return (-1);
 }

 VAR_13 = 0;
 VAR_12 = FUNC_10(VAR_9, &VAR_11);
 FUNC_14(VAR_9, VAR_12, VAR_11);
 if (VAR_14 < 10 || VAR_14 == VAR_0)
  FUNC_8(VAR_12, VAR_9, 0);

 if (VAR_5) {
  if (VAR_14 == 12) {





   *VAR_8 = VAR_9->rtcdev.reg_c;
   FUNC_13(VAR_9, 0);
  } else {
   *VAR_8 = *((uint8_t *)VAR_10 + VAR_14);
  }
  FUNC_2(VAR_3, VAR_4, "Read value %#x from RTC offset %#x",
      *VAR_8, VAR_14);
 } else {
  switch (VAR_14) {
  case 10:
   FUNC_1(VAR_3, VAR_4, "RTC reg_a set to %#x", *VAR_8);
   FUNC_11(VAR_9, *VAR_8);
   break;
  case 11:
   FUNC_1(VAR_3, VAR_4, "RTC reg_b set to %#x", *VAR_8);
   VAR_13 = FUNC_12(VAR_9, *VAR_8);
   break;
  case 12:
   FUNC_1(VAR_3, VAR_4, "RTC reg_c set to %#x (ignored)",
       *VAR_8);
   break;
  case 13:
   FUNC_1(VAR_3, VAR_4, "RTC reg_d set to %#x (ignored)",
       *VAR_8);
   break;
  case 0:



   *VAR_8 &= 0x7f;

  default:
   FUNC_2(VAR_3, VAR_4, "RTC offset %#x set to %#x",
       VAR_14, *VAR_8);
   *((uint8_t *)VAR_10 + VAR_14) = *VAR_8;
   break;
  }





  if (VAR_14 == VAR_0 && !FUNC_5(VAR_9)) {
   VAR_12 = FUNC_6(VAR_9);
   VAR_13 = FUNC_14(VAR_9, VAR_12, FUNC_7());
   FUNC_0(!VAR_13, ("vrtc_time_update error %d", VAR_13));
   if (VAR_12 == VAR_1 && VAR_2)
    VAR_13 = -1;
  }
 }
 FUNC_4(VAR_9);
 return (VAR_13);
}
