
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {scalar_t__ pr_ref; int pr_id; int pr_mtx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct prison *VAR_1)
{

 FUNC_1(&VAR_1->pr_mtx, VAR_0);
 FUNC_0(VAR_1->pr_ref > 0,
     ("Trying to hold dead prison %p (jid=%d).", VAR_1, VAR_1->pr_id));
 VAR_1->pr_ref++;
}
