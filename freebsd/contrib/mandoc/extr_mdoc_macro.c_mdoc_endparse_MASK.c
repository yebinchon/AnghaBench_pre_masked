
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {int flags; scalar_t__ type; size_t tok; int pos; int line; struct roff_node* parent; } ;
struct TYPE_3__ {int first; } ;
struct roff_man {TYPE_1__ meta; struct roff_node* last; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 TYPE_2__* FUNC_1 (size_t) ;
 int FUNC_2 (struct roff_man*,int ) ;
 int * VAR_4 ;

void
FUNC_3(struct roff_man *VAR_5)
{
 struct roff_node *VAR_6;



 VAR_6 = VAR_5->last->flags & VAR_2 ?
     VAR_5->last->parent : VAR_5->last;

 for ( ; VAR_6; VAR_6 = VAR_6->parent)
  if (VAR_6->type == VAR_3 &&
      FUNC_1(VAR_6->tok)->flags & VAR_1)
   FUNC_0(VAR_0,
       VAR_6->line, VAR_6->pos, "%s", VAR_4[VAR_6->tok]);



 FUNC_2(VAR_5, VAR_5->meta.first);
}
