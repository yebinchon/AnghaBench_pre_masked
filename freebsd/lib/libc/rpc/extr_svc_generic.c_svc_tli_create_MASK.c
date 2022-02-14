
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_9__ {scalar_t__ buf; } ;
struct t_bind {scalar_t__ qlen; TYPE_1__ addr; } ;
struct sockaddr_storage {scalar_t__ ss_len; int ss_family; } ;
struct sockaddr {int dummy; } ;
struct netconfig {int nc_device; int nc_netid; int nc_protofmly; } ;
struct __rpc_sockinfo {int si_socktype; scalar_t__ si_alen; int si_af; } ;
typedef int socklen_t ;
typedef scalar_t__ bool_t ;
struct TYPE_10__ {int xp_fd; void* xp_tp; void* xp_netid; int xp_type; } ;
typedef TYPE_2__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct __rpc_sockinfo*) ;
 int FUNC_2 (struct netconfig const*) ;
 int FUNC_3 (struct netconfig const*,struct __rpc_sockinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int,struct sockaddr*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,struct sockaddr*,int*) ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (int,int *) ;
 int FUNC_12 (struct sockaddr_storage*,int ,int) ;
 int FUNC_13 (int ,char*) ;
 void* FUNC_14 (int ) ;
 TYPE_2__* FUNC_15 (int,int ,int ) ;
 TYPE_2__* FUNC_16 (int,int ,int ) ;
 TYPE_2__* FUNC_17 (int,int ,int ) ;
 int FUNC_18 (char*,...) ;

SVCXPRT *
FUNC_19(int VAR_4, const struct netconfig *VAR_5,
    const struct t_bind *VAR_6, u_int VAR_7, u_int VAR_8)
{
 SVCXPRT *VAR_9 = ((void*)0);
 bool_t VAR_10 = VAR_0;
 struct __rpc_sockinfo VAR_11;
 struct sockaddr_storage VAR_12;
 socklen_t VAR_13;

 if (VAR_4 == VAR_1) {
  if (VAR_5 == ((void*)0)) {
   FUNC_18("svc_tli_create: invalid netconfig");
   return (((void*)0));
  }
  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4 == -1) {
   FUNC_18(
       "svc_tli_create: could not open connection for %s",
     VAR_5->nc_netid);
   return (((void*)0));
  }
  FUNC_3(VAR_5, &VAR_11);
  VAR_10 = VAR_3;
 } else {



  if (!FUNC_1(VAR_4, &VAR_11)) {
   FUNC_18(
  "svc_tli_create: could not get transport information");
   return (((void*)0));
  }
 }




 if (VAR_10 || !FUNC_4(VAR_4)) {
  if (VAR_6 == ((void*)0)) {
   if (FUNC_11(VAR_4, ((void*)0)) < 0) {
    FUNC_12(&VAR_12, 0, sizeof VAR_12);
    VAR_12.ss_family = VAR_11.si_af;
    VAR_12.ss_len = VAR_11.si_alen;
    if (FUNC_7(VAR_4, (struct sockaddr *)(void *)&VAR_12,
        (socklen_t)VAR_11.si_alen) < 0) {
     FUNC_18(
   "svc_tli_create: could not bind to anonymous port");
     goto freedata;
    }
   }
   FUNC_10(VAR_4, VAR_2);
  } else {
   if (FUNC_7(VAR_4,
       (struct sockaddr *)VAR_6->addr.buf,
       (socklen_t)VAR_11.si_alen) < 0) {
    FUNC_18(
  "svc_tli_create: could not bind to requested address");
    goto freedata;
   }
   FUNC_10(VAR_4, (int)VAR_6->qlen);
  }

 }



 switch (VAR_11.si_socktype) {
  case 128:
   VAR_13 = sizeof VAR_12;
   if (FUNC_9(VAR_4, (struct sockaddr *)(void *)&VAR_12, &VAR_13)
       == 0) {

    VAR_9 = FUNC_16(VAR_4, VAR_7, VAR_8);
   } else
    VAR_9 = FUNC_17(VAR_4, VAR_7, VAR_8);
   if (!VAR_5 || !VAR_9)
    break;






   break;
  case 129:
   VAR_9 = FUNC_15(VAR_4, VAR_7, VAR_8);
   break;
  default:
   FUNC_18("svc_tli_create: bad service type");
   goto freedata;
 }

 if (VAR_9 == ((void*)0))




  goto freedata;


 VAR_9->xp_type = FUNC_5(VAR_11.si_socktype);

 if (VAR_5) {
  VAR_9->xp_netid = FUNC_14(VAR_5->nc_netid);
  VAR_9->xp_tp = FUNC_14(VAR_5->nc_device);
 }
 return (VAR_9);

freedata:
 if (VAR_10)
  (void)FUNC_8(VAR_4);
 if (VAR_9) {
  if (!VAR_10)
   VAR_9->xp_fd = VAR_1;
  FUNC_0(VAR_9);
 }
 return (((void*)0));
}
