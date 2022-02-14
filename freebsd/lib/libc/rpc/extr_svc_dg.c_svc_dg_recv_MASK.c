
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_11__ {int len; scalar_t__ buf; } ;
struct TYPE_13__ {int x_op; } ;
struct svc_dg_data {int * su_cache; int su_xid; TYPE_1__ su_srcaddr; int su_iosz; TYPE_3__ su_xdrs; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rpc_msg {int rm_xid; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int bool_t ;
typedef TYPE_3__ XDR ;
struct TYPE_12__ {int len; scalar_t__ buf; } ;
struct TYPE_14__ {int xp_addrlen; int xp_fd; TYPE_2__ xp_rtaddr; struct sockaddr_in xp_raddr; } ;
typedef TYPE_4__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,char*,size_t,int ,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct rpc_msg*,char**,size_t*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,struct sockaddr_storage*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 struct svc_dg_data* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ,int ,struct sockaddr*,int*,struct sockaddr*,int *) ;
 int FUNC_9 (TYPE_3__*,struct rpc_msg*) ;

__attribute__((used)) static bool_t
FUNC_10(SVCXPRT *VAR_6, struct rpc_msg *VAR_7)
{
 struct svc_dg_data *VAR_8 = FUNC_7(VAR_6);
 XDR *VAR_9 = &(VAR_8->su_xdrs);
 char *VAR_10;
 struct sockaddr_storage VAR_11;
 socklen_t VAR_12;
 size_t VAR_13;
 ssize_t VAR_14;

again:
 VAR_12 = sizeof (struct sockaddr_storage);
 VAR_14 = FUNC_8(VAR_6->xp_fd, FUNC_6(VAR_6), VAR_8->su_iosz,
     (struct sockaddr *)(void *)&VAR_11, &VAR_12,
     (struct sockaddr *)VAR_8->su_srcaddr.buf, &VAR_8->su_srcaddr.len);
 if (VAR_14 == -1 && VAR_5 == VAR_1)
  goto again;
 if (VAR_14 == -1 || (VAR_14 < (ssize_t)(4 * sizeof (u_int32_t))))
  return (VAR_2);
 if (VAR_6->xp_rtaddr.len < VAR_12) {
  if (VAR_6->xp_rtaddr.len != 0)
   FUNC_4(VAR_6->xp_rtaddr.buf, VAR_6->xp_rtaddr.len);
  VAR_6->xp_rtaddr.buf = FUNC_3(VAR_12);
  VAR_6->xp_rtaddr.len = VAR_12;
 }
 FUNC_5(VAR_6->xp_rtaddr.buf, &VAR_11, VAR_12);






 VAR_9->x_op = VAR_4;
 FUNC_0(VAR_9, 0);
 if (! FUNC_9(VAR_9, VAR_7)) {
  return (VAR_2);
 }
 VAR_8->su_xid = VAR_7->rm_xid;
 if (VAR_8->su_cache != ((void*)0)) {
  if (FUNC_2(VAR_6, VAR_7, &VAR_10, &VAR_13)) {
   (void)FUNC_1(VAR_6->xp_fd, VAR_10, VAR_13, 0,
       (struct sockaddr *)(void *)&VAR_11, VAR_12);
   return (VAR_2);
  }
 }
 return (VAR_3);
}
