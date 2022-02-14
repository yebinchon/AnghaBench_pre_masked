
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;

void
FUNC_4(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10;

 if (VAR_7 != 2) {
 usage:
  FUNC_0("usage: %s size\n", VAR_8[0]);
  VAR_3 = -1;
  return;
 }
 if (FUNC_2(VAR_8[0], "sndbuf") == 0)
  VAR_10 = VAR_2;
 else if (FUNC_2(VAR_8[0], "rcvbuf") == 0)
  VAR_10 = VAR_1;
 else if (FUNC_2(VAR_8[0], "xferbuf") == 0)
  VAR_10 = VAR_0;
 else
  goto usage;

 if ((VAR_9 = FUNC_3(VAR_8[1])) == -1)
  goto usage;

 if (VAR_9 == 0) {
  FUNC_1(VAR_6, "%s: size must be positive.\n", VAR_8[0]);
  goto usage;
 }

 if (VAR_10 & VAR_2)
  VAR_5 = VAR_9;
 if (VAR_10 & VAR_1)
  VAR_4 = VAR_9;
 FUNC_1(VAR_6, "Socket buffer sizes: send %d, receive %d.\n",
     VAR_5, VAR_4);
 VAR_3 = 0;
}
