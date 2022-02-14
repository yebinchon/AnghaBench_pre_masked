
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcd_clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; } ;


 int FUNC_0 (int,char*) ;
 int* VAR_0 ;
 int FUNC_1 (char*,int,int,int,int,int,int,...) ;

void
FUNC_2(const struct bcd_clocktime *VAR_1, int VAR_2)
{

 FUNC_0(VAR_2 >= 0 && VAR_2 <= 9, ("bad nsdigits %d", VAR_2));

 if (VAR_2 > 0) {
  FUNC_1("%4.4x-%2.2x-%2.2x %2.2x:%2.2x:%2.2x.%*.*ld",
      VAR_1->year, VAR_1->mon, VAR_1->day,
      VAR_1->hour, VAR_1->min, VAR_1->sec,
      VAR_2, VAR_2, VAR_1->nsec / VAR_0[VAR_2]);
 } else {
  FUNC_1("%4.4x-%2.2x-%2.2x %2.2x:%2.2x:%2.2x",
      VAR_1->year, VAR_1->mon, VAR_1->day,
      VAR_1->hour, VAR_1->min, VAR_1->sec);
 }
}
