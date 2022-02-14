
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int,int ,int *) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 char* FUNC_7 (int ) ;

void
FUNC_8(int *VAR_7, const char *VAR_8)
{
 int VAR_9;
 if (FUNC_6() < 0)
  FUNC_2("setsid: %.100s", FUNC_7(VAR_6));





 VAR_9 = FUNC_4(VAR_5, VAR_1 | VAR_0);
 if (VAR_9 >= 0) {
  FUNC_2("Failed to disconnect from controlling tty.");
  FUNC_0(VAR_9);
 }
 VAR_9 = FUNC_4(VAR_8, VAR_1);
 if (VAR_9 < 0)
  FUNC_2("%.100s: %.100s", VAR_8, FUNC_7(VAR_6));
 else
  FUNC_0(VAR_9);


 VAR_9 = FUNC_4(VAR_5, VAR_2);
 if (VAR_9 < 0)
  FUNC_2("open /dev/tty failed - could not set controlling tty: %.100s",
      FUNC_7(VAR_6));
 else
  FUNC_0(VAR_9);
}
