
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int set; int wset; int win; int fd; int t; int ldisc; } ;
typedef int speed_t ;
typedef enum FMT { ____Placeholder_FMT } FMT ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char***,struct info*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (char) ;
 scalar_t__ FUNC_12 (char***,struct info*) ;
 scalar_t__ FUNC_13 (char***,struct info*) ;
 int FUNC_14 (char*,int) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int *,int *,int ,int) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,int ,int ,char const**) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int ,int *) ;
 int FUNC_22 () ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*,char*) ;

int
FUNC_25(int VAR_10, char *VAR_11[])
{
 struct info VAR_12;
 enum FMT VAR_13;
 int VAR_14;
 const char *VAR_15, *VAR_16 = ((void*)0);

 VAR_13 = 129;
 VAR_12.fd = VAR_2;
 VAR_15 = "stdin";

 VAR_8 = 0;
 while (VAR_9 < VAR_10 &&
     FUNC_18(VAR_11[VAR_9], "-aefg") == FUNC_16(VAR_11[VAR_9]) &&
     (VAR_14 = FUNC_7(VAR_10, VAR_11, "aef:g")) != -1)
  switch(VAR_14) {
  case 'a':
   VAR_13 = 128;
   break;
  case 'e':
   VAR_13 = 131;
   break;
  case 'f':
   if ((VAR_12.fd = FUNC_14(VAR_7, VAR_1 | VAR_0)) < 0)
    FUNC_4(1, "%s", VAR_7);
   VAR_15 = VAR_7;
   break;
  case 'g':
   VAR_13 = 130;
   break;
  case '?':
  default:
   goto args;
  }

args: VAR_10 -= VAR_9;
 VAR_11 += VAR_9;

 if (FUNC_20(VAR_12.fd, &VAR_12.t) < 0)
  FUNC_5(1, "%s isn't a terminal", VAR_15);
 if (FUNC_10(VAR_12.fd, VAR_3, &VAR_12.ldisc) < 0)
  FUNC_4(1, "TIOCGETD");
 if (FUNC_10(VAR_12.fd, VAR_4, &VAR_12.win) < 0)
  FUNC_23("TIOCGWINSZ");

 FUNC_2();

 switch(VAR_13) {
 case 129:
  if (*VAR_11)
   break;

 case 131:
 case 128:
  FUNC_15(&VAR_12.t, &VAR_12.win, VAR_12.ldisc, VAR_13);
  break;
 case 130:
  FUNC_8(&VAR_12.t, &VAR_12.win, VAR_12.ldisc);
  break;
 }

 for (VAR_12.set = VAR_12.wset = 0; *VAR_11; ++VAR_11) {
  if (FUNC_12(&VAR_11, &VAR_12))
   continue;

  if (FUNC_3(&VAR_11, &VAR_12))
   continue;

  if (FUNC_13(&VAR_11, &VAR_12))
   continue;

  if (FUNC_11(**VAR_11)) {
   speed_t VAR_17;

   VAR_17 = FUNC_19(*VAR_11, 0, VAR_6, &VAR_16);
   if (VAR_16)
    FUNC_4(1, "speed");
   FUNC_1(&VAR_12.t, VAR_17);
   FUNC_0(&VAR_12.t, VAR_17);
   VAR_12.set = 1;
   continue;
  }

  if (!FUNC_17(*VAR_11, "gfmt1", sizeof("gfmt1") - 1)) {
   FUNC_9(&VAR_12.t, *VAR_11 + sizeof("gfmt1") - 1);
   VAR_12.set = 1;
   continue;
  }

  FUNC_24("illegal option -- %s", *VAR_11);
  FUNC_22();
 }

 if (VAR_12.set && FUNC_21(VAR_12.fd, 0, &VAR_12.t) < 0)
  FUNC_4(1, "tcsetattr");
 if (VAR_12.wset && FUNC_10(VAR_12.fd, VAR_5, &VAR_12.win) < 0)
  FUNC_23("TIOCSWINSZ");
 FUNC_6(0);
}
