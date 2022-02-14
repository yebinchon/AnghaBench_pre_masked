
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mday; size_t tm_mon; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (int *) ;
 char** VAR_1 ;
 int FUNC_2 (char*,int ,char*,int,char*,int,int,int) ;
 int FUNC_3 (int *) ;

const char *
FUNC_4(void)
{
 char * VAR_2;
 time_t VAR_3;
 struct tm * VAR_4;

 VAR_3 = FUNC_3(((void*)0));
 VAR_4 = FUNC_1(&VAR_3);
 if (!VAR_4)
  return "-- --- --:--:--";

 FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_0, "%2d %s %02d:%02d:%02d",
   VAR_4->tm_mday, VAR_1[VAR_4->tm_mon],
   VAR_4->tm_hour, VAR_4->tm_min, VAR_4->tm_sec);

 return VAR_2;
}
