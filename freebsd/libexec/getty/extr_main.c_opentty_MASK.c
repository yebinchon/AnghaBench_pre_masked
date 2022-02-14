
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7;

 while ((VAR_6 = FUNC_3(VAR_3, VAR_4)) == -1)
 {
  VAR_7 = VAR_2;
  if (!VAR_5) {
   FUNC_5(VAR_1, "open %s: %m", VAR_3);
   VAR_5 = 1;
  }
  if (VAR_7 == VAR_0)
   return 0;
  FUNC_4(60);
 }
 if (FUNC_2(VAR_6) < 0) {
  if (FUNC_1(0,0) < 0) {
   FUNC_5(VAR_1,"daemon: %m");
   FUNC_0(VAR_6);
   return 0;
  }
  if (FUNC_2(VAR_6) < 0) {
   FUNC_5(VAR_1, "login_tty %s: %m", VAR_3);
   FUNC_0(VAR_6);
   return 0;
  }
 }
 return 1;
}
