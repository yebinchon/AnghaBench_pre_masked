
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
 int FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,char*) ;
 int FUNC_8 (int *,int ,int,int ,int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (int ,int *,int *,int ,int ) ;
 int FUNC_11 (int ,char*,...) ;

int
FUNC_12(int VAR_15, char **VAR_16)
{
 SVCXPRT *VAR_17;
 int VAR_18;
 struct sockaddr_storage VAR_19;
 socklen_t VAR_20;
 int VAR_21;
 int VAR_22;

 while ((VAR_22 = FUNC_2(VAR_15, VAR_16, "d")) != -1) {
  switch (VAR_22) {
  case 'd':
   VAR_11++;
   break;
  default:
   break;
  }
 }

 VAR_20 = sizeof(VAR_19);
 if (FUNC_3(0, (struct sockaddr *)&VAR_19, &VAR_20) < 0)
  VAR_12 = 0;

 if (!VAR_12) {
  if (!VAR_11)
   FUNC_0(0, 0);
  (void)FUNC_5(VAR_5, VAR_6, ((void*)0));
  (void)FUNC_6(VAR_8, VAR_10);
  (void)FUNC_6(VAR_9, VAR_10);
  (void)FUNC_6(VAR_7, VAR_10);
 }

 FUNC_4("rpc.rquotad", VAR_1|VAR_4, VAR_2);


 if (VAR_12) {
  VAR_17 = FUNC_10(0, ((void*)0), ((void*)0), 0, 0);
  if (VAR_17 == ((void*)0)) {
   FUNC_11(VAR_3, "couldn't create udp service.");
   FUNC_1(1);
  }
  VAR_21 = VAR_6;
  VAR_18 = FUNC_8(VAR_17, VAR_5, VAR_6,
      VAR_13, ((void*)0));
  if (VAR_18) {
   VAR_21 = VAR_0;
   VAR_18 = FUNC_8(VAR_17, VAR_5, VAR_0,
         VAR_14, ((void*)0));
  }
 } else {
  VAR_21 = VAR_6;
  VAR_18 = FUNC_7(VAR_13,
      VAR_5, VAR_6, "udp");
  if (VAR_18) {
   VAR_21 = VAR_0;
   VAR_18 = FUNC_7(VAR_14,
     VAR_5, VAR_0, "udp");

  }
 }
 if (!VAR_18) {
  FUNC_11(VAR_3,
      "unable to register (RQUOTAPROG, %s, %s)",
         VAR_21 == VAR_6 ? "RQUOTAVERS" : "EXT_RQUOTAVERS",
         VAR_12 ? "(inetd)" : "udp");
  FUNC_1(1);
 }

 FUNC_9();
 FUNC_11(VAR_3, "svc_run returned");
 FUNC_1(1);
}
