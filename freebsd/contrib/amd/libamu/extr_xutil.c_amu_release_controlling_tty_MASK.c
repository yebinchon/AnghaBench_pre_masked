
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_7(void)
{
  int VAR_11;
  VAR_11 = FUNC_4("/dev/null", VAR_2);
  if (VAR_11 < 0) {
    FUNC_5(VAR_6, "Could not open /dev/null for rw: %m");
  } else {
    FUNC_2(VAR_9); FUNC_0(0); FUNC_1(VAR_11, 0);
    FUNC_2(VAR_10); FUNC_0(1); FUNC_1(VAR_11, 1);
    FUNC_2(VAR_8); FUNC_0(2); FUNC_1(VAR_11, 2);
    FUNC_0(VAR_11);
  }
  FUNC_5(VAR_4, "unable to release controlling tty");

}
