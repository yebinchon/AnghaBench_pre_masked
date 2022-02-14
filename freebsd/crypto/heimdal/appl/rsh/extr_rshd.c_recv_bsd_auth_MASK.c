
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct passwd {scalar_t__ pw_uid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *,char*) ;
 struct passwd* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,char*,char*) ;
 char* FUNC_3 (int,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_4 (int VAR_2, u_char *VAR_3,
        struct sockaddr_in *VAR_4,
        struct sockaddr_in *VAR_5,
        char **VAR_6,
        char **VAR_7,
        char **VAR_8)
{
    struct passwd *VAR_9;

    *VAR_6 = FUNC_3 (VAR_2, VAR_1, "local username");
    *VAR_7 = FUNC_3 (VAR_2, VAR_1, "remote username");
    *VAR_8 = FUNC_3 (VAR_2, VAR_0 + 1, "command");
    VAR_9 = FUNC_1(*VAR_7);
    if (VAR_9 == ((void*)0))
 FUNC_0(VAR_2, ((void*)0), "Login incorrect.");
    if (FUNC_2(VAR_5->sin_addr.s_addr, VAR_9->pw_uid == 0,
   *VAR_6, *VAR_7))
 FUNC_0(VAR_2, ((void*)0), "Login incorrect.");
    return 0;
}
