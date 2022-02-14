
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfssockreq {int nr_mtx; int * nr_client; } ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nfssockreq *VAR_0)
{
 CLIENT *VAR_1;

 FUNC_2(&VAR_0->nr_mtx);
 if (VAR_0->nr_client != ((void*)0)) {
  VAR_1 = VAR_0->nr_client;
  VAR_0->nr_client = ((void*)0);
  FUNC_3(&VAR_0->nr_mtx);
  FUNC_4(VAR_1);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 } else {
  FUNC_3(&VAR_0->nr_mtx);
 }
}
