
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3)
{

 void *VAR_4 = FUNC_1(FUNC_0(VAR_3->data));

 if (FUNC_2(VAR_3, VAR_4) < 0)
  goto out;

 return FUNC_3(VAR_3, 0, VAR_2.id,
   VAR_1);
out:
 FUNC_4(VAR_3);
 return -VAR_0;
}
