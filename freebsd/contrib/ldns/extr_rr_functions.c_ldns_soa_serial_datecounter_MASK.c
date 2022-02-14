
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (char*,int,char*,int ) ;

uint32_t FUNC_4(uint32_t VAR_0, void *VAR_1)
{
 struct tm VAR_2;
 char VAR_3[11];
 int32_t VAR_4;
 time_t VAR_5 = VAR_1 ? (time_t) (intptr_t) VAR_1 : FUNC_1(((void*)0));

 (void) FUNC_3(VAR_3, 11, "%Y%m%d00", FUNC_2(&VAR_5, &VAR_2));
 VAR_4 = (int32_t) FUNC_0(VAR_3);
 return VAR_4 - ((int32_t) VAR_0) <= 0 ? VAR_0+1 : ((uint32_t) VAR_4);
}
