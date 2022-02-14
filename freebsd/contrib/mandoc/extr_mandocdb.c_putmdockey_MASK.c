
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct roff_node {int flags; scalar_t__ type; int string; struct roff_node* child; struct roff_node* next; } ;
struct mpage {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpage const*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(const struct mpage *VAR_1,
 const struct roff_node *VAR_2, uint64_t VAR_3, int VAR_4)
{

 for ( ; ((void*)0) != VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->flags & VAR_4)
   continue;
  if (((void*)0) != VAR_2->child)
   FUNC_1(VAR_1, VAR_2->child, VAR_3, VAR_4);
  if (VAR_2->type == VAR_0)
   FUNC_0(VAR_1, VAR_2->string, VAR_3);
 }
}
