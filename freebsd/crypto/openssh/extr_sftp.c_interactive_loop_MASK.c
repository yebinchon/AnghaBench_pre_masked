
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char sftp_conn ;
struct complete_ctx {char* conn; char** remote_pathp; } ;
typedef int cmd ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int*) ;
 int * FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_19 ;
 int FUNC_10 (int *,int *,int ,...) ;
 int * FUNC_11 () ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_12 (int ) ;
 char* FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*,char**,char*,int) ;
 int FUNC_16 (char*) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (int ,int *,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,int,char*,char*,...) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_21 (char*,char const*,int) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (char*,char) ;
 char* FUNC_24 (char*) ;

__attribute__((used)) static int
FUNC_25(struct sftp_conn *VAR_27, char *VAR_28, char *VAR_29)
{
 char *VAR_30;
 char *VAR_31 = ((void*)0), *VAR_32 = ((void*)0);
 char VAR_33[2048];
 int VAR_34, VAR_35;
 EditLine *VAR_36 = ((void*)0);
 VAR_30 = FUNC_0(VAR_27, ".");
 if (VAR_30 == ((void*)0))
  FUNC_6("Need cwd");
 VAR_32 = FUNC_24(VAR_30);

 if (VAR_28 != ((void*)0)) {
  VAR_31 = FUNC_24(VAR_28);
  VAR_31 = FUNC_13(VAR_31, VAR_30);

  if (FUNC_17(VAR_27, VAR_31) && VAR_29 == ((void*)0)) {
   if (!VAR_23)
    FUNC_14("Changing to: %s\n", VAR_31);
   FUNC_20(VAR_33, sizeof VAR_33, "cd \"%s\"", VAR_31);
   if (FUNC_15(VAR_27, VAR_33,
       &VAR_30, VAR_32, 1) != 0) {
    FUNC_9(VAR_31);
    FUNC_9(VAR_32);
    FUNC_9(VAR_30);
    FUNC_9(VAR_27);
    return (-1);
   }
  } else {

   FUNC_20(VAR_33, sizeof VAR_33, "get%s %s%s%s",
       VAR_19 ? " -a" : "", VAR_31,
       VAR_29 == ((void*)0) ? "" : " ",
       VAR_29 == ((void*)0) ? "" : VAR_29);
   VAR_34 = FUNC_15(VAR_27, VAR_33,
       &VAR_30, VAR_32, 1);
   FUNC_9(VAR_31);
   FUNC_9(VAR_32);
   FUNC_9(VAR_30);
   FUNC_9(VAR_27);
   return (VAR_34);
  }
  FUNC_9(VAR_31);
 }

 FUNC_18(VAR_26, ((void*)0), VAR_15, 0);
 FUNC_18(VAR_20, ((void*)0), VAR_15, 0);

 VAR_35 = !VAR_16 && FUNC_12(VAR_14);
 VAR_34 = 0;
 for (;;) {
  char *VAR_37;

  FUNC_19(VAR_11, VAR_13);

  if (VAR_36 == ((void*)0)) {
   if (VAR_35)
    FUNC_16("sftp> ");
   if (FUNC_7(VAR_33, sizeof(VAR_33), VAR_20) == ((void*)0)) {
    if (VAR_35)
     FUNC_16("\n");
    break;
   }
   if (!VAR_35) {
    FUNC_14("sftp> %s", VAR_33);
    if (FUNC_22(VAR_33) > 0 &&
        VAR_33[FUNC_22(VAR_33) - 1] != '\n')
     FUNC_16("\n");
   }
  } else {
  }

  VAR_37 = FUNC_23(VAR_33, '\n');
  if (VAR_37)
   *VAR_37 = '\0';


  VAR_21 = 0;
  FUNC_19(VAR_11, VAR_17);

  VAR_34 = FUNC_15(VAR_27, VAR_33, &VAR_30,
      VAR_32, VAR_16);
  if (VAR_34 != 0)
   break;
 }
 FUNC_19(VAR_10, VAR_12);
 FUNC_9(VAR_30);
 FUNC_9(VAR_32);
 FUNC_9(VAR_27);







 return (VAR_34 >= 0 ? 0 : -1);
}
