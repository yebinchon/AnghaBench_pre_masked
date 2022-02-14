
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef scalar_t__ time_t ;
struct calendar {int year; int month; int monthday; int minute; int hour; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct calendar*,int ,int *) ;
 int FUNC_2 (char*,int ,char*,int,...) ;

char * FUNC_3(
 time_t VAR_1
 )
{
 char * VAR_2;
 struct calendar VAR_3;

 FUNC_0(VAR_2);
 if (FUNC_1(&VAR_3, (u_int32)VAR_1, ((void*)0)) < 0)
  FUNC_2(VAR_2, VAR_0, "ntpcal_ntp_to_date: %ld: range error",
    (long)VAR_1);
 else
  FUNC_2(VAR_2, VAR_0, "%04d%02d%02d%02d%02d",
    VAR_3.year, VAR_3.month, VAR_3.monthday,
    VAR_3.hour, VAR_3.minute);
 return VAR_2;
}
