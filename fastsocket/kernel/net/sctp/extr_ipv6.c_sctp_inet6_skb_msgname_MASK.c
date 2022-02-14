
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct TYPE_8__ {int * s6_addr32; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_3__ sin6_addr; int sin6_port; } ;
struct sk_buff {int sk; } ;
struct sctphdr {int source; } ;
struct sctp_ulpevent {int iif; } ;
struct TYPE_9__ {int version; int saddr; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {scalar_t__ v4mapped; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct sctphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int*) ;
 TYPE_1__* FUNC_6 (int ) ;
 struct sctp_ulpevent* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (union sctp_addr*) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_1, char *VAR_2,
       int *VAR_3)
{
 struct sctphdr *VAR_4;
 struct sockaddr_in6 *VAR_5;

 if (VAR_2) {
  FUNC_5(VAR_2, VAR_3);
  VAR_5 = (struct sockaddr_in6 *)VAR_2;
  VAR_4 = FUNC_4(VAR_1);
  VAR_5->sin6_port = VAR_4->source;


  if (FUNC_6(VAR_1->sk)->v4mapped &&
      FUNC_0(VAR_1)->version == 4) {
   FUNC_8((union sctp_addr *)VAR_5);
   VAR_5->sin6_addr.s6_addr32[3] = FUNC_0(VAR_1)->saddr;
   return;
  }


  FUNC_1(&VAR_5->sin6_addr, &FUNC_3(VAR_1)->saddr);
  if (FUNC_2(&VAR_5->sin6_addr) & VAR_0) {
   struct sctp_ulpevent *VAR_6 = FUNC_7(VAR_1);
   VAR_5->sin6_scope_id = VAR_6->iif;
  }
 }
}
