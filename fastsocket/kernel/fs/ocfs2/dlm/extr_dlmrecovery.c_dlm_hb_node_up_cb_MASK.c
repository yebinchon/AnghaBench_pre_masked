
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct dlm_ctxt {int spinlock; int live_nodes_map; } ;


 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (struct dlm_ctxt*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct o2nm_node *VAR_0, int VAR_1, void *VAR_2)
{
 struct dlm_ctxt *VAR_3 = VAR_2;

 if (!FUNC_0(VAR_3))
  return;

 FUNC_3(&VAR_3->spinlock);
 FUNC_2(VAR_1, VAR_3->live_nodes_map);


 FUNC_4(&VAR_3->spinlock);

 FUNC_1(VAR_3);
}
