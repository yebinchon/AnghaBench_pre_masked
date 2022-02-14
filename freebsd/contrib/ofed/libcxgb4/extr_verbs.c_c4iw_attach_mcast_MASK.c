
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint16_t ;
struct ibv_qp {int dummy; } ;
struct c4iw_qp {int lock; int wq; } ;


 int FUNC_0 (struct c4iw_qp*) ;
 int FUNC_1 (struct ibv_qp*,union ibv_gid const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct c4iw_qp* FUNC_5 (struct ibv_qp*) ;

int FUNC_6(struct ibv_qp *VAR_0, const union ibv_gid *VAR_1,
        uint16_t VAR_2)
{
 struct c4iw_qp *VAR_3 = FUNC_5(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 if (FUNC_4(&VAR_3->wq))
  FUNC_0(VAR_3);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_3->lock);
 return VAR_4;
}
