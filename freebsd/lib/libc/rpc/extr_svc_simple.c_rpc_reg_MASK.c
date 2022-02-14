
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* xdrproc_t ;
typedef scalar_t__ u_int ;
struct proglst {char* p_netid; char* p_xdrbuf; scalar_t__ p_versnum; char* (* p_progname ) (char*) ;struct proglst* p_nxt; scalar_t__ p_recvsz; TYPE_1__* p_transp; void* p_outproc; void* p_inproc; scalar_t__ p_procnum; scalar_t__ p_prognum; } ;
struct netconfig {char* nc_netid; } ;
struct __rpc_sockinfo {int si_proto; int si_af; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef scalar_t__ rpcproc_t ;
struct TYPE_5__ {int xp_fd; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,struct __rpc_sockinfo*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 struct netconfig* FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct proglst* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (scalar_t__,scalar_t__,struct netconfig*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,scalar_t__,int ,struct netconfig*) ;
 TYPE_1__* FUNC_14 (int ,struct netconfig*,int *,int ,int ) ;
 int VAR_12 ;
 int FUNC_15 (char*,int ,...) ;

int
FUNC_16(rpcprog_t VAR_13, rpcvers_t VAR_14, rpcproc_t VAR_15,
    char *(*VAR_16)(char *), xdrproc_t VAR_17, xdrproc_t VAR_18,
    char *VAR_19)
{
 struct netconfig *VAR_20;
 int VAR_21 = VAR_0;
 void *VAR_22;


 if (VAR_15 == VAR_1) {
  FUNC_15("%s can't reassign procedure number %u", VAR_11,
   VAR_1);
  return (-1);
 }

 if (VAR_19 == ((void*)0))
  VAR_19 = "netpath";
 if ((VAR_22 = FUNC_5(VAR_19)) == ((void*)0)) {
  FUNC_15(VAR_10, VAR_11, VAR_5);
  return (-1);
 }

 FUNC_8(&VAR_9);
 while ((VAR_20 = FUNC_4(VAR_22)) != ((void*)0)) {
  struct proglst *VAR_23;
  SVCXPRT *VAR_24;
  int VAR_25;
  u_int VAR_26;
  char *VAR_27;
  char *VAR_28;

  VAR_25 = VAR_0;
  VAR_24 = ((void*)0);
  VAR_26 = 0;
  VAR_27 = VAR_28 = ((void*)0);
  for (VAR_23 = VAR_8; VAR_23; VAR_23 = VAR_23->p_nxt) {
   if (FUNC_11(VAR_23->p_netid, VAR_20->nc_netid) == 0) {
    VAR_24 = VAR_23->p_transp;
    VAR_27 = VAR_23->p_xdrbuf;
    VAR_26 = VAR_23->p_recvsz;
    VAR_28 = VAR_23->p_netid;
    break;
   }
  }

  if (VAR_24 == ((void*)0)) {
   struct __rpc_sockinfo VAR_29;

   VAR_24 = FUNC_14(VAR_2, VAR_20, ((void*)0), 0, 0);
   if (VAR_24 == ((void*)0))
    continue;
   if (!FUNC_2(VAR_24->xp_fd, &VAR_29)) {
    FUNC_15(VAR_10, VAR_11, VAR_6);
    FUNC_0(VAR_24);
    continue;
   }
   VAR_26 = FUNC_3(VAR_29.si_af, VAR_29.si_proto, 0);
   if (VAR_26 == 0) {
    FUNC_15(VAR_10, VAR_11, VAR_7);
    FUNC_0(VAR_24);
    continue;
   }
   if (((VAR_27 = FUNC_7((unsigned)VAR_26)) == ((void*)0)) ||
    ((VAR_28 = FUNC_12(VAR_20->nc_netid)) == ((void*)0))) {
    FUNC_15(VAR_10, VAR_11, VAR_4);
    FUNC_6(VAR_27);
    FUNC_6(VAR_28);
    FUNC_0(VAR_24);
    break;
   }
   VAR_25 = VAR_3;
  }




  for (VAR_23 = VAR_8; VAR_23; VAR_23 = VAR_23->p_nxt)
   if ((VAR_23->p_prognum == VAR_13) &&
    (VAR_23->p_versnum == VAR_14) &&
    (FUNC_11(VAR_23->p_netid, VAR_28) == 0))
    break;
  if (VAR_23 == ((void*)0)) {
   (void) FUNC_10(VAR_13, VAR_14, VAR_20);
  } else {

   VAR_20 = ((void*)0);
  }

  if (!FUNC_13(VAR_24, VAR_13, VAR_14, VAR_12, VAR_20)) {
   FUNC_15("%s couldn't register prog %u vers %u for %s",
    VAR_11, (unsigned)VAR_13,
    (unsigned)VAR_14, VAR_28);
   if (VAR_25) {
    FUNC_0(VAR_24);
    FUNC_6(VAR_27);
    FUNC_6(VAR_28);
   }
   continue;
  }

  VAR_23 = FUNC_7(sizeof (struct proglst));
  if (VAR_23 == ((void*)0)) {
   FUNC_15(VAR_10, VAR_11, VAR_4);
   if (VAR_25) {
    FUNC_0(VAR_24);
    FUNC_6(VAR_27);
    FUNC_6(VAR_28);
   }
   break;
  }
  VAR_23->p_progname = VAR_16;
  VAR_23->p_prognum = VAR_13;
  VAR_23->p_versnum = VAR_14;
  VAR_23->p_procnum = VAR_15;
  VAR_23->p_inproc = VAR_17;
  VAR_23->p_outproc = VAR_18;
  VAR_23->p_transp = VAR_24;
  VAR_23->p_xdrbuf = VAR_27;
  VAR_23->p_recvsz = VAR_26;
  VAR_23->p_netid = VAR_28;
  VAR_23->p_nxt = VAR_8;
  VAR_8 = VAR_23;
  VAR_21 = VAR_3;
 }
 FUNC_1(VAR_22);
 FUNC_9(&VAR_9);

 if (VAR_21 == VAR_0) {
  FUNC_15("%s can't find suitable transport for %s",
   VAR_11, VAR_19);
  return (-1);
 }
 return (0);
}
