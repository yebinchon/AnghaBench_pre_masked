
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct passwd {int pw_uid; } ;
typedef int socklen_t ;
typedef int sa ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 struct passwd* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (int *,int ,int ,int ,int *) ;
 int FUNC_13 () ;
 int * FUNC_14 (int ,int *,int *,int ,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 () ;
 int VAR_10 ;

int
FUNC_17(int VAR_11, char *VAR_12[])
{
 SVCXPRT *VAR_13;
 socklen_t VAR_14;
 int VAR_15;
 struct sockaddr_storage VAR_16;

 if (VAR_11 == 2 && !FUNC_10(VAR_12[1], "-n"))
  VAR_9 = 1;
 if (VAR_11 != 1 && !VAR_9)
  FUNC_16();

 if (FUNC_1() == 0) {
  struct passwd *VAR_17 = FUNC_2("nobody");
  if (VAR_17)
   FUNC_8(VAR_17->pw_uid);
  else
   FUNC_8(FUNC_4());
 }




 VAR_14 = sizeof(VAR_16);
        if (FUNC_3(0, (struct sockaddr *)&VAR_16, &VAR_14) < 0) {
                VAR_7 = 0;
        }

        if (!VAR_7) {
                if (!VAR_9)
                        FUNC_6();

  (void)FUNC_7(VAR_5, VAR_6, ((void*)0));
        }

 (void)FUNC_9(VAR_4, VAR_8);

 FUNC_5("rpc.rwalld", VAR_0|VAR_3, VAR_1);


 if (VAR_7) {
  VAR_13 = FUNC_14(0, ((void*)0), ((void*)0), 0, 0);
  if (VAR_13 == ((void*)0)) {
   FUNC_15(VAR_2, "couldn't create udp service.");
   FUNC_0(1);
  }
  VAR_15 = FUNC_12(VAR_13, VAR_5, VAR_6,
        VAR_10, ((void*)0));
 } else
  VAR_15 = FUNC_11(VAR_10,
    VAR_5, VAR_6, "udp");
 if (!VAR_15) {
  FUNC_15(VAR_2, "unable to register (WALLPROG, WALLVERS, %s)", (!VAR_7)?"udp":"(inetd)");
  FUNC_0(1);
 }
 FUNC_13();
 FUNC_15(VAR_2, "svc_run returned");
 FUNC_0(1);
}
