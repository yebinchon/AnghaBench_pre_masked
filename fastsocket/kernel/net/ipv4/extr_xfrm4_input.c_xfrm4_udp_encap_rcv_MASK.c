
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct udphdr {int dummy; } ;
struct udp_sock {int encap_type; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct iphdr {int ihl; int tot_len; } ;
struct ip_esp_hdr {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 struct udphdr* FUNC_9 (struct sk_buff*) ;
 struct udp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*,int ,int ,int) ;

int FUNC_12(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct udp_sock *VAR_4 = FUNC_10(VAR_2);
 struct udphdr *VAR_5;
 struct iphdr *VAR_6;
 int VAR_7, VAR_8;

 __u8 *VAR_9;
 __be32 *VAR_10;
 __u16 VAR_11 = VAR_4->encap_type;


 if (!VAR_11)
  return 1;



 VAR_8 = VAR_3->len - sizeof(struct udphdr);
 if (!FUNC_6(VAR_3, sizeof(struct udphdr) + FUNC_4(VAR_8, 8)))
  return 1;


 VAR_5 = FUNC_9(VAR_3);
 VAR_9 = (__u8 *)VAR_5 + sizeof(struct udphdr);
 VAR_10 = (__be32 *)VAR_9;

 switch (VAR_11) {
 default:
 case 129:

  if (VAR_8 == 1 && VAR_9[0] == 0xff) {
   goto drop;
  } else if (VAR_8 > sizeof(struct ip_esp_hdr) && VAR_10[0] != 0) {

   VAR_8 = sizeof(struct udphdr);
  } else

   return 1;
  break;
 case 128:

  if (VAR_8 == 1 && VAR_9[0] == 0xff) {
   goto drop;
  } else if (VAR_8 > 2 * sizeof(u32) + sizeof(struct ip_esp_hdr) &&
      VAR_10[0] == 0 && VAR_10[1] == 0) {


   VAR_8 = sizeof(struct udphdr) + 2 * sizeof(u32);
  } else

   return 1;
  break;
 }






 if (FUNC_8(VAR_3, VAR_0))
  goto drop;


 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = VAR_6->ihl << 2;
 VAR_6->tot_len = FUNC_1(FUNC_5(VAR_6->tot_len) - VAR_8);
 if (VAR_3->len < VAR_7 + VAR_8) {

  goto drop;
 }





 FUNC_0(VAR_3, VAR_8);
 FUNC_7(VAR_3);


 return FUNC_11(VAR_3, VAR_1, 0, VAR_11);

drop:
 FUNC_3(VAR_3);
 return 0;
}
