
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {struct alq* aq_entbuf; int aq_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct alq*) ;
 int FUNC_1 (struct alq*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct alq *VAR_1)
{

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->aq_mtx);
 FUNC_1(VAR_1->aq_entbuf, VAR_0);
 FUNC_1(VAR_1, VAR_0);
}
