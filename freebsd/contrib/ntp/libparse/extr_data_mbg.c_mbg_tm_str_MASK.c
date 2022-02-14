
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; int month; int mday; int hour; int min; int sec; scalar_t__ offs_from_utc; int status; scalar_t__ frac; } ;
typedef TYPE_1__ TM_GPS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char**,int ,int) ;
 int FUNC_2 (char*,int,char*,int,int,int,int,int,int,long,char,int,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(
 char **VAR_0,
 TM_GPS *VAR_1,
 int VAR_2,
 int VAR_3
 )
{
 char *VAR_4 = *VAR_0;

 FUNC_2(*VAR_0, VAR_2, "%04d-%02d-%02d %02d:%02d:%02d.%07ld (%c%02d%02d) ",
   VAR_1->year, VAR_1->month, VAR_1->mday,
   VAR_1->hour, VAR_1->min, VAR_1->sec, (long) VAR_1->frac,
   (VAR_1->offs_from_utc < 0) ? '-' : '+',
   FUNC_0((int)VAR_1->offs_from_utc) / 3600,
   (FUNC_0((int)VAR_1->offs_from_utc) / 60) % 60);
 *VAR_0 += FUNC_3(*VAR_0);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_1->status, VAR_2 - (*VAR_0 - VAR_4));
}
