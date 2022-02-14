
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ doff; scalar_t__ fin; scalar_t__ syn; scalar_t__ rst; int ack; scalar_t__ urg; scalar_t__ ece; scalar_t__ cwr; } ;
struct net_lro_desc {scalar_t__ tcp_rcv_tsval; } ;
struct iphdr {scalar_t__ ihl; int tot_len; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct iphdr*,struct tcphdr*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iphdr*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iphdr *VAR_6, struct tcphdr *VAR_7,
       int VAR_8, struct net_lro_desc *VAR_9)
{

 if (FUNC_6(VAR_6->tot_len) != VAR_8)
  return -1;

 if (FUNC_1(VAR_6, VAR_7) == 0)
  return -1;

 if (VAR_6->ihl != VAR_0)
  return -1;

 if (VAR_7->cwr || VAR_7->ece || VAR_7->urg || !VAR_7->ack
     || VAR_7->rst || VAR_7->syn || VAR_7->fin)
  return -1;

 if (FUNC_0(FUNC_4(VAR_6)))
  return -1;

 if (VAR_7->doff != VAR_1
     && VAR_7->doff != VAR_2)
  return -1;


 if (VAR_7->doff == VAR_2) {
  __be32 *VAR_10 = (__be32 *)(VAR_7 + 1);

  if (*VAR_10 != FUNC_3((VAR_4 << 24) | (VAR_4 << 16)
       | (VAR_5 << 8)
       | VAR_3))
   return -1;


  VAR_10++;
  if (VAR_9 && FUNC_2(FUNC_5(VAR_9->tcp_rcv_tsval),
          FUNC_5(*VAR_10)))
   return -1;


  VAR_10++;
  if (*VAR_10 == 0)
   return -1;
 }

 return 0;
}
