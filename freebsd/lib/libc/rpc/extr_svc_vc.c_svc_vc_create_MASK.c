
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ u_int ;
struct sockaddr_storage {scalar_t__ ss_len; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int maxlen; } ;
struct TYPE_3__ {int * buf; scalar_t__ len; scalar_t__ maxlen; } ;
struct cf_rendezvous {int xp_fd; TYPE_2__ xp_rtaddr; TYPE_1__ xp_ltaddr; scalar_t__ xp_port; int xp_verf; struct cf_rendezvous* xp_p1; int maxrec; void* recvsize; void* sendsize; } ;
struct __rpc_sockinfo {int si_proto; int si_af; } ;
typedef int socklen_t ;
typedef struct cf_rendezvous SVCXPRT ;


 int FUNC_0 (int,struct __rpc_sockinfo*) ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int VAR_1 ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (struct cf_rendezvous*,int) ;
 int FUNC_5 (int *,struct sockaddr_storage*,size_t) ;
 int FUNC_6 (struct cf_rendezvous*) ;
 struct cf_rendezvous* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct cf_rendezvous*) ;

SVCXPRT *
FUNC_10(int VAR_2, u_int VAR_3, u_int VAR_4)
{
 SVCXPRT *VAR_5 = ((void*)0);
 struct cf_rendezvous *VAR_6 = ((void*)0);
 struct __rpc_sockinfo VAR_7;
 struct sockaddr_storage VAR_8;
 socklen_t VAR_9;

 if (!FUNC_0(VAR_2, &VAR_7))
  return ((void*)0);

 VAR_6 = FUNC_3(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_8("svc_vc_create: out of memory");
  goto cleanup_svc_vc_create;
 }
 VAR_6->sendsize = FUNC_1(VAR_7.si_af, VAR_7.si_proto, (int)VAR_3);
 VAR_6->recvsize = FUNC_1(VAR_7.si_af, VAR_7.si_proto, (int)VAR_4);
 VAR_6->maxrec = VAR_0;
 VAR_5 = FUNC_7();
 if (VAR_5 == ((void*)0)) {
  FUNC_8("svc_vc_create: out of memory");
  goto cleanup_svc_vc_create;
 }
 VAR_5->xp_p1 = VAR_6;
 VAR_5->xp_verf = VAR_1;
 FUNC_6(VAR_5);
 VAR_5->xp_port = (u_short)-1;
 VAR_5->xp_fd = VAR_2;

 VAR_9 = sizeof (struct sockaddr_storage);
 if (FUNC_2(VAR_2, (struct sockaddr *)(void *)&VAR_8, &VAR_9) < 0) {
  FUNC_8("svc_vc_create: could not retrieve local addr");
  goto cleanup_svc_vc_create;
 }

 VAR_5->xp_ltaddr.maxlen = VAR_5->xp_ltaddr.len = VAR_8.ss_len;
 VAR_5->xp_ltaddr.buf = FUNC_3((size_t)VAR_8.ss_len);
 if (VAR_5->xp_ltaddr.buf == ((void*)0)) {
  FUNC_8("svc_vc_create: no mem for local addr");
  goto cleanup_svc_vc_create;
 }
 FUNC_5(VAR_5->xp_ltaddr.buf, &VAR_8, (size_t)VAR_8.ss_len);

 VAR_5->xp_rtaddr.maxlen = sizeof (struct sockaddr_storage);
 FUNC_9(VAR_5);
 return (VAR_5);
cleanup_svc_vc_create:
 if (VAR_5)
  FUNC_4(VAR_5, sizeof(*VAR_5));
 if (VAR_6 != ((void*)0))
  FUNC_4(VAR_6, sizeof(*VAR_6));
 return (((void*)0));
}
