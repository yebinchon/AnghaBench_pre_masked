
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {unsigned char* data; } ;
struct nf_conn_nat {int * seq; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int FUNC_0 (int) ;
 unsigned char VAR_0 ;


 unsigned char VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 struct nf_conn_nat* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,struct tcphdr*,unsigned int,unsigned int,int *) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline unsigned int
FUNC_5(struct sk_buff *VAR_2,
     struct tcphdr *VAR_3,
     struct nf_conn *VAR_4,
     enum ip_conntrack_info VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 struct nf_conn_nat *VAR_9 = FUNC_2(VAR_4);

 VAR_7 = FUNC_1(VAR_2) + sizeof(struct tcphdr);
 VAR_8 = FUNC_1(VAR_2) + VAR_3->doff * 4;

 if (!FUNC_4(VAR_2, VAR_8))
  return 0;

 VAR_6 = FUNC_0(VAR_5);

 while (VAR_7 < VAR_8) {

  unsigned char *VAR_10 = VAR_2->data + VAR_7;

  switch (VAR_10[0]) {
  case 129:
   return 1;
  case 128:
   VAR_7++;
   continue;
  default:

   if (VAR_7 + 1 == VAR_8 ||
       VAR_7 + VAR_10[1] > VAR_8 ||
       VAR_10[1] < 2)
    return 0;
   if (VAR_10[0] == VAR_1 &&
       VAR_10[1] >= 2+VAR_0 &&
       ((VAR_10[1] - 2) % VAR_0) == 0)
    FUNC_3(VAR_2, VAR_3, VAR_7+2,
         VAR_7+VAR_10[1], &VAR_9->seq[!VAR_6]);
   VAR_7 += VAR_10[1];
  }
 }
 return 1;
}
