
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (struct nf_conn*,char const*,int *,unsigned int,int,int *,unsigned int*,unsigned int*,union nf_inet_addr*,int *) ;
 int FUNC_1 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,union nf_inet_addr*,int ) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0,
   const char **VAR_1, unsigned int *VAR_2,
   enum sip_header_types VAR_3)
{
 enum ip_conntrack_info VAR_4;
 struct nf_conn *VAR_5 = FUNC_2(VAR_0, &VAR_4);
 unsigned int VAR_6, VAR_7;
 union nf_inet_addr VAR_8;
 __be16 VAR_9;

 if (FUNC_0(VAR_5, *VAR_1, ((void*)0), *VAR_2, VAR_3, ((void*)0),
        &VAR_7, &VAR_6, &VAR_8, &VAR_9) <= 0)
  return 1;
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_7, VAR_6, &VAR_8, VAR_9);
}
