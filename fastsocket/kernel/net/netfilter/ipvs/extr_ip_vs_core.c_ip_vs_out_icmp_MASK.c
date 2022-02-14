
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int frag_off; int ihl; scalar_t__ type; int protocol; int saddr; int daddr; } ;
struct ip_vs_protocol {struct ip_vs_conn* (* conn_out_get ) (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;scalar_t__ dont_defrag; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn {int dummy; } ;
struct icmphdr {int frag_off; int ihl; scalar_t__ type; int protocol; int saddr; int daddr; } ;
typedef int _icmph ;
typedef int _ciph ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,scalar_t__,int ,int *,int *) ;
 int FUNC_1 (int,struct ip_vs_protocol*,struct sk_buff*,unsigned int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,struct sk_buff*,union nf_inet_addr*,int ,struct ip_vs_conn*,struct ip_vs_protocol*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iphdr*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,struct iphdr*,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 struct ip_vs_protocol* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct iphdr* FUNC_10 (struct sk_buff*,unsigned int,int,struct iphdr*) ;
 struct ip_vs_conn* FUNC_11 (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_10, int *VAR_11)
{
 struct iphdr *VAR_12;
 struct icmphdr VAR_13, *VAR_14;
 struct iphdr VAR_15, *VAR_16;
 struct ip_vs_iphdr VAR_17;
 struct ip_vs_conn *VAR_18;
 struct ip_vs_protocol *VAR_19;
 unsigned int VAR_20, VAR_21;
 union nf_inet_addr VAR_22;

 *VAR_11 = 1;


 if (FUNC_5(VAR_10)->frag_off & FUNC_3(VAR_5 | VAR_6)) {
  if (FUNC_7(VAR_10, VAR_4))
   return VAR_9;
 }

 VAR_12 = FUNC_5(VAR_10);
 VAR_20 = VAR_21 = VAR_12->ihl * 4;
 VAR_14 = FUNC_10(VAR_10, VAR_20, sizeof(VAR_13), &VAR_13);
 if (VAR_14 == ((void*)0))
  return VAR_8;

 FUNC_0(12, "Outgoing ICMP (%d,%d) %pI4->%pI4\n",
    VAR_14->type, FUNC_9(FUNC_4(VAR_14)),
    &VAR_12->saddr, &VAR_12->daddr);
 if ((VAR_14->type != VAR_1) &&
     (VAR_14->type != VAR_2) &&
     (VAR_14->type != VAR_3)) {
  *VAR_11 = 0;
  return VAR_7;
 }


 VAR_20 += sizeof(VAR_13);
 VAR_16 = FUNC_10(VAR_10, VAR_20, sizeof(VAR_15), &VAR_15);
 if (VAR_16 == ((void*)0))
  return VAR_7;

 VAR_19 = FUNC_8(VAR_16->protocol);
 if (!VAR_19)
  return VAR_7;


 if (FUNC_12(VAR_16->frag_off & FUNC_3(VAR_6) &&
       VAR_19->dont_defrag))
  return VAR_7;

 FUNC_1(11, VAR_19, VAR_10, VAR_20, "Checking outgoing ICMP for");

 VAR_20 += VAR_16->ihl * 4;

 FUNC_6(VAR_0, VAR_16, &VAR_17);

 VAR_18 = VAR_19->conn_out_get(VAR_0, VAR_10, VAR_19, &VAR_17, VAR_20, 1);
 if (!VAR_18)
  return VAR_7;

 VAR_22.ip = VAR_12->saddr;
 return FUNC_2(VAR_0, VAR_10, &VAR_22, VAR_16->protocol, VAR_18,
        VAR_19, VAR_20, VAR_21);
}
