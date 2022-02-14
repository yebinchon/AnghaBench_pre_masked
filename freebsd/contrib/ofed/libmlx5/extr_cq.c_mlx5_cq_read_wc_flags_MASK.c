
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_cq {int flags; TYPE_1__* cqe64; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_3__ {int hds_ip_ext; int flags_rqpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ibv_cq_ex*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct mlx5_cq* FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct ibv_cq_ex *VAR_8)
{
 struct mlx5_cq *VAR_9 = FUNC_4(FUNC_2(VAR_8));
 int VAR_10 = 0;

 if (VAR_9->flags & VAR_7)
  VAR_10 = (!!(VAR_9->cqe64->hds_ip_ext & VAR_6) &
     !!(VAR_9->cqe64->hds_ip_ext & VAR_5) &
     (FUNC_1(VAR_9->cqe64) ==
      VAR_4)) <<
    VAR_1;

 switch (FUNC_3(VAR_9->cqe64)) {
 case 128:
 case 130:
  VAR_10 |= VAR_2;
  break;
 case 129:
  VAR_10 |= VAR_3;
  break;
 }

 VAR_10 |= ((FUNC_0(VAR_9->cqe64->flags_rqpn) >> 28) & 3) ? VAR_0 : 0;
 return VAR_10;
}
