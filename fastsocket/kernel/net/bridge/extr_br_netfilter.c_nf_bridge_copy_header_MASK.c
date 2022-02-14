
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* nf_bridge; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int,int ,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

int FUNC_4(struct sk_buff *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_0 + FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1, VAR_3);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1, -VAR_3,
           VAR_1->nf_bridge->data, VAR_3);
 FUNC_0(VAR_1, FUNC_1(VAR_1));
 return 0;
}
