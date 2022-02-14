
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_3__ {int Year; int Month; int Day; int Hour; int Minute; int Second; int TimeZone; } ;
typedef TYPE_1__ EFI_TIME ;


 int** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;

time_t
FUNC_1(EFI_TIME *VAR_4)
{
 time_t VAR_5;
 int VAR_6;




 if (VAR_4->Year < 1998 || VAR_4->Year > 2099 ||
     VAR_4->Month == 0 || VAR_4->Month > 12 ||
     VAR_4->Day == 0 || VAR_4->Month > 31 ||
     VAR_4->Hour > 23 || VAR_4->Minute > 59 ||
     VAR_4->Second > 59 || VAR_4->TimeZone < -1440 ||
     (VAR_4->TimeZone > 1440 && VAR_4->TimeZone != 2047)) {
  return (0);
 }




 VAR_5 = 0;
 for (VAR_6 = 1970; VAR_6 != VAR_4->Year; ++VAR_6) {
  VAR_5 += (VAR_0[FUNC_0(VAR_6)][13] * VAR_2);
 }






 VAR_5 += (VAR_0[FUNC_0(VAR_4->Year)][VAR_4->Month] *
     VAR_2);







 VAR_5 += (((VAR_4->Day > 0) ? VAR_4->Day-1:0) * VAR_2);




 VAR_5 += (VAR_4->Hour * VAR_3);




 VAR_5 += (VAR_4->Minute * 60);




 VAR_5 += VAR_4->Second;





 if (VAR_4->TimeZone != VAR_1) {



  VAR_5 += (VAR_4->TimeZone * 60);
 }

 return (VAR_5);
}
