
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sk_buff {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct vport*,struct sk_buff*,int *) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct vport *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_6(!VAR_2))
  goto error;

 if (FUNC_6(FUNC_5(VAR_3)))
  goto error;




 VAR_3 = FUNC_4(VAR_3, VAR_1);
 if (FUNC_6(!VAR_3))
  return;

 FUNC_3(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_3->data, VAR_0);

 FUNC_2(VAR_2, VAR_3, ((void*)0));
 return;

error:
 FUNC_0(VAR_3);
}
