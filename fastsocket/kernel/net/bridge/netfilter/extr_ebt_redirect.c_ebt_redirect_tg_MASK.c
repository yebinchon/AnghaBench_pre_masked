
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xt_target_param {scalar_t__ hooknum; TYPE_2__* in; struct ebt_redirect_info* targinfo; } ;
struct sk_buff {int pkt_type; } ;
struct ebt_redirect_info {unsigned int target; } ;
struct TYPE_10__ {int h_dest; } ;
struct TYPE_9__ {TYPE_3__* dev; } ;
struct TYPE_8__ {int dev_addr; } ;
struct TYPE_7__ {int dev_addr; TYPE_1__* br_port; } ;
struct TYPE_6__ {TYPE_4__* br; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_4, const struct xt_target_param *VAR_5)
{
 const struct ebt_redirect_info *VAR_6 = VAR_5->targinfo;

 if (!FUNC_2(VAR_4, 0))
  return VAR_0;

 if (VAR_5->hooknum != VAR_2)
  FUNC_1(FUNC_0(VAR_4)->h_dest,
         VAR_5->in->br_port->br->dev->dev_addr, VAR_1);
 else
  FUNC_1(FUNC_0(VAR_4)->h_dest, VAR_5->in->dev_addr, VAR_1);
 VAR_4->pkt_type = VAR_3;
 return VAR_6->target;
}
