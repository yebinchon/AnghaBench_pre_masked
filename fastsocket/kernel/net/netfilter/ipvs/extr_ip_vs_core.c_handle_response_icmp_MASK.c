
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int ipvs_property; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_conn {int dummy; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,union nf_inet_addr*) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (struct ip_vs_conn*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,int) ;
 int FUNC_6 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,int) ;
 int FUNC_7 (struct ip_vs_conn*,struct sk_buff*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_11(int VAR_6, struct sk_buff *VAR_7,
    union nf_inet_addr *VAR_8,
    __u8 VAR_9, struct ip_vs_conn *VAR_10,
    struct ip_vs_protocol *VAR_11,
    unsigned int VAR_12, unsigned int VAR_13)
{
 unsigned int VAR_14 = VAR_5;

 if (FUNC_2(VAR_10) != 0) {
  FUNC_8("shouldn't reach here, because the box is on the "
         "half connection in the tun/dr module.\n");
 }


 if (!FUNC_9(VAR_7) && FUNC_4(VAR_7, VAR_13)) {

  FUNC_1(1, "Forward ICMP: failed checksum from %s!\n",
         FUNC_0(VAR_6, VAR_8));
  goto out;
 }

 if (VAR_2 == VAR_9 || VAR_3 == VAR_9 ||
     VAR_1 == VAR_9)
  VAR_12 += 2 * sizeof(__u16);
 if (!FUNC_10(VAR_7, VAR_12))
  goto out;






  FUNC_5(VAR_7, VAR_11, VAR_10, 1);


 FUNC_7(VAR_10, VAR_7);

 VAR_7->ipvs_property = 1;
 VAR_14 = VAR_4;

out:
 FUNC_3(VAR_10);

 return VAR_14;
}
