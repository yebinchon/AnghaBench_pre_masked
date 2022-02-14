
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int __u32 ;
struct TYPE_4__ {int saddr; int daddr; } ;
struct TYPE_3__ {int source; int dest; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline __u32 FUNC_3(struct sk_buff *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0)->daddr,
       FUNC_0(VAR_0)->saddr,
       FUNC_2(VAR_0)->dest,
       FUNC_2(VAR_0)->source);
}
