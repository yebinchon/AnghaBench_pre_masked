
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sockaddr {int dummy; } ;
struct passwd {char const* pw_name; } ;
struct TYPE_2__ {char* user; } ;
typedef int Sensitive ;


 int FUNC_0 (char*,char*,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,struct sockaddr*,int ) ;
 int FUNC_6 (char*,char*,char*,int *) ;
 char* FUNC_7 (char const*) ;

void
FUNC_8(Sensitive *VAR_1, const char *VAR_2,
    struct sockaddr *VAR_3, u_short VAR_4, struct passwd *VAR_5, int VAR_6)
{
 char *VAR_7;
 char *VAR_8, *VAR_9;

 VAR_9 = FUNC_7(VAR_5->pw_name);
 VAR_8 = VAR_0.user ? VAR_0.user : VAR_9;


 VAR_7 = FUNC_7(VAR_2);
 FUNC_2(VAR_7);


 FUNC_4(VAR_6);


 FUNC_3();



 FUNC_0("Authenticating to %s:%d as '%s'", VAR_7, VAR_4, VAR_8);
 FUNC_5(VAR_7, VAR_3, VAR_4);
 FUNC_6(VAR_9, VAR_8, VAR_7, VAR_1);
 FUNC_1(VAR_9);
}
