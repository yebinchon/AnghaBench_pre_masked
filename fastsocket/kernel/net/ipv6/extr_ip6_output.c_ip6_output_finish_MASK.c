
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dst_entry {int dev; TYPE_1__* neighbour; scalar_t__ hh; } ;
struct TYPE_2__ {int (* output ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__,struct sk_buff*) ;
 struct dst_entry* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3 = FUNC_5(VAR_2);

 if (VAR_3->hh)
  return FUNC_4(VAR_3->hh, VAR_2);
 else if (VAR_3->neighbour)
  return VAR_3->neighbour->output(VAR_2);

 FUNC_0(FUNC_1(VAR_3->dev),
    FUNC_2(VAR_3), VAR_1);
 FUNC_3(VAR_2);
 return -VAR_0;

}
