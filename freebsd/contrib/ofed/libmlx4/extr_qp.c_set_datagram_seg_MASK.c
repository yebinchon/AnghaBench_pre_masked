
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_wqe_datagram_seg {int mac; int vlan; void* qkey; void* dqpn; int av; } ;
struct mlx4_av {int dummy; } ;
struct TYPE_4__ {int ah; int remote_qkey; int remote_qpn; } ;
struct TYPE_5__ {TYPE_1__ ud; } ;
struct ibv_send_wr {TYPE_2__ wr; } ;
struct TYPE_6__ {int * mac; int vlan; int av; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mlx4_wqe_datagram_seg *VAR_0,
        struct ibv_send_wr *VAR_1)
{
 FUNC_2(VAR_0->av, &FUNC_3(VAR_1->wr.ud.ah)->av, sizeof (struct mlx4_av));
 VAR_0->dqpn = FUNC_1(VAR_1->wr.ud.remote_qpn);
 VAR_0->qkey = FUNC_1(VAR_1->wr.ud.remote_qkey);
 VAR_0->vlan = FUNC_0(FUNC_3(VAR_1->wr.ud.ah)->vlan);
 FUNC_2(VAR_0->mac, FUNC_3(VAR_1->wr.ud.ah)->mac, 6);
}
