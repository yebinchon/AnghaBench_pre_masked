
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_write_array {int wc_nchunks; int wc_discrim; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1(struct rpcrdma_write_array *VAR_1,
     int VAR_2)
{
 VAR_1->wc_discrim = VAR_0;
 VAR_1->wc_nchunks = FUNC_0(VAR_2);
}
