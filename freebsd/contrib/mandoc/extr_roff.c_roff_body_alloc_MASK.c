
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int dummy; } ;
struct roff_man {int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct roff_node* FUNC_0 (struct roff_man*,int,int,int ,int) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;

struct roff_node *
FUNC_2(struct roff_man *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct roff_node *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5);
 FUNC_1(VAR_2, VAR_6);
 VAR_2->next = VAR_1;
 return VAR_6;
}
