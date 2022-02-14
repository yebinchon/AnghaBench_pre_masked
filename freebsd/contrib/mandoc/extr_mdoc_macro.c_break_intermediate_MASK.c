
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; scalar_t__ end; int flags; struct roff_node* parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct roff_node *VAR_6, struct roff_node *VAR_7)
{
 if (VAR_6 != VAR_7 &&
     VAR_6->type != VAR_3 && VAR_6->type != VAR_5 &&
     (VAR_6->type != VAR_4 || VAR_6->end != VAR_0))
  VAR_6 = VAR_6->parent;
 while (VAR_6 != VAR_7) {
  if ( ! (VAR_6->flags & VAR_2))
   VAR_6->flags |= VAR_1;
  VAR_6 = VAR_6->parent;
 }
}
