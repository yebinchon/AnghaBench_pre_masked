
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; int pos; int line; struct roff_node* next; struct roff_node* parent; } ;
struct roff_man {struct roff_node* last; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct roff_man*,int ,int ,int) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;
 int FUNC_2 (struct roff_man*,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct roff_man *VAR_3, int VAR_4)
{
 struct roff_node *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->last->next;
 for (VAR_6 = 1;; VAR_6++) {
  FUNC_0(VAR_3, VAR_5->line, VAR_5->pos, VAR_4);
  VAR_3->last->flags |= VAR_1;
  FUNC_1(VAR_3, VAR_5);
  VAR_5 = VAR_3->last = VAR_3->last->parent;
  VAR_3->next = VAR_2;
  if (VAR_5->next == ((void*)0))
   return VAR_6;
  if (VAR_6 > 1 || VAR_5->next->next != ((void*)0)) {
   FUNC_2(VAR_3, VAR_5->line, VAR_5->pos, ",");
   VAR_3->last->flags |= VAR_0 | VAR_1;
  }
  VAR_5 = VAR_3->last->next;
  if (VAR_5->next == ((void*)0)) {
   FUNC_2(VAR_3, VAR_5->line, VAR_5->pos, "and");
   VAR_3->last->flags |= VAR_1;
  }
 }
}
