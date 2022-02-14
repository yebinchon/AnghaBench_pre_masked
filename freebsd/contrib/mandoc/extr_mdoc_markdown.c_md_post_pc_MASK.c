
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {scalar_t__ tok; TYPE_2__* next; TYPE_3__* prev; TYPE_1__* parent; } ;
struct TYPE_6__ {scalar_t__ tok; } ;
struct TYPE_5__ {scalar_t__ tok; } ;
struct TYPE_4__ {scalar_t__ tok; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct roff_node *VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_3->parent->tok != VAR_0)
  return;
 if (VAR_3->next != ((void*)0)) {
  FUNC_1(",");
  if (VAR_3->prev != ((void*)0) &&
      VAR_3->prev->tok == VAR_3->tok &&
      VAR_3->next->tok == VAR_3->tok)
   FUNC_1("and");
 } else {
  FUNC_1(".");
  VAR_2 |= VAR_1;
 }
}
