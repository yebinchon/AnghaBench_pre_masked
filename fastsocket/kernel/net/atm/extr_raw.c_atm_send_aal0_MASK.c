
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct atm_vcc {int vpi; int vci; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* send ) (struct atm_vcc*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct atm_vcc *VAR_6,struct sk_buff *VAR_7)
{




 if (!FUNC_0(VAR_4) &&
     (((u32 *) VAR_7->data)[0] & (VAR_2 | VAR_0)) !=
     ((VAR_6->vpi << VAR_3) | (VAR_6->vci << VAR_1)))
     {
  FUNC_1(VAR_7);
  return -VAR_5;
 }
 return VAR_6->dev->ops->send(VAR_6,VAR_7);
}
