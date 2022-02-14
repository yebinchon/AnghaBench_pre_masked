
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv64; } ;
struct sk_buff {int dev; TYPE_1__ tstamp; } ;
struct rps_dev_flow {int last_qtail; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int,int *) ;
 int FUNC_1 (int ,struct sk_buff*,struct rps_dev_flow**) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_1)
{
 struct rps_dev_flow VAR_2, *VAR_3 = &VAR_2;
 int VAR_4;


 if (FUNC_3(VAR_1))
  return VAR_0;

 if (!VAR_1->tstamp.tv64)
  FUNC_2(VAR_1);

 FUNC_5(VAR_1);
 VAR_4 = FUNC_1(VAR_1->dev, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  VAR_4 = FUNC_4();

 return FUNC_0(VAR_1, VAR_4, &VAR_3->last_qtail);
}
