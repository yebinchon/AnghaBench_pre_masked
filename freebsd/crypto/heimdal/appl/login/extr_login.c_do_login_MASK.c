
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_cap {char* ca_default; } ;
struct udb {long* ue_pcpulim; long* ue_jcpulim; int * ue_nice; } ;
struct spwd {int dummy; } ;
struct passwd {scalar_t__ pw_uid; char const* pw_name; char* pw_dir; char const* pw_shell; scalar_t__ pw_gid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;
typedef int * cap_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 struct udb* VAR_13 ;
 char const* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct passwd const*,struct spwd*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (char const*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct user_cap*) ;
 struct group* FUNC_16 (char*) ;
 struct spwd* FUNC_17 (char const*) ;
 struct udb* FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*,scalar_t__) ;
 int FUNC_20 () ;
 int FUNC_21 (struct passwd const*) ;
 int FUNC_22 (struct passwd const*) ;
 scalar_t__ FUNC_23 (int ,int ,int ,long) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char const*,struct passwd const*) ;
 char* VAR_18 ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (char const*) ;
 int FUNC_30 (char const*,int *) ;
 scalar_t__ FUNC_31 (scalar_t__) ;
 struct user_cap* FUNC_32 (char const*) ;
 int FUNC_33 (char const*) ;
 int FUNC_34 (int,int ) ;
 int VAR_19 ;
 int FUNC_35 (char const**,char*,char*,int) ;
 int FUNC_36 (char const*,char*,char*,char*) ;
 int FUNC_37 (char*,...) ;

__attribute__((used)) static void
FUNC_38(const struct passwd *VAR_20, char *VAR_21, char *VAR_22)
{



    int VAR_23 = (VAR_20->pw_uid == 0);
    gid_t VAR_24;
    struct group *VAR_25;
    const char *VAR_26;
    int VAR_27;

    if(!VAR_23)
 FUNC_6();





    FUNC_36(VAR_20->pw_name, VAR_18 ? VAR_18 : "",
  VAR_21, VAR_22);

    VAR_25 = FUNC_16 ("tty");
    if (VAR_25 != ((void*)0))
 VAR_24 = VAR_25->gr_gid;
    else
 VAR_24 = VAR_20->pw_gid;

    if (FUNC_8 (VAR_22, VAR_20->pw_uid, VAR_24) < 0) {
 FUNC_37("chown %s", VAR_22);
 if (VAR_23 == 0)
     FUNC_13 (1);
    }

    if (FUNC_7 (VAR_22, VAR_9 | VAR_11 | VAR_10) < 0) {
 FUNC_37("chmod %s", VAR_22);
 if (VAR_23 == 0)
     FUNC_13 (1);
    }
    if(VAR_23 == 0) {
 const char *VAR_28 = FUNC_24("limits");
 if(VAR_28 == ((void*)0))
     VAR_28 = VAR_16;

 FUNC_27(VAR_28, VAR_20);
    }
    if(FUNC_9(VAR_20->pw_uid))
 FUNC_13(1);
    if(FUNC_28(VAR_20->pw_gid)){
 FUNC_37("setgid(%u)", (unsigned)VAR_20->pw_gid);
 if(VAR_23 == 0)
     FUNC_13(1);
    }
    if(FUNC_31(VAR_20->pw_uid) || (VAR_20->pw_uid != 0 && FUNC_31(0) == 0)) {
 FUNC_37("setuid(%u)", (unsigned)VAR_20->pw_uid);
 if(VAR_23 == 0)
     FUNC_13(1);
    }




    for (VAR_27 = 1; VAR_27 < VAR_7; ++VAR_27)
 FUNC_34(VAR_27, VAR_8);
    VAR_26 = VAR_20->pw_dir;
    if (FUNC_4(VAR_26) < 0) {
 FUNC_14(VAR_19, "No home directory \"%s\"!\n", VAR_20->pw_dir);
 if (FUNC_4("/"))
     FUNC_13(0);
 VAR_26 = "/";
 FUNC_14(VAR_19, "Logging in with home = \"/\".\n");
    }
    FUNC_0("PATH", VAR_14);

    {
 const char *VAR_29 = FUNC_24("environment");
 char VAR_30[VAR_6];

 if(VAR_29 == ((void*)0)) {
     FUNC_25(VAR_15);
 } else {
     while(FUNC_35(&VAR_29, ",", VAR_30, sizeof(VAR_30)) != -1) {
  if(VAR_30[0] == '\0')
      continue;
  FUNC_25(VAR_30);
     }
 }
    }
    {
 const char *VAR_31 = FUNC_24("motd");
 char VAR_32[VAR_6];

 if(VAR_31 != ((void*)0)) {
     while(FUNC_35(&VAR_31, ",", VAR_32, sizeof(VAR_32)) != -1) {
  if(VAR_32[0] == '\0')
      continue;
  FUNC_33(VAR_32);
     }
 } else {
     VAR_31 = FUNC_24("welcome");
     if(VAR_31 != ((void*)0))
  FUNC_33(VAR_31);
 }
    }
    FUNC_0("HOME", VAR_26);
    FUNC_0("USER", VAR_20->pw_name);
    FUNC_0("LOGNAME", VAR_20->pw_name);
    FUNC_0("SHELL", VAR_20->pw_shell);
    FUNC_12(VAR_20->pw_shell, VAR_23);
}
