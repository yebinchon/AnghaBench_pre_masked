
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 struct node* FUNC_0 (struct node*,char const*) ;
 struct node* FUNC_1 (struct node*,char const*) ;

struct node *FUNC_2(struct node *VAR_0, const char *VAR_1)
{
 if (VAR_1[0] == '/')
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
