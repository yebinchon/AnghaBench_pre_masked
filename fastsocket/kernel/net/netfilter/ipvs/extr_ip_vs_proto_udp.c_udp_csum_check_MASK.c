
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udphdr {scalar_t__ check; } ;
struct sk_buff {int ip_summed; int csum; int len; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
typedef int _udph ;
struct TYPE_4__ {int protocol; int daddr; int saddr; } ;
struct TYPE_3__ {int nexthdr; int daddr; int saddr; } ;


 int VAR_0 ;


 int FUNC_0 (int ,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned int,int ,int ) ;
 struct udphdr* FUNC_7 (struct sk_buff*,unsigned int,int,struct udphdr*) ;

__attribute__((used)) static int
FUNC_8(int VAR_1, struct sk_buff *VAR_2, struct ip_vs_protocol *VAR_3)
{
 struct udphdr VAR_4, *VAR_5;
 unsigned int VAR_6;






  VAR_6 = FUNC_4(VAR_2);

 VAR_5 = FUNC_7(VAR_2, VAR_6, sizeof(VAR_4), &VAR_4);
 if (VAR_5 == ((void*)0))
  return 0;

 if (VAR_5->check != 0) {
  switch (VAR_2->ip_summed) {
  case 128:
   VAR_2->csum = FUNC_6(VAR_2, VAR_6,
       VAR_2->len - VAR_6, 0);
  case 129:
    if (FUNC_2(FUNC_3(VAR_2)->saddr,
            FUNC_3(VAR_2)->daddr,
            VAR_2->len - VAR_6,
            FUNC_3(VAR_2)->protocol,
            VAR_2->csum)) {
     FUNC_0(0, VAR_3, VAR_2, 0,
        "Failed checksum for");
     return 0;
    }
   break;
  default:

   break;
  }
 }
 return 1;
}
