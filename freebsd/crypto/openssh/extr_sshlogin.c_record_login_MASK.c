
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct sockaddr {int dummy; } ;
struct logininfo {int dummy; } ;
typedef int socklen_t ;
typedef int pid_t ;


 struct logininfo* FUNC_0 (int ,char const*,char const*,char const*) ;
 int FUNC_1 (struct logininfo*) ;
 int FUNC_2 (struct logininfo*) ;
 int FUNC_3 (struct logininfo*,struct sockaddr*,int ) ;
 int FUNC_4 (char const*,int ) ;

void
FUNC_5(pid_t VAR_0, const char *VAR_1, const char *VAR_2, uid_t VAR_3,
    const char *VAR_4, struct sockaddr *VAR_5, socklen_t VAR_6)
{
 struct logininfo *VAR_7;


 FUNC_4(VAR_2, VAR_3);

 VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_4, VAR_1);
 FUNC_3(VAR_7, VAR_5, VAR_6);
 FUNC_2(VAR_7);
 FUNC_1(VAR_7);
}
