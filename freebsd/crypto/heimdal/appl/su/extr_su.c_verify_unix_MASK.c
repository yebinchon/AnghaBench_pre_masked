
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_passwd; char* pw_name; scalar_t__ pw_uid; } ;
typedef int pw_buf ;
typedef int prompt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,int ) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,char*,char*,...) ;

__attribute__((used)) static int
FUNC_8(struct passwd *VAR_4, struct passwd *VAR_5)
{
    char VAR_6[128];
    char VAR_7[1024];
    char *VAR_8;
    int VAR_9;
    if(VAR_5->pw_passwd != ((void*)0) && *VAR_5->pw_passwd != '\0') {
 FUNC_5(VAR_6, sizeof(VAR_6), "%s's password: ", VAR_5->pw_name);
 VAR_9 = FUNC_0(VAR_7, sizeof(VAR_7), VAR_6, 0);
 if(VAR_9 != 0)
     FUNC_2(0);
 VAR_8 = FUNC_1(VAR_7, VAR_5->pw_passwd);
 FUNC_4(VAR_7, 0, sizeof(VAR_7));
 if(FUNC_6(VAR_8, VAR_5->pw_passwd) != 0) {
     FUNC_7 (VAR_2 | VAR_1, "%s to %s: incorrect password",
      VAR_4->pw_name, VAR_5->pw_name);
     return 1;
 }
    }



    if(VAR_5->pw_uid == 0) {



 int VAR_10 = FUNC_3("wheel", VAR_4->pw_name);
 if(VAR_10 == VAR_0) {
     FUNC_7 (VAR_2 | VAR_1, "%s to %s: not in group %s",
      VAR_4->pw_name, VAR_5->pw_name, "wheel");
     return 1;
 }
 return 0;
    }
    return 0;
}
