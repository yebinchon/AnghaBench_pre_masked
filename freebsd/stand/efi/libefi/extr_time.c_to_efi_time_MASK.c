
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int Year; int Month; int Second; scalar_t__ Daylight; scalar_t__ TimeZone; scalar_t__ Nanosecond; scalar_t__ Minute; scalar_t__ Hour; scalar_t__ Day; } ;
typedef TYPE_1__ EFI_TIME ;


 int** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(EFI_TIME *VAR_3, time_t VAR_4)
{
 int VAR_5, VAR_6;
 time_t VAR_7;

 if (VAR_4 >= 0) {
  VAR_3->Year = 1970;
  VAR_5 = FUNC_0(VAR_3->Year);
  VAR_6 = 13;
  VAR_7 = VAR_0[VAR_5][VAR_6] * VAR_1;
                while (VAR_4 > VAR_7) {
   VAR_4 -= VAR_7;
   VAR_3->Year++;
   VAR_5 = FUNC_0(VAR_3->Year);
   VAR_7 = VAR_0[VAR_5][VAR_6] * VAR_1;
  }

  VAR_3->Month = 0;
                while (VAR_4 >
      VAR_0[VAR_5][VAR_6] * VAR_1) {
   VAR_3->Month++;
  }

  VAR_6 = VAR_3->Month - 1;
  VAR_4 -= VAR_0[VAR_5][VAR_6] * VAR_1;

  for (VAR_3->Day = 0; VAR_4 > VAR_1; VAR_3->Day++)
   VAR_4 -= VAR_1;

  for (VAR_3->Hour = 0; VAR_4 > VAR_2; VAR_3->Hour++)
   VAR_4 -= VAR_2;

  for (VAR_3->Minute = 0; VAR_4 > 60; VAR_3->Minute++)
   VAR_4 -= 60;

  VAR_3->Second = VAR_4;
  VAR_3->Nanosecond = 0;
  VAR_3->TimeZone = 0;
  VAR_3->Daylight = 0;
 } else {
  FUNC_1(VAR_3, 0, sizeof(EFI_TIME));
 }
}
