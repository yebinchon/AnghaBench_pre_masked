
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct rps_dev_flow {int last_qtail; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sk_buff*,int,int *) ;
 int FUNC_2 (int ,struct sk_buff*,struct rps_dev_flow**) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_1)
{
 struct rps_dev_flow VAR_2, *VAR_3 = &VAR_2;
 int VAR_4 = -1, VAR_5;

 if (VAR_0)
  VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 == -1)
  VAR_4 = FUNC_2(VAR_1->dev, VAR_1, &VAR_3);

 if (VAR_4 >= 0)
  VAR_5 = FUNC_1(VAR_1, VAR_4, &VAR_3->last_qtail);
 else
  VAR_5 = FUNC_0(VAR_1);

 return VAR_5;
}
