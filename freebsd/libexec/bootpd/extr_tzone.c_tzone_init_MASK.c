
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_gmtoff; } ;


 int VAR_0 ;
 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void
FUNC_3()
{




 struct tm *VAR_3;
 time_t VAR_4;

 (void)FUNC_2(&VAR_4);
 if ((VAR_3 = FUNC_0(&VAR_4)) == ((void*)0)) {
  VAR_1 = 0;
  FUNC_1(VAR_0, "localtime() failed");
 } else {
  VAR_1 = -VAR_3->tm_gmtoff;
 }

}
