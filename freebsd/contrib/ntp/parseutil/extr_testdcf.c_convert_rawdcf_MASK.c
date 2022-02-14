
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minute; int hour; int day; int month; int year; int wday; int utcoffset; int flags; scalar_t__ second; scalar_t__ usecond; } ;
typedef TYPE_1__ clocktime_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static unsigned long
FUNC_4(
 register unsigned char *VAR_27,
 register int VAR_28,
 register clocktime_t *VAR_29
 )
{
 if (VAR_28 < 57)
 {
  FUNC_3("%-30s", "*** INCOMPLETE");
  return VAR_2;
 }




 if ((FUNC_1(VAR_27, VAR_23) == 1) &&
     FUNC_2(VAR_27, VAR_19) &&
     FUNC_2(VAR_27, VAR_20) &&
     FUNC_2(VAR_27, VAR_21))
 {




  VAR_29->flags = 0;
  VAR_29->usecond= 0;
  VAR_29->second = 0;
  VAR_29->minute = FUNC_1(VAR_27, VAR_16);
  VAR_29->minute = FUNC_0(VAR_29->minute) + FUNC_1(VAR_27, VAR_15);
  VAR_29->hour = FUNC_1(VAR_27, VAR_14);
  VAR_29->hour = FUNC_0(VAR_29->hour) + FUNC_1(VAR_27, VAR_13);
  VAR_29->day = FUNC_1(VAR_27, VAR_11);
  VAR_29->day = FUNC_0(VAR_29->day) + FUNC_1(VAR_27, VAR_10);
  VAR_29->month = FUNC_1(VAR_27, VAR_18);
  VAR_29->month = FUNC_0(VAR_29->month) + FUNC_1(VAR_27, VAR_17);
  VAR_29->year = FUNC_1(VAR_27, VAR_25);
  VAR_29->year = FUNC_0(VAR_29->year) + FUNC_1(VAR_27, VAR_24);
  VAR_29->wday = FUNC_1(VAR_27, VAR_12);

  switch (FUNC_1(VAR_27, VAR_26))
  {
      case 128:
   VAR_29->utcoffset = -60;
   break;

      case 129:
   VAR_29->flags |= VAR_6;
   VAR_29->utcoffset = -120;
   break;

      default:
   FUNC_3("%-30s", "*** BAD TIME ZONE");
   return VAR_1|VAR_0;
  }

  if (FUNC_1(VAR_27, VAR_8))
      VAR_29->flags |= VAR_4;

  if (FUNC_1(VAR_27, VAR_9))
      VAR_29->flags |= VAR_7;

  if (FUNC_1(VAR_27, VAR_22))
      VAR_29->flags |= VAR_5;

  return VAR_3;
 }
 else
 {



  FUNC_3("%-30s", "*** BAD FORMAT (invalid/parity)");
  return VAR_1|VAR_0;
 }
}
