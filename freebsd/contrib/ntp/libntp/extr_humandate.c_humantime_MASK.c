
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int,int,int) ;

const char *
FUNC_3(
 time_t VAR_1
 )
{
 char * VAR_2;
 struct tm * VAR_3;

 VAR_3 = FUNC_1(&VAR_1);
 if (!VAR_3)
  return "--:--:--";

 FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_0, "%02d:%02d:%02d",
   VAR_3->tm_hour, VAR_3->tm_min, VAR_3->tm_sec);

 return VAR_2;
}
