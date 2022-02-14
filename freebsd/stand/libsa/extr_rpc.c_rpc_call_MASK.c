
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct auth_info {void* authlen; void* authtype; } ;
struct TYPE_3__ {void* rok_status; struct auth_info rok_auth; } ;
struct TYPE_4__ {TYPE_1__ rpu_rok; } ;
struct rpc_reply {TYPE_2__ rp_u; } ;
struct rpc_call {void* rp_proc; void* rp_vers; void* rp_prog; void* rp_rpcvers; void* rp_direction; void* rp_xid; } ;
struct iodesc {int destport; } ;
struct auth_unix {int dummy; } ;
typedef int ssize_t ;
typedef int n_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,...) ;
 int VAR_7 ;
 int FUNC_6 (struct iodesc*,int,int) ;
 int VAR_8 ;
 int FUNC_7 (struct iodesc*,int ,char*,int,int ,void**,void**,int *) ;
 int VAR_9 ;

ssize_t
FUNC_8(struct iodesc *VAR_10, n_long VAR_11, n_long VAR_12, n_long VAR_13,
 void *VAR_14, size_t VAR_15, void **VAR_16, void **VAR_17)
{
 ssize_t VAR_18, VAR_19;
 struct auth_info *VAR_20;
 struct rpc_call *VAR_21;
 struct rpc_reply *VAR_22;
 char *VAR_23, *VAR_24;
 void *VAR_25;
 n_long VAR_26;
 int VAR_27;







 VAR_27 = FUNC_6(VAR_10, VAR_11, VAR_12);
 if (VAR_27 == -1)
  return (-1);

 VAR_10->destport = FUNC_3(VAR_27);





 VAR_23 = VAR_14;
 VAR_24 = (char *)VAR_14 + VAR_15;


 VAR_23 -= sizeof(*VAR_20);
 VAR_20 = (struct auth_info *)VAR_23;
 VAR_20->authtype = FUNC_2(VAR_1);
 VAR_20->authlen = 0;


 VAR_23 -= sizeof(struct auth_unix);
 FUNC_0(VAR_23, sizeof(struct auth_unix));
 VAR_23 -= sizeof(*VAR_20);
 VAR_20 = (struct auth_info *)VAR_23;
 VAR_20->authtype = FUNC_2(VAR_2);
 VAR_20->authlen = FUNC_2(sizeof(struct auth_unix));


 VAR_23 -= sizeof(*VAR_21);
 VAR_21 = (struct rpc_call *)VAR_23;
 VAR_8++;
 VAR_21->rp_xid = FUNC_2(VAR_8);
 VAR_21->rp_direction = FUNC_2(VAR_3);
 VAR_21->rp_rpcvers = FUNC_2(VAR_4);
 VAR_21->rp_prog = FUNC_2(VAR_11);
 VAR_21->rp_vers = FUNC_2(VAR_12);
 VAR_21->rp_proc = FUNC_2(VAR_13);

 VAR_25 = ((void*)0);
 VAR_18 = FUNC_7(VAR_10,
     VAR_9, VAR_23, VAR_24 - VAR_23,
     VAR_7, &VAR_25, (void **)&VAR_22, ((void*)0));





 if (VAR_18 == -1)
  return (-1);

 if (VAR_18 <= sizeof(*VAR_22)) {
  VAR_6 = VAR_0;
  FUNC_1(VAR_25);
  return (-1);
 }





 VAR_20 = &VAR_22->rp_u.rpu_rok.rok_auth;
 VAR_26 = FUNC_4(VAR_20->authlen);
 if (VAR_26 != 0) {




  VAR_6 = VAR_0;
  FUNC_1(VAR_25);
  return (-1);
 }
 VAR_26 = FUNC_4(VAR_22->rp_u.rpu_rok.rok_status);
 if (VAR_26 != 0) {
  FUNC_5("callrpc: error = %ld\n", (long)VAR_26);
  VAR_6 = VAR_0;
  FUNC_1(VAR_25);
  return (-1);
 }

 VAR_19 = VAR_18 - sizeof(*VAR_22);
 *VAR_16 = (void *)((uintptr_t)VAR_22 + sizeof(*VAR_22));
 *VAR_17 = VAR_25;
 return (VAR_19);
}
