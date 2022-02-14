
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int device; } ;
struct mlx4_ib_qp {TYPE_2__* sqp_proxy_rcv; TYPE_1__ ibqp; } ;
struct TYPE_6__ {int g_ml_path; int sl_vid; int slid_mac_47_32; int mac_31_0; int flags_src_qp; int pkey_index; } ;
struct mlx4_ib_proxy_sqp_hdr {TYPE_3__ tun; } ;
struct mlx4_ib_cq {int dummy; } ;
struct mlx4_cqe {int dummy; } ;
struct ib_wc {int pkey_index; int src_qp; int wc_flags; int vlan_id; int slid; scalar_t__ sl; int * smac; scalar_t__ dlid_path_bits; } ;
struct TYPE_5__ {scalar_t__ addr; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_ib_qp *VAR_4, struct mlx4_ib_cq *VAR_5, struct ib_wc *VAR_6,
       unsigned VAR_7, struct mlx4_cqe *VAR_8, int VAR_9)
{
 struct mlx4_ib_proxy_sqp_hdr *VAR_10;

 FUNC_2(VAR_4->ibqp.device,
       VAR_4->sqp_proxy_rcv[VAR_7].map,
       sizeof (struct mlx4_ib_proxy_sqp_hdr),
       VAR_0);
 VAR_10 = (struct mlx4_ib_proxy_sqp_hdr *) (VAR_4->sqp_proxy_rcv[VAR_7].addr);
 VAR_6->pkey_index = FUNC_0(VAR_10->tun.pkey_index);
 VAR_6->src_qp = FUNC_1(VAR_10->tun.flags_src_qp) & 0xFFFFFF;
 VAR_6->wc_flags |= (VAR_10->tun.g_ml_path & 0x80) ? (VAR_1) : 0;
 VAR_6->dlid_path_bits = 0;

 if (VAR_9) {
  VAR_6->vlan_id = FUNC_0(VAR_10->tun.sl_vid);
  FUNC_3(&(VAR_6->smac[0]), (char *)&VAR_10->tun.mac_31_0, 4);
  FUNC_3(&(VAR_6->smac[4]), (char *)&VAR_10->tun.slid_mac_47_32, 2);
  VAR_6->wc_flags |= (VAR_3 | VAR_2);
 } else {
  VAR_6->slid = FUNC_0(VAR_10->tun.slid_mac_47_32);
  VAR_6->sl = (u8) (FUNC_0(VAR_10->tun.sl_vid) >> 12);
 }
}
