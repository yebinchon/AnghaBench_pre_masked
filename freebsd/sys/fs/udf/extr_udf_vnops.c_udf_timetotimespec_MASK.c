
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct timestamp {int month; int minute; int hour; int day; int centisec; int hund_usec; int type_tz; scalar_t__ usec; scalar_t__ second; int year; } ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct timestamp *VAR_1, struct timespec *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 union {
  uint16_t u_tz_offset;
  int16_t s_tz_offset;
 } VAR_8;





 VAR_6 = FUNC_0(VAR_1->year);
 if (VAR_6 < 1970 || VAR_1->month < 1 || VAR_1->month > 12) {
  VAR_2->tv_sec = 0;
  VAR_2->tv_nsec = 0;
  return;
 }


 VAR_2->tv_sec = VAR_1->second;
 VAR_2->tv_sec += VAR_1->minute * 60;
 VAR_2->tv_sec += VAR_1->hour * 3600;
 VAR_2->tv_sec += (VAR_1->day - 1) * 3600 * 24;


 VAR_4 = FUNC_1(VAR_6);
 VAR_2->tv_sec += VAR_0[VAR_4][VAR_1->month - 1] * 3600 * 24;


 VAR_7 = 1970;
 if (VAR_6 > 2009) {
  VAR_2->tv_sec += 1262304000;
  VAR_7 += 40;
 } else if (VAR_6 > 1999) {
  VAR_2->tv_sec += 946684800;
  VAR_7 += 30;
 } else if (VAR_6 > 1989) {
  VAR_2->tv_sec += 631152000;
  VAR_7 += 20;
 } else if (VAR_6 > 1979) {
  VAR_2->tv_sec += 315532800;
  VAR_7 += 10;
 }

 VAR_5 = (VAR_6 - VAR_7) * 365;
 for (VAR_3 = VAR_7; VAR_3 < VAR_6; VAR_3++)
  VAR_5 += FUNC_1(VAR_3);
 VAR_2->tv_sec += VAR_5 * 3600 * 24;


 VAR_2->tv_nsec = VAR_1->centisec * 10000 + VAR_1->hund_usec * 100 +
     VAR_1->usec;





 VAR_8.u_tz_offset = FUNC_0(VAR_1->type_tz);
 VAR_8.u_tz_offset &= 0x0fff;
 if (VAR_8.u_tz_offset & 0x0800)
  VAR_8.u_tz_offset |= 0xf000;
 if ((FUNC_0(VAR_1->type_tz) & 0x1000) && (VAR_8.s_tz_offset != -2047))
  VAR_2->tv_sec -= VAR_8.s_tz_offset * 60;

 return;
}
