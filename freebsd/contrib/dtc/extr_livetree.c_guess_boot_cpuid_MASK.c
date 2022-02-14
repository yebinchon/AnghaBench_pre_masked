
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {struct node* children; } ;


 struct node* FUNC_0 (struct node*,char*) ;
 struct property* FUNC_1 (struct node*,char*) ;
 int FUNC_2 (struct property*) ;

uint32_t FUNC_3(struct node *VAR_0)
{
 struct node *VAR_1, *VAR_2;
 struct property *VAR_3;

 VAR_1 = FUNC_0(VAR_0, "/cpus");
 if (!VAR_1)
  return 0;


 VAR_2 = VAR_1->children;
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_2, "reg");
 if (!VAR_3 || (VAR_3->val.len != sizeof(uint32_t)))
  return 0;



 return FUNC_2(VAR_3);
}
