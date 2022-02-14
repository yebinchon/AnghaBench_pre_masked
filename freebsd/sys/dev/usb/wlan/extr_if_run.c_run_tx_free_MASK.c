
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_tx_data {int * ni; int * m; } ;
struct run_endpoint_queue {int tx_nfree; int tx_fh; } ;


 int FUNC_0 (int *,struct run_tx_data*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct run_endpoint_queue *VAR_1,
    struct run_tx_data *VAR_2, int VAR_3)
{

 FUNC_1(VAR_2->ni, VAR_2->m, VAR_3);

 VAR_2->m = ((void*)0);
 VAR_2->ni = ((void*)0);

 FUNC_0(&VAR_1->tx_fh, VAR_2, VAR_0);
 VAR_1->tx_nfree++;
}
