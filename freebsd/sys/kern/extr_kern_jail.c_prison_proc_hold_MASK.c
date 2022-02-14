
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {scalar_t__ pr_uref; int pr_mtx; int pr_id; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct prison *VAR_0)
{

 FUNC_1(&VAR_0->pr_mtx);
 FUNC_0(VAR_0->pr_uref > 0,
     ("Cannot add a process to a non-alive prison (jid=%d)", VAR_0->pr_id));
 VAR_0->pr_uref++;
 FUNC_2(&VAR_0->pr_mtx);
}
