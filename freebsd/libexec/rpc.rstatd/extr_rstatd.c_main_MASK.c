
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int from ;
typedef int SVCXPRT ;


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
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_14 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int *,int ,int ,int ,int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (int ,int *,int *,int ,int ) ;
 int FUNC_11 (int ,char*,...) ;

int
FUNC_12(int VAR_15, char *VAR_16[])
{
 SVCXPRT *VAR_17;
 int VAR_18;
 struct sockaddr_storage VAR_19;
 socklen_t VAR_20;

        if (VAR_15 == 2)
                VAR_12 = FUNC_0(VAR_16[1]);
        if (VAR_12 <= 0)
                VAR_12 = 20;




 VAR_20 = sizeof(VAR_19);
        if (FUNC_3(0, (struct sockaddr *)&VAR_19, &VAR_20) < 0) {
                VAR_13 = 0;
        }

        if (!VAR_13) {
                FUNC_1(0, 0);

                (void)FUNC_5(VAR_4, VAR_7, ((void*)0));
                (void)FUNC_5(VAR_4, VAR_6, ((void*)0));
                (void)FUNC_5(VAR_4, VAR_5, ((void*)0));

  (void) FUNC_6(VAR_9, VAR_11);
  (void) FUNC_6(VAR_10, VAR_11);
  (void) FUNC_6(VAR_8, VAR_11);
        }

        FUNC_4("rpc.rstatd", VAR_0|VAR_3, VAR_1);

 if (VAR_13) {
  VAR_17 = FUNC_10(0, ((void*)0), ((void*)0), 0, 0);
  if (VAR_17 == ((void*)0)) {
   FUNC_11(VAR_2, "cannot create udp service.");
   FUNC_2(1);
  }
  VAR_18 = FUNC_8(VAR_17, VAR_4, VAR_7,
        VAR_14, ((void*)0));
 } else
  VAR_18 = FUNC_7(VAR_14,
    VAR_4, VAR_7, "udp");
 if (!VAR_18) {
  FUNC_11(VAR_2, "unable to register (RSTATPROG, RSTATVERS_TIME, %s)", (!VAR_13)?"udp":"(inetd)");
    FUNC_2(1);
 }
 if (VAR_13)
  VAR_18 = FUNC_8(VAR_17, VAR_4, VAR_6,
        VAR_14, ((void*)0));
 else
  VAR_18 = FUNC_7(VAR_14,
    VAR_4, VAR_6, "udp");
 if (!VAR_18) {
  FUNC_11(VAR_2, "unable to register (RSTATPROG, RSTATVERS_SWTCH, %s)", (!VAR_13)?"udp":"(inetd)");
    FUNC_2(1);
 }
 if (VAR_13)
  VAR_18 = FUNC_8(VAR_17, VAR_4, VAR_5,
        VAR_14, ((void*)0));
 else
  VAR_18 = FUNC_7(VAR_14,
    VAR_4, VAR_5, "udp");
 if (!VAR_18) {
  FUNC_11(VAR_2, "unable to register (RSTATPROG, RSTATVERS_ORIG, %s)", (!VAR_13)?"udp":"(inetd)");
    FUNC_2(1);
 }

        FUNC_9();
 FUNC_11(VAR_2, "svc_run returned");
 FUNC_2(1);
}
