
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;
struct TYPE_4__ {int ip; } ;
struct TYPE_5__ {TYPE_1__ ipAddress; } ;
typedef TYPE_2__ TransportAddress ;


 int FUNC_0 (struct sk_buff*,unsigned char**,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0,
    unsigned char **VAR_1, int VAR_2,
    TransportAddress *VAR_3,
    union nf_inet_addr *VAR_4, __be16 VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->ipAddress.ip,
   VAR_4->ip, VAR_5);
}
