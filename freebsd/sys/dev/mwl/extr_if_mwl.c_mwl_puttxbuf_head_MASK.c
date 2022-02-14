
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_txq {int nfree; int free; } ;
struct mwl_txbuf {int * bf_node; int * bf_m; } ;


 int FUNC_0 (struct mwl_txq*) ;
 int FUNC_1 (struct mwl_txq*) ;
 int FUNC_2 (int *,struct mwl_txbuf*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct mwl_txq *VAR_1, struct mwl_txbuf *VAR_2)
{
 VAR_2->bf_m = ((void*)0);
 VAR_2->bf_node = ((void*)0);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->free, VAR_2, VAR_0);
 VAR_1->nfree++;
 FUNC_1(VAR_1);
}
