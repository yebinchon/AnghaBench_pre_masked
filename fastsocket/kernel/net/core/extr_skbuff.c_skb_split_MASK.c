
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int shared_frag; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*,int const,int) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff*,int const,int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct sk_buff *VAR_0, struct sk_buff *VAR_1, const u32 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);

 FUNC_3(VAR_1)->shared_frag = FUNC_3(VAR_0)->shared_frag;
 if (VAR_2 < VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
