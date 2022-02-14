
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int end; int norm; struct roff_node* body; TYPE_1__* parent; int flags; } ;
struct roff_man {int next; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct roff_node* FUNC_0 (struct roff_man*,int,int,int ,int) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;

struct roff_node *
FUNC_2(struct roff_man *VAR_4, int VAR_5, int VAR_6,
    enum roff_tok VAR_7, struct roff_node *VAR_8)
{
 struct roff_node *VAR_9;

 VAR_8->flags |= VAR_1;
 VAR_8->parent->flags |= VAR_1;
 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2, VAR_7);
 VAR_9->body = VAR_8;
 VAR_9->norm = VAR_8->norm;
 VAR_9->end = VAR_0;
 FUNC_1(VAR_4, VAR_9);
 VAR_4->next = VAR_3;
 return VAR_9;
}
