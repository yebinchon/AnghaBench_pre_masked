
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* qkey; } ;
struct TYPE_8__ {TYPE_1__ qkey; } ;
struct TYPE_12__ {TYPE_2__ key; void* dqp_dct; } ;
struct mlx5_wqe_datagram_seg {TYPE_6__ av; } ;
struct TYPE_9__ {int remote_qpn; int remote_qkey; int ah; } ;
struct TYPE_10__ {TYPE_3__ ud; } ;
struct ibv_send_wr {TYPE_4__ wr; } ;
struct TYPE_11__ {int av; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int *,int) ;
 TYPE_5__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_wqe_datagram_seg *VAR_1,
        struct ibv_send_wr *VAR_2)
{
 FUNC_1(&VAR_1->av, &FUNC_2(VAR_2->wr.ud.ah)->av, sizeof VAR_1->av);
 VAR_1->av.dqp_dct = FUNC_0(VAR_2->wr.ud.remote_qpn | VAR_0);
 VAR_1->av.key.qkey.qkey = FUNC_0(VAR_2->wr.ud.remote_qkey);
}
