
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int deleted; } ;


 int FUNC_0 (struct node*,int ,int) ;
 struct node* FUNC_1 (int) ;

struct node *FUNC_2(void)
{
 struct node *VAR_0 = FUNC_1(sizeof(*VAR_0));

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->deleted = 1;

 return VAR_0;
}
