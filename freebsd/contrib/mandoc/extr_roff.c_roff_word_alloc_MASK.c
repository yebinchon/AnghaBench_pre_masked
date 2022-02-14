
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; int string; } ;
struct roff_man {int next; int roff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct roff_node* FUNC_0 (struct roff_man*,int,int,int ,int ) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;
 int FUNC_2 (int ,char const*) ;

void
FUNC_3(struct roff_man *VAR_5, int VAR_6, int VAR_7, const char *VAR_8)
{
 struct roff_node *VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_2, VAR_4);
 VAR_9->string = FUNC_2(VAR_5->roff, VAR_8);
 FUNC_1(VAR_5, VAR_9);
 VAR_9->flags |= VAR_1 | VAR_0;
 VAR_5->next = VAR_3;
}
