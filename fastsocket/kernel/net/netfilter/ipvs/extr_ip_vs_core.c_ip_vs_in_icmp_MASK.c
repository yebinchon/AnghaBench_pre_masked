
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int frag_off; int ihl; scalar_t__ type; scalar_t__ protocol; int saddr; int daddr; } ;
struct ip_vs_protocol {struct ip_vs_conn* (* conn_out_get ) (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;struct ip_vs_conn* (* conn_in_get ) (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;scalar_t__ dont_defrag; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn {int dummy; } ;
struct icmphdr {int frag_off; int ihl; scalar_t__ type; scalar_t__ protocol; int saddr; int daddr; } ;
typedef int _icmph ;
typedef int _ciph ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,scalar_t__,...) ;
 int FUNC_1 (int,struct ip_vs_protocol*,struct sk_buff*,unsigned int,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ip_vs_conn*) ;
 int FUNC_3 (int ,struct sk_buff*,union nf_inet_addr*,scalar_t__,struct ip_vs_conn*,struct ip_vs_protocol*,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct iphdr*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 (int ,struct iphdr*,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 unsigned int FUNC_10 (struct sk_buff*,struct ip_vs_conn*,struct ip_vs_protocol*,unsigned int) ;
 int FUNC_11 (struct ip_vs_conn*,struct sk_buff*) ;
 struct ip_vs_protocol* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*) ;
 struct iphdr* FUNC_15 (struct sk_buff*,unsigned int,int,struct iphdr*) ;
 struct ip_vs_conn* FUNC_16 (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;
 struct ip_vs_conn* FUNC_17 (int ,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_iphdr*,unsigned int,int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int
FUNC_19(struct sk_buff *VAR_14, int *VAR_15, unsigned int VAR_16)
{
 struct iphdr *VAR_17;
 struct icmphdr VAR_18, *VAR_19;
 struct iphdr VAR_20, *VAR_21;
 struct ip_vs_iphdr VAR_22;
 struct ip_vs_conn *VAR_23;
 struct ip_vs_protocol *VAR_24;
 unsigned int VAR_25, VAR_26, VAR_27;
 union nf_inet_addr VAR_28;

 *VAR_15 = 1;


 if (FUNC_6(VAR_14)->frag_off & FUNC_4(VAR_8 | VAR_9)) {
  if (FUNC_9(VAR_14, VAR_16 == VAR_12 ?
         VAR_7 : VAR_6))
   return VAR_13;
 }

 VAR_17 = FUNC_6(VAR_14);
 VAR_25 = VAR_26 = VAR_17->ihl * 4;
 VAR_19 = FUNC_15(VAR_14, VAR_25, sizeof(VAR_18), &VAR_18);
 if (VAR_19 == ((void*)0))
  return VAR_11;

 FUNC_0(12, "Incoming ICMP (%d,%d) %pI4->%pI4\n",
    VAR_19->type, FUNC_13(FUNC_5(VAR_19)),
    &VAR_17->saddr, &VAR_17->daddr);
 if ((VAR_19->type != VAR_1) &&
     (VAR_19->type != VAR_2) &&
     (VAR_19->type != VAR_3)) {
  *VAR_15 = 0;
  return VAR_10;
 }


 VAR_25 += sizeof(VAR_18);
 VAR_21 = FUNC_15(VAR_14, VAR_25, sizeof(VAR_20), &VAR_20);
 if (VAR_21 == ((void*)0))
  return VAR_10;

 VAR_24 = FUNC_12(VAR_21->protocol);
 if (!VAR_24)
  return VAR_10;


 if (FUNC_18(VAR_21->frag_off & FUNC_4(VAR_9) &&
       VAR_24->dont_defrag))
  return VAR_10;

 FUNC_1(11, VAR_24, VAR_14, VAR_25, "Checking incoming ICMP for");

 VAR_25 += VAR_21->ihl * 4;

 FUNC_8(VAR_0, VAR_21, &VAR_22);

 VAR_23 = VAR_24->conn_in_get(VAR_0, VAR_14, VAR_24, &VAR_22, VAR_25, 1);
 if (!VAR_23) {

  VAR_23 = VAR_24->conn_out_get(VAR_0, VAR_14, VAR_24, &VAR_22, VAR_25, 1);
  if (VAR_23) {
   VAR_28.ip = VAR_17->saddr;
   return FUNC_3(VAR_0, VAR_14, &VAR_28,
          VAR_21->protocol, VAR_23, VAR_24,
          VAR_25, VAR_26);
  }
  return VAR_10;
 }

 VAR_27 = VAR_11;


 if (!FUNC_14(VAR_14) && FUNC_7(VAR_14, VAR_26)) {

  FUNC_0(1, "Incoming ICMP: failed checksum from %pI4!\n",
     &VAR_17->saddr);
  goto out;
 }


 FUNC_11(VAR_23, VAR_14);
 if (VAR_4 == VAR_21->protocol || VAR_5 == VAR_21->protocol)
  VAR_25 += 2 * sizeof(__u16);
 VAR_27 = FUNC_10(VAR_14, VAR_23, VAR_24, VAR_25);


  out:
 FUNC_2(VAR_23);

 return VAR_27;
}
