
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;
typedef union nf_inet_addr __be16 ;
struct TYPE_7__ {int network; } ;
struct TYPE_6__ {int network; } ;
struct TYPE_8__ {int choice; TYPE_2__ iP6Address; TYPE_1__ iPAddress; } ;
struct TYPE_9__ {scalar_t__ choice; TYPE_3__ unicastAddress; } ;
typedef TYPE_4__ H245_TransportAddress ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (union nf_inet_addr*,unsigned char const*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_3, const unsigned char *VAR_4,
    H245_TransportAddress *VAR_5,
    union nf_inet_addr *VAR_6, __be16 *VAR_7)
{
 const unsigned char *VAR_8;
 int VAR_9;

 if (VAR_5->choice != VAR_2)
  return 0;

 switch (VAR_5->unicastAddress.choice) {
 case 128:
  if (FUNC_2(VAR_3) != VAR_0)
   return 0;
  VAR_8 = VAR_4 + VAR_5->unicastAddress.iPAddress.network;
  VAR_9 = 4;
  break;
 case 129:
  if (FUNC_2(VAR_3) != VAR_1)
   return 0;
  VAR_8 = VAR_4 + VAR_5->unicastAddress.iP6Address.network;
  VAR_9 = 16;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_6, VAR_8, VAR_9);
 FUNC_1((void *)VAR_6 + VAR_9, 0, sizeof(*VAR_6) - VAR_9);
 FUNC_0(VAR_7, VAR_8 + VAR_9, sizeof(__be16));

 return 1;
}
