
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {char* sun_path; int sun_family; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr_un*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;

FUNC_12()
{
 int VAR_3, VAR_4, VAR_5;
 struct sockaddr_un VAR_6;
 char VAR_7[1024];


 VAR_3 = FUNC_9(VAR_0, VAR_2, 0);
 if (VAR_3 < 0) {
  FUNC_6("opening stream socket");
  FUNC_4(1);
 }

 VAR_6.sun_family = VAR_0;
 FUNC_10(VAR_6.sun_path, VAR_1);
 if (FUNC_1(VAR_3, &VAR_6, sizeof(struct sockaddr_un))) {
  FUNC_6("binding stream socket");
  FUNC_4(1);
 }
 FUNC_7("Socket has name %s\en", VAR_6.sun_path);

 FUNC_5(VAR_3, 5);
 for (;;) {
  VAR_4 = FUNC_0(VAR_3, 0, 0);
  if (VAR_4 == -1)
   FUNC_6("accept");
  else do {
   FUNC_2(VAR_7, sizeof(VAR_7));
   if ((VAR_5 = FUNC_8(VAR_4, VAR_7, 1024)) < 0)
    FUNC_6("reading stream message");
   else if (VAR_5 == 0)
    FUNC_7("Ending connection\en");
   else
    FUNC_7("-->%s\en", VAR_7);
  } while (VAR_5 > 0);
  FUNC_3(VAR_4);
 }
 FUNC_3(VAR_3);
 FUNC_11(VAR_1);
}
