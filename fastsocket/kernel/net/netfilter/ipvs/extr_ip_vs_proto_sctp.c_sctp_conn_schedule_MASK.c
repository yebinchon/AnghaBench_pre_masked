
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int daddr; int protocol; scalar_t__ len; } ;
struct ip_vs_conn {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; int dest; } ;
typedef TYPE_1__ sctp_sctphdr_t ;
typedef TYPE_1__ sctp_chunkhdr_t ;
typedef int _sctph ;
typedef int _schunkh ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,struct ip_vs_iphdr*) ;
 int FUNC_1 (struct ip_vs_service*,struct sk_buff*,struct ip_vs_protocol*) ;
 struct ip_vs_conn* FUNC_2 (struct ip_vs_service*,struct sk_buff*) ;
 struct ip_vs_service* FUNC_3 (int,int ,int ,int *,int ) ;
 int FUNC_4 (struct ip_vs_service*) ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__* FUNC_6 (struct sk_buff*,scalar_t__,int,TYPE_1__*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_8(int VAR_2, struct sk_buff *VAR_3, struct ip_vs_protocol *VAR_4,
     int *VAR_5, struct ip_vs_conn **VAR_6)
{
 struct ip_vs_service *VAR_7;
 sctp_chunkhdr_t VAR_8, *VAR_9;
 sctp_sctphdr_t *VAR_10, VAR_11;
 struct ip_vs_iphdr VAR_12;

 FUNC_0(VAR_2, FUNC_7(VAR_3), &VAR_12);

 VAR_10 = FUNC_6(VAR_3, VAR_12.len, sizeof(VAR_11), &VAR_11);
 if (VAR_10 == ((void*)0))
  return 0;

 VAR_9 = FUNC_6(VAR_3, VAR_12.len + sizeof(sctp_sctphdr_t),
     sizeof(VAR_8), &VAR_8);
 if (VAR_9 == ((void*)0))
  return 0;

 if ((VAR_9->type == VAR_1) &&
     (VAR_7 = FUNC_3(VAR_2, VAR_3->mark, VAR_12.protocol,
         &VAR_12.daddr, VAR_10->dest))) {
  if (FUNC_5()) {




   FUNC_4(VAR_7);
   *VAR_5 = VAR_0;
   return 0;
  }




  *VAR_6 = FUNC_2(VAR_7, VAR_3);
  if (!*VAR_6) {
   *VAR_5 = FUNC_1(VAR_7, VAR_3, VAR_4);
   return 0;
  }
  FUNC_4(VAR_7);
 }

 return 1;
}
