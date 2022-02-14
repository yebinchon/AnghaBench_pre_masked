
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct timeval*,long) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct timeval*,long) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_7(
  struct timeval *VAR_2
  )
{
 struct timeval VAR_3;

 if (VAR_1)
     return;

 FUNC_0("set_time: %s ", FUNC_3(VAR_2));
 FUNC_5(VAR_0, "setting time (offset %s)", FUNC_3(VAR_2));

 if (FUNC_1(&VAR_3, 0L) == -1)
 {
  FUNC_2("gettimeofday()");
 }
 else
 {
  FUNC_6(&VAR_3, VAR_2);
  if (FUNC_4(&VAR_3, 0L) == -1)
  {
   FUNC_2("settimeofday()");
  }
 }
}
