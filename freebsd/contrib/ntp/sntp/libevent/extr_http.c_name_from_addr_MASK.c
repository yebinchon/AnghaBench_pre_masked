
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int strport ;
typedef int ntop ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct sockaddr *VAR_5, ev_socklen_t VAR_6,
    char **VAR_7, char **VAR_8)
{
 char VAR_9[VAR_1];
 char VAR_10[VAR_2];
 int VAR_11;
 VAR_11 = FUNC_2(VAR_5, VAR_6,
  VAR_9, sizeof(VAR_9), VAR_10, sizeof(VAR_10),
  VAR_3|VAR_4);
 if (VAR_11 != 0)
   return;


 *VAR_7 = FUNC_5(VAR_9);
 *VAR_8 = FUNC_5(VAR_10);
}
