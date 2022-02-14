
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int time_t ;
struct calendar {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct calendar const*) ;
 scalar_t__ FUNC_1 (struct calendar const*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

time_t
FUNC_4(
 const struct calendar *VAR_1
 )
{
 vint64 VAR_2;
 int32_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1) - VAR_0;
 VAR_4 = FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_3, VAR_4);

 return FUNC_3(&VAR_2);
}
