
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be32 ;


 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_0,
     __be32 VAR_1,
     u_int16_t VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     struct nf_conn *VAR_5,
     enum ip_conntrack_info VAR_6)
{
 char VAR_7[sizeof("|||65535|")];

 FUNC_2(VAR_7, "|||%u|", VAR_2);

 FUNC_1("calling nf_nat_mangle_tcp_packet\n");

 return FUNC_0(VAR_0, VAR_5, VAR_6, VAR_3,
     VAR_4, VAR_7, FUNC_3(VAR_7));
}
