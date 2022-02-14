
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* qkey; } ;
struct TYPE_6__ {TYPE_2__ qkey; } ;
struct TYPE_10__ {TYPE_1__ key; void* dqp_dct; } ;
struct mlx5_wqe_datagram_seg {TYPE_5__ av; } ;
struct mlx5_av {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_9__ {int av; } ;
struct TYPE_8__ {int remote_qpn; int remote_qkey; int ah; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int *,int) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_wqe_datagram_seg *VAR_1,
        struct ib_send_wr *VAR_2)
{
 FUNC_1(&VAR_1->av, &FUNC_2(FUNC_3(VAR_2)->ah)->av, sizeof(struct mlx5_av));
 VAR_1->av.dqp_dct = FUNC_0(FUNC_3(VAR_2)->remote_qpn | VAR_0);
 VAR_1->av.key.qkey.qkey = FUNC_0(FUNC_3(VAR_2)->remote_qkey);
}
