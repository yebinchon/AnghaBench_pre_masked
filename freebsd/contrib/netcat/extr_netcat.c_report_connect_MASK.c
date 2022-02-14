
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int remote_port ;
typedef int remote_host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr const*,int ,char*,int,char*,int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_5(const struct sockaddr *VAR_7, socklen_t VAR_8)
{
 char VAR_9[VAR_1];
 char VAR_10[VAR_2];
 int VAR_11;
 int VAR_12 = VAR_4;

 if (VAR_5)
  VAR_12 |= VAR_3;

 if ((VAR_11 = FUNC_4(VAR_7, VAR_8,
     VAR_9, sizeof(VAR_9),
     VAR_10, sizeof(VAR_10),
     VAR_12)) != 0) {
  if (VAR_11 == VAR_0)
   FUNC_0(1, "getnameinfo");
  else
   FUNC_1(1, "getnameinfo: %s", FUNC_3(VAR_11));
 }

 FUNC_2(VAR_6,
     "Connection from %s %s "
     "received!\n", VAR_9, VAR_10);
}
