
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct dlm_ctxt {int spinlock; int domain_map; } ;


 int FUNC_0 (struct dlm_ctxt*,int) ;
 int FUNC_1 (struct dlm_ctxt*,int) ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int FUNC_3 (struct dlm_ctxt*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int ) ;

void FUNC_7(struct o2nm_node *VAR_0, int VAR_1, void *VAR_2)
{
 struct dlm_ctxt *VAR_3 = VAR_2;

 if (!FUNC_2(VAR_3))
  return;





 if (FUNC_6(VAR_1, VAR_3->domain_map))
  FUNC_1(VAR_3, VAR_1);

 FUNC_4(&VAR_3->spinlock);
 FUNC_0(VAR_3, VAR_1);
 FUNC_5(&VAR_3->spinlock);

 FUNC_3(VAR_3);
}
