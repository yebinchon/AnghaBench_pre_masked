
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_pooladdr {int dummy; } ;
struct pf_pool {int list; } ;


 struct pf_pooladdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pf_pooladdr*,int ) ;
 int FUNC_2 (int *,struct pf_pooladdr*,int ) ;
 int VAR_0 ;

void
FUNC_3(struct pf_pool *VAR_1, struct pf_pool *VAR_2)
{
 struct pf_pooladdr *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_1->list)) != ((void*)0)) {
  FUNC_2(&VAR_1->list, VAR_3, VAR_0);
  FUNC_1(&VAR_2->list, VAR_3, VAR_0);
 }
}
