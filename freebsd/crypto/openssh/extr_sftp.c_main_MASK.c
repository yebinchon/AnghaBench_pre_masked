
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sftp_conn {int dummy; } ;
typedef int args ;
struct TYPE_6__ {int * list; } ;
typedef TYPE_1__ arglist ;
typedef int LogLevel ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int VAR_12 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int *,int*,int*) ;
 struct sftp_conn* FUNC_5 (int,int,size_t,size_t,long long) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int FUNC_13 (struct sftp_conn*,char*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ,int ,int) ;
 int FUNC_16 (TYPE_1__*,char,int) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*,char**,char**,int*,char**) ;
 int FUNC_19 (char*,char**,char**,char**) ;
 int VAR_19 ;
 int FUNC_20 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_21 () ;
 scalar_t__ VAR_20 ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (char*) ;
 int FUNC_24 () ;
 int VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int * FUNC_25 (char*,char) ;
 int FUNC_26 (char*,char*) ;
 char* FUNC_27 (scalar_t__) ;
 size_t FUNC_28 (char*,char**,int) ;
 long long FUNC_29 (char*,int,int,char const**) ;
 int FUNC_30 () ;
 int FUNC_31 (int,int *,int ) ;
 char* FUNC_32 (char*) ;

int
FUNC_33(int VAR_24, char **VAR_25)
{
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31 = -1;
 char *VAR_32 = ((void*)0), *VAR_33, *VAR_34, *VAR_35 = ((void*)0);
 int VAR_36 = 0, VAR_37 = 2;
 char *VAR_38 = ((void*)0), *VAR_39 = ((void*)0);
 char *VAR_40 = VAR_10, *VAR_41 = ((void*)0);
 const char *VAR_42;
 LogLevel VAR_43 = VAR_8;
 arglist VAR_44;
 extern int VAR_45;
 extern char *VAR_46;
 struct sftp_conn *VAR_47;
 size_t VAR_48 = VAR_0;
 size_t VAR_49 = VAR_1;
 long long VAR_50 = 0;

 FUNC_24();

 FUNC_21();
 FUNC_17();

 VAR_11 = FUNC_23(VAR_25[0]);
 FUNC_16(&VAR_44, '\0', sizeof(VAR_44));
 VAR_44.list = ((void*)0);
 FUNC_1(&VAR_44, "%s", VAR_40);
 FUNC_1(&VAR_44, "-oForwardX11 no");
 FUNC_1(&VAR_44, "-oForwardAgent no");
 FUNC_1(&VAR_44, "-oPermitLocalCommand no");
 FUNC_1(&VAR_44, "-oClearAllForwardings yes");

 VAR_43 = VAR_8;
 VAR_18 = VAR_23;

 while ((VAR_28 = FUNC_12(VAR_24, VAR_25,
     "1246afhpqrvCc:D:i:l:o:s:S:b:B:F:P:R:")) != -1) {
  switch (VAR_28) {

  case '4':
  case '6':
  case 'C':
   FUNC_1(&VAR_44, "-%c", VAR_28);
   break;

  case 'F':
  case 'c':
  case 'i':
  case 'o':
   FUNC_1(&VAR_44, "-%c", VAR_28);
   FUNC_1(&VAR_44, "%s", VAR_46);
   break;
  case 'q':
   VAR_43 = VAR_7;
   VAR_19 = 1;
   VAR_20 = 0;
   FUNC_1(&VAR_44, "-%c", VAR_28);
   break;
  case 'P':
   VAR_31 = FUNC_0(VAR_46);
   if (VAR_31 <= 0)
    FUNC_7("Bad port \"%s\"\n", VAR_46);
   break;
  case 'v':
   if (VAR_36 < 3) {
    FUNC_1(&VAR_44, "-v");
    VAR_43 = VAR_6 + VAR_36;
   }
   VAR_36++;
   break;
  case '1':
   VAR_37 = 1;
   if (VAR_39 == ((void*)0))
    VAR_39 = VAR_9;
   break;
  case '2':
   VAR_37 = 2;
   break;
  case 'a':
   VAR_14 = 1;
   break;
  case 'B':
   VAR_48 = FUNC_28(VAR_46, &VAR_34, 10);
   if (VAR_48 == 0 || *VAR_34 != '\0')
    FUNC_7("Invalid buffer size \"%s\"", VAR_46);
   break;
  case 'b':
   if (VAR_12)
    FUNC_7("Batch file already specified.");


   if (FUNC_26(VAR_46, "-") != 0 &&
       (VAR_18 = FUNC_9(VAR_46, "r")) == ((void*)0))
    FUNC_7("%s (%s).", FUNC_27(VAR_13), VAR_46);
   VAR_20 = 0;
   VAR_19 = VAR_12 = 1;
   FUNC_1(&VAR_44, "-obatchmode yes");
   break;
  case 'f':
   VAR_15 = 1;
   break;
  case 'p':
   VAR_16 = 1;
   break;
  case 'D':
   VAR_41 = VAR_46;
   break;
  case 'l':
   VAR_50 = FUNC_29(VAR_46, 1, 100 * 1024 * 1024,
       &VAR_42);
   if (VAR_42 != ((void*)0))
    FUNC_30();
   VAR_50 *= 1024;
   break;
  case 'r':
   VAR_17 = 1;
   break;
  case 'R':
   VAR_49 = FUNC_28(VAR_46, &VAR_34, 10);
   if (VAR_49 == 0 || *VAR_34 != '\0')
    FUNC_7("Invalid number of requests \"%s\"",
        VAR_46);
   break;
  case 's':
   VAR_39 = VAR_46;
   break;
  case 'S':
   VAR_40 = VAR_46;
   FUNC_20(&VAR_44, 0, "%s", VAR_40);
   break;
  case 'h':
  default:
   FUNC_30();
  }
 }

 if (!FUNC_14(VAR_4))
  VAR_20 = 0;

 FUNC_15(VAR_25[0], VAR_43, VAR_5, 1);

 if (VAR_41 == ((void*)0)) {
  if (VAR_45 == VAR_24 || VAR_24 > (VAR_45 + 2))
   FUNC_30();
  VAR_25 += VAR_45;

  switch (FUNC_18("sftp", *VAR_25, &VAR_33, &VAR_32, &VAR_30, &VAR_38)) {
  case -1:
   FUNC_30();
   break;
  case 0:
   if (VAR_30 != -1)
    VAR_31 = VAR_30;
   break;
  default:
   if (FUNC_19(*VAR_25, &VAR_33, &VAR_32,
       &VAR_38) == -1) {

    VAR_32 = FUNC_32(*VAR_25);
    VAR_32 = FUNC_2(VAR_32);
   }
   break;
  }
  VAR_35 = *(VAR_25 + 1);

  if (!*VAR_32) {
   FUNC_10(VAR_22, "Missing hostname\n");
   FUNC_30();
  }

  if (VAR_31 != -1)
   FUNC_1(&VAR_44, "-oPort %d", VAR_31);
  if (VAR_33 != ((void*)0)) {
   FUNC_1(&VAR_44, "-l");
   FUNC_1(&VAR_44, "%s", VAR_33);
  }
  FUNC_1(&VAR_44, "-oProtocol %d", VAR_37);


  if (VAR_39 == ((void*)0) || FUNC_25(VAR_39, '/') == ((void*)0))
   FUNC_1(&VAR_44, "-s");

  FUNC_1(&VAR_44, "--");
  FUNC_1(&VAR_44, "%s", VAR_32);
  FUNC_1(&VAR_44, "%s", (VAR_39 != ((void*)0) ?
      VAR_39 : "sftp"));

  FUNC_4(VAR_40, VAR_44.list, &VAR_26, &VAR_27);
 } else {
  VAR_44.list = ((void*)0);
  FUNC_1(&VAR_44, "sftp-server");

  FUNC_4(VAR_41, VAR_44.list, &VAR_26, &VAR_27);
 }
 FUNC_11(&VAR_44);

 VAR_47 = FUNC_5(VAR_26, VAR_27, VAR_48, VAR_49, VAR_50);
 if (VAR_47 == ((void*)0))
  FUNC_7("Couldn't initialise connection to server");

 if (!VAR_19) {
  if (VAR_41 == ((void*)0))
   FUNC_10(VAR_22, "Connected to %s.\n", VAR_32);
  else
   FUNC_10(VAR_22, "Attached to %s.\n", VAR_41);
 }

 VAR_29 = FUNC_13(VAR_47, VAR_38, VAR_35);


 FUNC_22(VAR_26, VAR_3);
 FUNC_22(VAR_27, VAR_3);


 FUNC_3(VAR_26);
 FUNC_3(VAR_27);
 if (VAR_12)
  FUNC_8(VAR_18);

 while (FUNC_31(VAR_21, ((void*)0), 0) == -1 && VAR_21 > 1)
  if (VAR_13 != VAR_2)
   FUNC_7("Couldn't wait for ssh process: %s",
       FUNC_27(VAR_13));

 FUNC_6(VAR_29 == 0 ? 0 : 1);
}
