
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int rhost ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_14 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int,char*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,char**,char*) ;
 scalar_t__ FUNC_11 (int ,struct sockaddr*,int*) ;
 int FUNC_12 (char*,...) ;
 char* FUNC_13 (int) ;
 char* FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,int,int ) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_17 (int*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int,struct sockaddr*,int) ;
 int FUNC_21 (char*,char*,int) ;
 scalar_t__ FUNC_22 (int,int ,int ,int*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_23 (char*,char) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char*) ;
 char* FUNC_27 (char*,char) ;
 char* FUNC_28 (char*,char*) ;
 int FUNC_29 (int ,char*,char*,char*) ;
 int FUNC_30 () ;
 int FUNC_31 (int,char*,int ) ;

int
FUNC_32(int VAR_20, char *VAR_21[])
{
 FILE *VAR_22;
 int VAR_23;
 char *VAR_24;
 struct sockaddr_storage VAR_25;
 socklen_t VAR_26;
 int VAR_27[2], VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;

 char **VAR_33, *VAR_34[50 + 1], **VAR_35, VAR_36[1024], *VAR_37;
 char VAR_38[VAR_7];

 VAR_37 = VAR_13;
 VAR_28 = VAR_30 = VAR_29 = VAR_31 = VAR_32 = 0;
 FUNC_16("fingerd", VAR_6 | VAR_3, VAR_4);
 VAR_16 = 0;
 while ((VAR_23 = FUNC_10(VAR_20, VAR_21, "dklp:s")) != -1)
  switch (VAR_23) {
  case 'd':
   VAR_28 = 1;
   break;
  case 'k':
   VAR_29 = 1;
   break;
  case 'l':
   VAR_30 = 1;
   break;
  case 'p':
   VAR_37 = VAR_15;
   VAR_31 = 1;
   break;
  case 's':
   VAR_32 = 1;
   break;
  case '?':
  default:
   FUNC_12("illegal option -- %c", VAR_17);
  }




 if (!VAR_28) {
  int VAR_39 = 1;
  if (FUNC_22(VAR_11, VAR_2, VAR_12, &VAR_39,
          sizeof VAR_39) < 0) {
   FUNC_12("setsockopt(TCP_NOPUSH) failed: %m");
  }
 }

 if (!FUNC_7(VAR_36, sizeof(VAR_36), VAR_19))
  FUNC_5(1);

 if (!VAR_28 && (VAR_30 || VAR_31)) {
  VAR_26 = sizeof(VAR_25);
  if (FUNC_11(0, (struct sockaddr *)&VAR_25, &VAR_26) < 0)
   FUNC_12("getpeername: %s", FUNC_25(VAR_14));
  FUNC_20(VAR_38, sizeof VAR_38 - 1,
    (struct sockaddr *)&VAR_25, VAR_26);
  VAR_38[sizeof(VAR_38) - 1] = '\0';
  if (VAR_31)
   FUNC_21("FINGERD_REMOTE_HOST", VAR_38, 1);
 }

 if (VAR_30) {
  char *VAR_40;
  char *VAR_41;

  VAR_41 = FUNC_14(VAR_36, 0, sizeof(VAR_36));
  if (VAR_41 == ((void*)0)) {
   if ((VAR_40 = FUNC_13(sizeof(VAR_36) + 1)) == ((void*)0))
    FUNC_12("malloc: %s", FUNC_25(VAR_14));
   FUNC_15(VAR_40, VAR_36, sizeof(VAR_36));
   VAR_40[sizeof(VAR_36)] = 0;
  } else {
   if ((VAR_40 = FUNC_24(VAR_36)) == ((void*)0))
    FUNC_12("strdup: %s", FUNC_25(VAR_14));
  }
  for (VAR_41 = VAR_40; *VAR_41; VAR_41++)
   if (*VAR_41 == '\n' || *VAR_41 == '\r')
    *VAR_41 = ' ';
  FUNC_29(VAR_5, "query from %s: `%s'", VAR_38, VAR_40);
 }

 VAR_35 = &VAR_34[2];
 VAR_34[3] = "--";
 if (VAR_29)
  *VAR_35-- = "-k";
 for (VAR_24 = VAR_36, VAR_33 = &VAR_34[4];;) {
  *VAR_33 = FUNC_28(VAR_24, " \t\r\n");
  if (!*VAR_33) {
   if (VAR_32 && VAR_33 == &VAR_34[4]) {



    FUNC_19("must provide username\r\n");
    FUNC_5(1);
   }
   break;
  }
  if (VAR_32 && FUNC_23(*VAR_33, '@')) {



   FUNC_19("forwarding service denied\r\n");
   FUNC_5(1);
  }


  if ((*VAR_33)[0] == '/' && ((*VAR_33)[1] == 'W' || (*VAR_33)[1] == 'w')) {
   *VAR_35-- = "-l";
  }
  else if (++VAR_33 == VAR_34 + 50) {
   *VAR_33 = ((void*)0);
   break;
  }
  VAR_24 = ((void*)0);
 }

 if ((VAR_24 = FUNC_27(VAR_37, '/')) != ((void*)0))
  *VAR_35 = ++VAR_24;
 else
  *VAR_35 = VAR_37;
 if (FUNC_17(VAR_27) < 0)
  FUNC_12("pipe: %s", FUNC_25(VAR_14));

 if (VAR_28) {
  FUNC_8(VAR_18, "%s", VAR_37);
  for (VAR_33 = VAR_35; *VAR_33 != ((void*)0); ++VAR_33)
   FUNC_8(VAR_18, " %s", *VAR_33);
  FUNC_8(VAR_18, "\n");
 }

 switch(FUNC_30()) {
 case 0:
  (void)FUNC_2(VAR_27[0]);
  if (VAR_27[1] != VAR_11) {
   (void)FUNC_3(VAR_27[1], VAR_11);
   (void)FUNC_2(VAR_27[1]);
  }
  FUNC_3(VAR_11, VAR_9);




  FUNC_4(VAR_37, VAR_35);
  FUNC_31(VAR_9, VAR_37, FUNC_26(VAR_37));

  FUNC_31(VAR_9, ": cannot execute\n", FUNC_26(": cannot execute\n"));

  FUNC_0(1);
 case -1:
  FUNC_12("fork: %s", FUNC_25(VAR_14));
 }
 (void)FUNC_2(VAR_27[1]);
 if (!(VAR_22 = FUNC_6(VAR_27[0], "r")))
  FUNC_12("fdopen: %s", FUNC_25(VAR_14));
 while ((VAR_23 = FUNC_9(VAR_22)) != VAR_1) {
  if (VAR_23 == '\n')
   FUNC_18('\r');
  FUNC_18(VAR_23);
 }
 FUNC_5(0);
}
