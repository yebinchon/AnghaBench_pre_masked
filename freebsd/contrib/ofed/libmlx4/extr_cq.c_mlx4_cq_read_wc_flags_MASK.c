
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cq {int flags; TYPE_1__* cqe; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_2__ {int owner_sr_opcode; int status; int g_mlpath_rqpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ibv_cq_ex *VAR_8)
{
 struct mlx4_cq *VAR_9 = FUNC_3(FUNC_2(VAR_8));
 int VAR_10 = VAR_9->cqe->owner_sr_opcode & VAR_4;
 int VAR_11 = 0;

 if (VAR_10) {
  switch (VAR_9->cqe->owner_sr_opcode & VAR_5) {
  case 132:
  case 131:
   VAR_11 |= VAR_2;
   break;
  }
 } else {
  if (VAR_9->flags & VAR_7)
   VAR_11 |= ((VAR_9->cqe->status &
    FUNC_1(VAR_6)) ==
    FUNC_1(VAR_6)) <<
    VAR_1;

  switch (VAR_9->cqe->owner_sr_opcode & VAR_5) {
  case 130:
  case 129:
   VAR_11 |= VAR_2;
   break;
  case 128:
   VAR_11 |= VAR_3;
   break;
  }
  VAR_11 |= (FUNC_0(VAR_9->cqe->g_mlpath_rqpn) & 0x80000000) ? VAR_0 : 0;
 }

 return VAR_11;
}
