
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int csum; } ;
struct TYPE_4__ {size_t type; } ;
struct TYPE_5__ {TYPE_1__ icmph; } ;
struct icmp_bxm {int skb; TYPE_2__ data; scalar_t__ offset; } ;
typedef int __wsum ;
struct TYPE_6__ {scalar_t__ error; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,scalar_t__,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5,
     struct sk_buff *VAR_6)
{
 struct icmp_bxm *VAR_7 = (struct icmp_bxm *)VAR_1;
 __wsum VAR_8;

 VAR_8 = FUNC_2(VAR_7->skb,
          VAR_7->offset + VAR_3,
          VAR_2, VAR_4, 0);

 VAR_6->csum = FUNC_0(VAR_6->csum, VAR_8, VAR_5);
 if (VAR_0[VAR_7->data.icmph.type].error)
  FUNC_1(VAR_6, VAR_7->skb);
 return 0;
}
