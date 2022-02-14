
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct owner_graph {int dummy; } ;
struct lockf_entry {TYPE_1__* lf_owner; } ;
struct lockf_edge {struct lockf_entry* le_to; struct lockf_entry* le_from; } ;
struct TYPE_2__ {int lo_vertex; } ;


 int FUNC_0 (struct lockf_edge*,int ) ;
 int FUNC_1 (struct owner_graph*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct lockf_edge*) ;
 struct owner_graph VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct lockf_edge *VAR_3)
{
 struct owner_graph *VAR_4 = &VAR_2;
 struct lockf_entry *VAR_5 = VAR_3->le_from;
 struct lockf_entry *VAR_6 = VAR_3->le_to;

 FUNC_1(VAR_4, VAR_5->lf_owner->lo_vertex, VAR_6->lf_owner->lo_vertex);
 FUNC_0(VAR_3, VAR_1);
 FUNC_0(VAR_3, VAR_0);
 VAR_3->le_from = ((void*)0);
 VAR_3->le_to = ((void*)0);
 FUNC_2(VAR_3);
}
