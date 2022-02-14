
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int,int ,...) ;
 char* FUNC_4 (int ) ;

int
FUNC_5(int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2("fcntl(%d, F_GETFL): %s", VAR_4, FUNC_4(VAR_3));
  return (-1);
 }
 if (!(VAR_5 & VAR_2)) {
  FUNC_1("fd %d is not O_NONBLOCK", VAR_4);
  return (0);
 }
 FUNC_0("fd %d clearing O_NONBLOCK", VAR_4);
 VAR_5 &= ~VAR_2;
 if (FUNC_3(VAR_4, VAR_1, VAR_5) == -1) {
  FUNC_0("fcntl(%d, F_SETFL, ~O_NONBLOCK): %s",
      VAR_4, FUNC_4(VAR_3));
  return (-1);
 }
 return (0);
}
