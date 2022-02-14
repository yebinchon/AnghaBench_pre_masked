
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ovs_key_ethernet {int eth_dst; int eth_src; } ;
struct TYPE_4__ {int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*,int) ;
 int FUNC_4 (struct sk_buff*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2,
   const struct ovs_key_ethernet *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (FUNC_5(VAR_4))
  return VAR_4;

 FUNC_4(VAR_2, FUNC_0(VAR_2), VAR_0 * 2);

 FUNC_2(FUNC_0(VAR_2)->h_source, VAR_3->eth_src, VAR_0);
 FUNC_2(FUNC_0(VAR_2)->h_dest, VAR_3->eth_dst, VAR_0);

 FUNC_3(VAR_2, FUNC_0(VAR_2), VAR_0 * 2);

 return 0;
}
