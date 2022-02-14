
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct owner_graph {int dummy; } ;
struct lockf_entry {TYPE_1__* lf_owner; } ;
struct TYPE_2__ {int lo_vertex; } ;


 int FUNC_0 (struct owner_graph*,TYPE_1__*) ;
 struct owner_graph VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct lockf_entry *VAR_1)
{
 struct owner_graph *VAR_2 = &VAR_0;

 if (!VAR_1->lf_owner->lo_vertex)
  VAR_1->lf_owner->lo_vertex =
   FUNC_0(VAR_2, VAR_1->lf_owner);
}
