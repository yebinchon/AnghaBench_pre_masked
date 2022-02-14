
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct icmphdr {int dummy; } ;
typedef int __u32 ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ filter; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static __inline__ int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_1, sizeof(struct icmphdr)))
  return 1;

 VAR_2 = FUNC_0(VAR_1)->type;
 if (VAR_2 < 32) {
  __u32 VAR_3 = FUNC_2(VAR_0)->filter.data;

  return ((1 << VAR_2) & VAR_3) != 0;
 }


 return 0;
}
