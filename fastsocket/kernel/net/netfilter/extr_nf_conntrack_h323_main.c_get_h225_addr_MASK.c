
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;
typedef union nf_inet_addr __be16 ;
struct TYPE_5__ {int ip; } ;
struct TYPE_6__ {int ip; } ;
struct TYPE_7__ {int choice; TYPE_1__ ip6Address; TYPE_2__ ipAddress; } ;
typedef TYPE_3__ TransportAddress ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (union nf_inet_addr*,unsigned char const*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (struct nf_conn*) ;

int FUNC_3(struct nf_conn *VAR_2, unsigned char *VAR_3,
    TransportAddress *VAR_4,
    union nf_inet_addr *VAR_5, __be16 *VAR_6)
{
 const unsigned char *VAR_7;
 int VAR_8;

 switch (VAR_4->choice) {
 case 128:
  if (FUNC_2(VAR_2) != VAR_0)
   return 0;
  VAR_7 = VAR_3 + VAR_4->ipAddress.ip;
  VAR_8 = 4;
  break;
 case 129:
  if (FUNC_2(VAR_2) != VAR_1)
   return 0;
  VAR_7 = VAR_3 + VAR_4->ip6Address.ip;
  VAR_8 = 16;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_5, VAR_7, VAR_8);
 FUNC_1((void *)VAR_5 + VAR_8, 0, sizeof(*VAR_5) - VAR_8);
 FUNC_0(VAR_6, VAR_7 + VAR_8, sizeof(__be16));

 return 1;
}
