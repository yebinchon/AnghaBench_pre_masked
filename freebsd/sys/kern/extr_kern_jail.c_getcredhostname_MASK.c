
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct prison* cr_prison; } ;
struct prison {int pr_mtx; int pr_hostname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct prison VAR_0 ;
 int FUNC_2 (char*,int ,size_t) ;

void
FUNC_3(struct ucred *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct prison *VAR_4;





 VAR_4 = (VAR_1 != ((void*)0)) ? VAR_1->cr_prison : &VAR_0;
 FUNC_0(&VAR_4->pr_mtx);
 FUNC_2(VAR_2, VAR_4->pr_hostname, VAR_3);
 FUNC_1(&VAR_4->pr_mtx);
}
