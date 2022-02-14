
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_storage {scalar_t__ ss_family; scalar_t__ ss_len; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_10__ {int maxlen; } ;
struct TYPE_12__ {TYPE_3__ xp_ltaddr; } ;
struct TYPE_9__ {int * buf; scalar_t__ len; scalar_t__ maxlen; } ;
struct TYPE_8__ {int * buf; scalar_t__ len; scalar_t__ maxlen; } ;
struct TYPE_11__ {int xp_addrlen; TYPE_2__ xp_ltaddr; TYPE_1__ xp_rtaddr; struct sockaddr_in xp_raddr; } ;
typedef TYPE_4__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int,int ,int ) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct sockaddr_storage*,size_t) ;
 TYPE_6__* VAR_2 ;
 int FUNC_7 (char*) ;

SVCXPRT *
FUNC_8(int VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct sockaddr_storage VAR_6;
 socklen_t VAR_7;
 SVCXPRT *VAR_8;

 FUNC_2(VAR_3 != -1);

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_7 = sizeof (struct sockaddr_storage);
 if (FUNC_1(VAR_3, (struct sockaddr *)(void *)&VAR_6, &VAR_7) < 0) {
  FUNC_7("svc_fd_create: could not retrieve local addr");
  goto freedata;
 }
 VAR_8->xp_ltaddr.maxlen = VAR_8->xp_ltaddr.len = VAR_6.ss_len;
 VAR_8->xp_ltaddr.buf = FUNC_4((size_t)VAR_6.ss_len);
 if (VAR_8->xp_ltaddr.buf == ((void*)0)) {
  FUNC_7("svc_fd_create: no mem for local addr");
  goto freedata;
 }
 FUNC_6(VAR_8->xp_ltaddr.buf, &VAR_6, (size_t)VAR_6.ss_len);

 VAR_7 = sizeof (struct sockaddr_storage);
 if (FUNC_0(VAR_3, (struct sockaddr *)(void *)&VAR_6, &VAR_7) < 0) {
  FUNC_7("svc_fd_create: could not retrieve remote addr");
  goto freedata;
 }
 VAR_8->xp_rtaddr.maxlen = VAR_8->xp_rtaddr.len = VAR_6.ss_len;
 VAR_8->xp_rtaddr.buf = FUNC_4((size_t)VAR_6.ss_len);
 if (VAR_8->xp_rtaddr.buf == ((void*)0)) {
  FUNC_7("svc_fd_create: no mem for local addr");
  goto freedata;
 }
 FUNC_6(VAR_8->xp_rtaddr.buf, &VAR_6, (size_t)VAR_6.ss_len);







 return VAR_8;

freedata:
 if (VAR_8->xp_ltaddr.buf != ((void*)0))
  FUNC_5(VAR_8->xp_ltaddr.buf, VAR_2->xp_ltaddr.maxlen);

 return ((void*)0);
}
