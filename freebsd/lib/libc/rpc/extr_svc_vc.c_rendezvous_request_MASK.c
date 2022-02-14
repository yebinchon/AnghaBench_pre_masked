
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; scalar_t__ ss_len; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rpc_msg {int dummy; } ;
struct cf_rendezvous {scalar_t__ recvsize; scalar_t__ maxrec; int sendsize; } ;
struct cf_conn {scalar_t__ recvsize; scalar_t__ maxrec; int last_recv_time; int nonblock; int xdrs; int sendsize; } ;
struct __rpc_sockinfo {scalar_t__ si_proto; } ;
typedef size_t socklen_t ;
typedef int len ;
typedef int fd_set ;
typedef int bool_t ;
struct TYPE_7__ {int * buf; scalar_t__ len; scalar_t__ maxlen; } ;
struct TYPE_6__ {size_t len; int * buf; } ;
struct TYPE_8__ {int xp_addrlen; TYPE_2__ xp_ltaddr; scalar_t__ xp_p1; TYPE_1__ xp_rtaddr; struct sockaddr_in xp_raddr; int xp_fd; } ;
typedef TYPE_3__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int,struct __rpc_sockinfo*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,struct sockaddr*,size_t*) ;
 int FUNC_4 (int,int ,int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,size_t*) ;
 int FUNC_6 (int,scalar_t__,int ,size_t*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (int *,int *) ;
 TYPE_3__* FUNC_9 (int,int ,scalar_t__) ;
 void* FUNC_10 (size_t) ;
 int FUNC_11 (int *,struct sockaddr_storage*,size_t) ;
 int VAR_13 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static bool_t
FUNC_13(SVCXPRT *VAR_14, struct rpc_msg *VAR_15)
{
 int VAR_16, VAR_17;
 struct cf_rendezvous *VAR_18;
 struct cf_conn *VAR_19;
 struct sockaddr_storage VAR_20, VAR_21;
 socklen_t VAR_22, VAR_23;
 struct __rpc_sockinfo VAR_24;
 SVCXPRT *VAR_25;
 fd_set VAR_26;

 FUNC_7(VAR_14 != ((void*)0));
 FUNC_7(VAR_15 != ((void*)0));

 VAR_18 = (struct cf_rendezvous *)VAR_14->xp_p1;
again:
 VAR_22 = sizeof VAR_20;
 if ((VAR_16 = FUNC_3(VAR_14->xp_fd, (struct sockaddr *)(void *)&VAR_20,
     &VAR_22)) < 0) {
  if (VAR_12 == VAR_2)
   goto again;




  if (VAR_12 == VAR_3 || VAR_12 == VAR_4) {
   VAR_26 = VAR_13;
   FUNC_1(&VAR_26, 0, VAR_5);
   goto again;
  }
  return (VAR_5);
 }



 VAR_25 = FUNC_9(VAR_16, VAR_18->sendsize, VAR_18->recvsize);
 VAR_25->xp_rtaddr.buf = FUNC_10(VAR_22);
 if (VAR_25->xp_rtaddr.buf == ((void*)0))
  return (VAR_5);
 FUNC_11(VAR_25->xp_rtaddr.buf, &VAR_20, VAR_22);
 VAR_25->xp_rtaddr.len = VAR_22;






 if (FUNC_0(VAR_16, &VAR_24) && VAR_24.si_proto == VAR_8) {
  VAR_22 = 1;

  FUNC_6(VAR_16, VAR_8, VAR_10, &VAR_22, sizeof (VAR_22));
 }

 VAR_19 = (struct cf_conn *)VAR_25->xp_p1;

 VAR_19->recvsize = VAR_18->recvsize;
 VAR_19->sendsize = VAR_18->sendsize;
 VAR_19->maxrec = VAR_18->maxrec;

 if (VAR_19->maxrec != 0) {
  VAR_17 = FUNC_4(VAR_16, VAR_6, 0);
  if (VAR_17 == -1)
   return (VAR_5);
  if (FUNC_4(VAR_16, VAR_7, VAR_17 | VAR_9) == -1)
   return (VAR_5);
  if (VAR_19->recvsize > VAR_19->maxrec)
   VAR_19->recvsize = VAR_19->maxrec;
  VAR_19->nonblock = VAR_11;
  FUNC_2(&VAR_19->xdrs, VAR_19->maxrec);
 } else
  VAR_19->nonblock = VAR_5;
 VAR_23 = sizeof(struct sockaddr_storage);
 if(FUNC_5(VAR_16, (struct sockaddr *)(void *)&VAR_21, &VAR_23) < 0) {
  FUNC_12("svc_vc_create: could not retrieve local addr");
  VAR_25->xp_ltaddr.maxlen = VAR_25->xp_ltaddr.len = 0;
 } else {
  VAR_25->xp_ltaddr.maxlen = VAR_25->xp_ltaddr.len = VAR_21.ss_len;
  VAR_25->xp_ltaddr.buf = FUNC_10((size_t)VAR_21.ss_len);
  if (VAR_25->xp_ltaddr.buf == ((void*)0)) {
   FUNC_12("svc_vc_create: no mem for local addr");
   VAR_25->xp_ltaddr.maxlen = VAR_25->xp_ltaddr.len = 0;
  } else {
   FUNC_11(VAR_25->xp_ltaddr.buf, &VAR_21, (size_t)VAR_21.ss_len);
  }
 }

 FUNC_8(&VAR_19->last_recv_time, ((void*)0));

 return (VAR_5);
}
