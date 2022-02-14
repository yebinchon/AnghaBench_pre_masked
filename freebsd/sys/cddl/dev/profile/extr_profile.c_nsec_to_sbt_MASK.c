
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int sbintime_t ;
typedef int hrtime_t ;


 int VAR_0 ;

__attribute__((used)) static sbintime_t
FUNC_0(hrtime_t VAR_1)
{
 time_t VAR_2;





 VAR_2 = VAR_1 / VAR_0;
 VAR_1 = VAR_1 % VAR_0;
 return (((sbintime_t)VAR_2 << 32) | ((sbintime_t)VAR_1 << 32) / VAR_0);
}
