
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sk_buff {scalar_t__ pkt_type; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vport*,struct sk_buff*) ;
 struct vport* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

struct sk_buff *FUNC_3(struct sk_buff *VAR_1)
{
 struct vport *VAR_2;

 if (FUNC_2(VAR_1->pkt_type == VAR_0))
  return VAR_1;

 VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_2, VAR_1);

 return ((void*)0);
}
