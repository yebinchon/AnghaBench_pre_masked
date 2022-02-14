
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_4__ {int dst; } ;
struct rt6_info {int rt6i_flags; TYPE_1__* rt6i_node; TYPE_2__ u; } ;
struct TYPE_3__ {int fn_sernum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_5)
{
 struct rt6_info *VAR_6;

 FUNC_1(VAR_5, VAR_1, VAR_0, 0, VAR_5->dev);

 VAR_6 = (struct rt6_info *) FUNC_2(VAR_5);
 if (VAR_6) {
  if (VAR_6->rt6i_flags&VAR_2) {
   FUNC_0(&VAR_6->u.dst, 0);
   VAR_6->rt6i_flags |= VAR_4;
  } else if (VAR_6->rt6i_node && (VAR_6->rt6i_flags & VAR_3))
   VAR_6->rt6i_node->fn_sernum = -1;
 }
}
