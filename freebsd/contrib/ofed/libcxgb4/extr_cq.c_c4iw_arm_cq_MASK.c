
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq {int dummy; } ;
struct c4iw_cq {int lock; int cq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 struct c4iw_cq* FUNC_4 (struct ibv_cq*) ;

int FUNC_5(struct ibv_cq *VAR_1, int VAR_2)
{
 struct c4iw_cq *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_4(VAR_1);
 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_3(&VAR_3->cq, VAR_2);
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
