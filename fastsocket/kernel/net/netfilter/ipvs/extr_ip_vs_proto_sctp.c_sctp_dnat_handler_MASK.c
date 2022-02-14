
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_protocol {int (* csum_check ) (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;} ;
struct ip_vs_conn {scalar_t__ af; int dport; int * app; } ;
struct TYPE_3__ {int dest; } ;
typedef TYPE_1__ sctp_sctphdr_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ip_vs_conn*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,TYPE_1__*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_1,
    struct ip_vs_protocol *VAR_2, struct ip_vs_conn *VAR_3)
{
 sctp_sctphdr_t *VAR_4;
 unsigned int VAR_5;






  VAR_5 = FUNC_0(VAR_1);


 if (!FUNC_3(VAR_1, VAR_5 + sizeof(*VAR_4)))
  return 0;

 if (FUNC_6(VAR_3->app != ((void*)0))) {

  if (VAR_2->csum_check && !VAR_2->csum_check(VAR_3->af, VAR_1, VAR_2))
   return 0;


  if (!FUNC_1(VAR_3, VAR_1))
   return 0;
 }

 VAR_4 = (void *) FUNC_4(VAR_1) + VAR_5;
 VAR_4->dest = VAR_3->dport;

 FUNC_2(VAR_1, VAR_4, VAR_5);

 return 1;
}
