
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tokens ;
typedef int time_t ;
struct token {int HaveZone; long Timezone; int HaveYear; int HaveMonth; int HaveDay; int HaveTime; int HaveWeekDay; long tm_hour; long tm_min; int DayNumber; int DayOrdinal; int DSTmode; int RelMonth; scalar_t__ RelSeconds; scalar_t__ tm_sec; int HaveRel; int Seconds; int Minutes; int Hour; scalar_t__ Year; int Day; scalar_t__ Month; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; struct token* tokenp; int value; int token; scalar_t__ tm_isdst; } ;
struct tm {int HaveZone; long Timezone; int HaveYear; int HaveMonth; int HaveDay; int HaveTime; int HaveWeekDay; long tm_hour; long tm_min; int DayNumber; int DayOrdinal; int DSTmode; int RelMonth; scalar_t__ RelSeconds; scalar_t__ tm_sec; int HaveRel; int Seconds; int Minutes; int Hour; scalar_t__ Year; int Day; scalar_t__ Month; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; struct tm* tokenp; int value; int token; scalar_t__ tm_isdst; } ;
struct gdstate {int HaveZone; long Timezone; int HaveYear; int HaveMonth; int HaveDay; int HaveTime; int HaveWeekDay; long tm_hour; long tm_min; int DayNumber; int DayOrdinal; int DSTmode; int RelMonth; scalar_t__ RelSeconds; scalar_t__ tm_sec; int HaveRel; int Seconds; int Minutes; int Hour; scalar_t__ Year; int Day; scalar_t__ Month; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; struct gdstate* tokenp; int value; int token; scalar_t__ tm_isdst; } ;
typedef int local ;
typedef int gmt ;
typedef int _gds ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ,int ,int ,long,int ) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (int,long,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int,long,int ) ;
 long FUNC_3 (struct token*,struct token*) ;
 struct token* FUNC_4 (int*) ;
 struct token* FUNC_5 (int*) ;
 int FUNC_6 (struct token*,int ,int) ;
 int FUNC_7 (char const**,int *) ;
 int FUNC_8 (struct token*) ;

time_t
FUNC_9(time_t VAR_3, const char *VAR_4)
{
 struct token VAR_5[256];
 struct gdstate VAR_6;
 struct token *VAR_7;
 struct gdstate *VAR_8;
 struct tm VAR_9, *VAR_10;
 struct tm VAR_11, *VAR_12;
 time_t VAR_13;
 time_t VAR_14;
 long VAR_15;


 FUNC_6(VAR_5, 0, sizeof(VAR_5));

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_8 = &VAR_6;


 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_10 = FUNC_5 (&VAR_3);
 if (VAR_10 == ((void*)0))
  return -1;
 VAR_9 = *VAR_10;



 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_12 = FUNC_4 (&VAR_3);
 if (VAR_12 != ((void*)0)) {

  VAR_11 = *VAR_12;
 }
 if (VAR_12 != ((void*)0))
  VAR_15 = FUNC_3 (&VAR_11, &VAR_9);
 else

  VAR_15 = 0;
 if(VAR_9.tm_isdst)
  VAR_15 += VAR_1;


 VAR_7 = VAR_5;
 while ((VAR_7->token = FUNC_7(&VAR_4, &VAR_7->value)) != 0) {
  ++VAR_7;
  if (VAR_7 > VAR_5 + 255)
   return -1;
 }
 VAR_8->tokenp = VAR_5;


 while (VAR_8->tokenp < VAR_7) {
  if (!FUNC_8(VAR_8))
   return -1;
 }


 if (!VAR_8->HaveZone) {
  VAR_8->Timezone = VAR_15;
  VAR_8->DSTmode = VAR_0;
 }



 if (VAR_8->HaveZone && VAR_12 != ((void*)0)) {
  VAR_3 -= VAR_8->Timezone;
  VAR_12 = FUNC_4 (&VAR_3);
  if (VAR_12 != ((void*)0))
   VAR_9 = *VAR_12;
  VAR_3 += VAR_8->Timezone;
 }

 if (!VAR_8->HaveYear)
  VAR_8->Year = VAR_9.tm_year + 1900;
 if (!VAR_8->HaveMonth)
  VAR_8->Month = VAR_9.tm_mon + 1;
 if (!VAR_8->HaveDay)
  VAR_8->Day = VAR_9.tm_mday;





 if (VAR_8->HaveTime > 1 || VAR_8->HaveZone > 1 || VAR_8->HaveWeekDay > 1
     || VAR_8->HaveYear > 1 || VAR_8->HaveMonth > 1 || VAR_8->HaveDay > 1)
  return -1;



 if (VAR_8->HaveYear || VAR_8->HaveMonth || VAR_8->HaveDay
     || VAR_8->HaveTime || VAR_8->HaveWeekDay) {
  VAR_13 = FUNC_0(VAR_8->Month, VAR_8->Day, VAR_8->Year,
      VAR_8->Hour, VAR_8->Minutes, VAR_8->Seconds,
      VAR_8->Timezone, VAR_8->DSTmode);
  if (VAR_13 < 0)
   return -1;
 } else {
  VAR_13 = VAR_3;
  if (!VAR_8->HaveRel)
   VAR_13 -= VAR_9.tm_hour * VAR_1 + VAR_9.tm_min * VAR_2
       + VAR_9.tm_sec;
 }


 VAR_13 += VAR_8->RelSeconds;
 VAR_13 += FUNC_2(VAR_13, VAR_8->Timezone, VAR_8->RelMonth);


 if (VAR_8->HaveWeekDay
     && !(VAR_8->HaveYear || VAR_8->HaveMonth || VAR_8->HaveDay)) {
  VAR_14 = FUNC_1(VAR_13, VAR_8->Timezone,
      VAR_8->DSTmode, VAR_8->DayOrdinal, VAR_8->DayNumber);
  VAR_13 += VAR_14;
 }



 return VAR_13 == -1 ? 0 : VAR_13;
}
