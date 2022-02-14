
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {void* tm_sec; void* tm_min; void* tm_hour; } ;
typedef void* int32_t ;


 void* FUNC_0 (void**,void*) ;

int32_t
FUNC_1(
 struct tm *VAR_0,
 int32_t VAR_1
 )
{
 int32_t VAR_2;
 int32_t VAR_3[3];

 VAR_2 = FUNC_0(VAR_3, VAR_1);
 VAR_0->tm_hour = VAR_3[0];
 VAR_0->tm_min = VAR_3[1];
 VAR_0->tm_sec = VAR_3[2];

 return VAR_2;
}
