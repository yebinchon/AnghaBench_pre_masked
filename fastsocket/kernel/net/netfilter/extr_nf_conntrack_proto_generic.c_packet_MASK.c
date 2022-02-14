
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nf_conn*,int,struct sk_buff const*,int ) ;

__attribute__((used)) static int FUNC_1(struct nf_conn *VAR_2,
    const struct sk_buff *VAR_3,
    unsigned int VAR_4,
    enum ip_conntrack_info VAR_5,
    u_int8_t VAR_6,
    unsigned int VAR_7)
{
 FUNC_0(VAR_2, VAR_5, VAR_3, VAR_1);
 return VAR_0;
}
