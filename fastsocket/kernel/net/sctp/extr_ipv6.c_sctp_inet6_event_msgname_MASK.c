
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int * s6_addr32; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_7__ sin6_addr; int sin6_port; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_13__ {TYPE_3__ sin_addr; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
union sctp_addr {struct sockaddr_in6 v6; TYPE_4__ v4; TYPE_2__ sa; } ;
struct sctp_ulpevent {struct sctp_association* asoc; } ;
struct TYPE_14__ {union sctp_addr primary_addr; int port; } ;
struct TYPE_10__ {int sk; } ;
struct sctp_association {TYPE_5__ peer; TYPE_1__ base; } ;
struct TYPE_15__ {scalar_t__ v4mapped; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (char*,int*) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (union sctp_addr*) ;

__attribute__((used)) static void FUNC_6(struct sctp_ulpevent *VAR_2,
         char *VAR_3, int *VAR_4)
{
 struct sockaddr_in6 *VAR_5, *VAR_6;

 if (VAR_3) {
  union sctp_addr *VAR_7;
  struct sctp_association *VAR_8;

  VAR_8 = VAR_2->asoc;
  FUNC_3(VAR_3, VAR_4);
  VAR_5 = (struct sockaddr_in6 *)VAR_3;
  VAR_5->sin6_port = FUNC_0(VAR_8->peer.port);
  VAR_7 = &VAR_8->peer.primary_addr;






  if (FUNC_4(VAR_8->base.sk)->v4mapped &&
      VAR_0 == VAR_7->sa.sa_family) {
   FUNC_5((union sctp_addr *)VAR_5);
   VAR_5->sin6_addr.s6_addr32[3] =
    VAR_7->v4.sin_addr.s_addr;
   return;
  }

  VAR_6 = &VAR_8->peer.primary_addr.v6;
  FUNC_1(&VAR_5->sin6_addr, &VAR_6->sin6_addr);
  if (FUNC_2(&VAR_5->sin6_addr) & VAR_1)
   VAR_5->sin6_scope_id = VAR_6->sin6_scope_id;
 }
}
