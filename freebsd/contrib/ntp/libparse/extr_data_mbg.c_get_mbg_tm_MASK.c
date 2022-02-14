
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; void* offs_from_utc; void* frac; int sec; int min; int hour; int wday; void* yday; int mday; int month; void* year; } ;
typedef TYPE_1__ TM_GPS ;


 void* FUNC_0 (unsigned char**) ;
 void* FUNC_1 (unsigned char**) ;
 int FUNC_2 (unsigned char**) ;

void
FUNC_3(
 unsigned char **VAR_0,
 TM_GPS *VAR_1
 )
{
  VAR_1->year = FUNC_0(VAR_0);
  VAR_1->month = *(*VAR_0)++;
  VAR_1->mday = *(*VAR_0)++;
  VAR_1->yday = FUNC_0(VAR_0);
  VAR_1->wday = *(*VAR_0)++;
  VAR_1->hour = *(*VAR_0)++;
  VAR_1->min = *(*VAR_0)++;
  VAR_1->sec = *(*VAR_0)++;
  VAR_1->frac = FUNC_1(VAR_0);
  VAR_1->offs_from_utc = FUNC_1(VAR_0);
  VAR_1->status = FUNC_2(VAR_0);
}
