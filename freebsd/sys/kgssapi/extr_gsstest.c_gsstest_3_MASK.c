
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct thread {int td_ucred; } ;
struct TYPE_11__ {int s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int service ;
typedef scalar_t__ rpc_gss_service_t ;
struct TYPE_12__ {char const* actual_mechanism; int minor_status; int major_status; } ;
typedef TYPE_2__ rpc_gss_options_ret_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_14__ {int td_ucred; } ;
struct TYPE_13__ {int * cl_auth; } ;
typedef TYPE_3__ CLIENT ;
typedef int AUTH ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int,int ,char*,int ,char*,struct timeval) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_3__* FUNC_5 (struct sockaddr*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char const*,int *) ;
 int * FUNC_10 (TYPE_3__*,int ,char*,char*,scalar_t__,int *,int *,TYPE_2__*) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (char*,...) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_13(struct thread *VAR_8)
{
 struct sockaddr_in VAR_9;
 char VAR_10[128];
 CLIENT *VAR_11;
 AUTH *VAR_12;
 rpc_gss_options_ret_t VAR_13;
 enum clnt_stat VAR_14;
 struct timeval VAR_15;
 rpc_gss_service_t VAR_16;
 int VAR_17;

 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_addr.s_addr = FUNC_6(VAR_2);
 VAR_9.sin_port = 0;

 VAR_11 = FUNC_5((struct sockaddr *) &VAR_9, 123456, 1);
 if (!VAR_11) {
  FUNC_12("Can't connect to service\n");
  return(1);
 }

 FUNC_7(VAR_10, "host@", 5);
 FUNC_4(VAR_8->td_ucred, VAR_10 + 5, sizeof(VAR_10) - 5);

 VAR_12 = FUNC_10(VAR_11, VAR_4->td_ucred,
     VAR_10, "kerberosv5", VAR_6,
     ((void*)0), ((void*)0), &VAR_13);
 if (!VAR_12) {
  gss_OID VAR_18;
  FUNC_12("Can't authorize to service (mech=%s)\n",
   VAR_13.actual_mechanism);
  VAR_18 = VAR_1;
  FUNC_9(VAR_13.actual_mechanism, &VAR_18);
  FUNC_8(VAR_18, VAR_13.major_status,
      VAR_13.minor_status);
  FUNC_2(VAR_11);
  return (1);
 }

 for (VAR_16 = VAR_5; VAR_16 <= VAR_6; VAR_16++) {
  const char *VAR_19[] = {
   "rpc_gss_svc_default",
   "rpc_gss_svc_none",
   "rpc_gss_svc_integrity",
   "rpc_gss_svc_privacy"
  };
  int VAR_20;

  FUNC_11(VAR_12, VAR_16, ((void*)0));

  VAR_11->cl_auth = VAR_12;
  VAR_15.tv_sec = 5;
  VAR_15.tv_usec = 0;
  for (VAR_17 = 42; VAR_17 < 142; VAR_17++) {
   VAR_20 = VAR_17;
   VAR_14 = FUNC_1(VAR_11, 1,
       (xdrproc_t) VAR_7, (char *) &VAR_20,
       (xdrproc_t) VAR_7, (char *) &VAR_20, VAR_15);
   if (VAR_14 == VAR_3) {
    if (VAR_20 != VAR_17 + 100)
     FUNC_12("unexpected reply %d\n", VAR_20);
   } else {
    FUNC_12("call failed, stat=%d\n", (int) VAR_14);
    break;
   }
  }
  if (VAR_17 == 142)
   FUNC_12("call succeeded with %s\n", VAR_19[VAR_16]);
 }

 FUNC_0(VAR_12);
 FUNC_3(VAR_11);

 return (0);
}
