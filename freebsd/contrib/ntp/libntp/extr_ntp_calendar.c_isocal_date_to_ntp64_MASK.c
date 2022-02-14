
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
struct isodate {int second; int minute; int hour; scalar_t__ weekday; scalar_t__ week; scalar_t__ year; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ) ;

vint64
FUNC_3(
 const struct isodate *VAR_1
 )
{
 int32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0((int32_t)VAR_1->year - 1)
       + (int32_t)VAR_1->week - 1;
 VAR_3 = VAR_2 * 7 + (int32_t)VAR_1->weekday;

 VAR_4 = FUNC_2(VAR_1->hour, VAR_1->minute, VAR_1->second);

 return FUNC_1(VAR_3 - VAR_0, VAR_4);
}
