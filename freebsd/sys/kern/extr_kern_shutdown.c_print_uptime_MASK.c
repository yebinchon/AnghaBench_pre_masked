
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;


 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_0;
 struct timespec VAR_1;

 FUNC_0(&VAR_1);
 FUNC_1("Uptime: ");
 VAR_0 = 0;
 if (VAR_1.tv_sec >= 86400) {
  FUNC_1("%ldd", (long)VAR_1.tv_sec / 86400);
  VAR_1.tv_sec %= 86400;
  VAR_0 = 1;
 }
 if (VAR_0 || VAR_1.tv_sec >= 3600) {
  FUNC_1("%ldh", (long)VAR_1.tv_sec / 3600);
  VAR_1.tv_sec %= 3600;
  VAR_0 = 1;
 }
 if (VAR_0 || VAR_1.tv_sec >= 60) {
  FUNC_1("%ldm", (long)VAR_1.tv_sec / 60);
  VAR_1.tv_sec %= 60;
  VAR_0 = 1;
 }
 FUNC_1("%lds\n", (long)VAR_1.tv_sec);
}
