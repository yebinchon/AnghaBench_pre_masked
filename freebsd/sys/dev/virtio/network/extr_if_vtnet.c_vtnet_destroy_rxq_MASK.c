
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_rxq {int vtnrx_id; int vtnrx_mtx; int * vtnrx_sg; int * vtnrx_sc; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vtnet_rxq *VAR_0)
{

 VAR_0->vtnrx_sc = ((void*)0);
 VAR_0->vtnrx_id = -1;

 if (VAR_0->vtnrx_sg != ((void*)0)) {
  FUNC_2(VAR_0->vtnrx_sg);
  VAR_0->vtnrx_sg = ((void*)0);
 }

 if (FUNC_1(&VAR_0->vtnrx_mtx) != 0)
  FUNC_0(&VAR_0->vtnrx_mtx);
}
