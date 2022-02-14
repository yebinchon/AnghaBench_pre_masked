
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_id; int vtntx_mtx; int * vtntx_br; int * vtntx_sg; int * vtntx_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_txq *VAR_1)
{

 VAR_1->vtntx_sc = ((void*)0);
 VAR_1->vtntx_id = -1;

 if (VAR_1->vtntx_sg != ((void*)0)) {
  FUNC_3(VAR_1->vtntx_sg);
  VAR_1->vtntx_sg = ((void*)0);
 }


 if (VAR_1->vtntx_br != ((void*)0)) {
  FUNC_0(VAR_1->vtntx_br, VAR_0);
  VAR_1->vtntx_br = ((void*)0);
 }


 if (FUNC_2(&VAR_1->vtntx_mtx) != 0)
  FUNC_1(&VAR_1->vtntx_mtx);
}
