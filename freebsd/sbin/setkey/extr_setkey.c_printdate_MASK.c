
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3()
{
 struct timeval VAR_2;
 int VAR_3;

 if (FUNC_0(&VAR_2, ((void*)0)) == -1) {
  FUNC_1("gettimeofday");
  return;
 }

 if (VAR_0 == 1) {

  VAR_3 = (VAR_2.tv_sec + VAR_1 ) % 86400;
  (void)FUNC_2("%02d:%02d:%02d.%06u ",
      VAR_3 / 3600, (VAR_3 % 3600) / 60, VAR_3 % 60, (u_int32_t)VAR_2.tv_usec);
 } else if (VAR_0 > 1) {

  (void)FUNC_2("%u.%06u ",
      (u_int32_t)VAR_2.tv_sec, (u_int32_t)VAR_2.tv_usec);
 }

 FUNC_2("\n");
}
