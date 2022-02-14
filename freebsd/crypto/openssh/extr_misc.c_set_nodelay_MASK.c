
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int ,int ,int*,int*) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(int VAR_3)
{
 int VAR_4;
 socklen_t VAR_5;

 VAR_5 = sizeof VAR_4;
 if (FUNC_3(VAR_3, VAR_0, VAR_1, &VAR_4, &VAR_5) == -1) {
  FUNC_0("getsockopt TCP_NODELAY: %.100s", FUNC_5(VAR_2));
  return;
 }
 if (VAR_4 == 1) {
  FUNC_1("fd %d is TCP_NODELAY", VAR_3);
  return;
 }
 VAR_4 = 1;
 FUNC_1("fd %d setting TCP_NODELAY", VAR_3);
 if (FUNC_4(VAR_3, VAR_0, VAR_1, &VAR_4, sizeof VAR_4) == -1)
  FUNC_2("setsockopt TCP_NODELAY: %.100s", FUNC_5(VAR_2));
}
