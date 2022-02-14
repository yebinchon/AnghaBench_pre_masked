
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_17__ {int method; int mgmt_class; int tid; } ;
struct TYPE_21__ {TYPE_3__ mad_hdr; } ;
struct TYPE_19__ {int qkey; int remote_qpn; int pkey_index; int vlan; int * mac; int av; } ;
struct mlx4_tunnel_mad {TYPE_9__ mad; TYPE_5__ hdr; } ;
struct mlx4_ib_dev {TYPE_6__* dev; } ;
struct mlx4_ib_demux_pv_qp {TYPE_2__* ring; } ;
struct mlx4_ib_demux_pv_ctx {int port; int slave; int ib_dev; struct mlx4_ib_demux_pv_qp* qp; } ;
struct TYPE_13__ {int device; } ;
struct TYPE_18__ {int port_pd; } ;
struct TYPE_14__ {TYPE_4__ ib; } ;
struct mlx4_ib_ah {TYPE_10__ ibah; TYPE_12__ av; } ;
struct mlx4_av {int dummy; } ;
struct ib_wc {int wr_id; int src_qp; int smac; } ;
struct ib_sa_mad {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_ah_attr {int ah_flags; int sl; TYPE_12__* dmac; } ;
struct TYPE_15__ {int base_proxy_sqpn; } ;
struct TYPE_20__ {TYPE_1__ phys_caps; } ;
struct TYPE_16__ {int map; struct mlx4_tunnel_mad* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_ib_dev*,int,int,struct ib_ah_attr*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct mlx4_ib_dev*,int,int) ;
 int FUNC_7 (TYPE_12__*,int *,int) ;
 int FUNC_8 (TYPE_6__*,int,int,int *,int *) ;
 int FUNC_9 (int ,int,int,struct ib_mad*) ;
 int FUNC_10 (int ,int,int,struct ib_sa_mad*) ;
 int FUNC_11 (TYPE_10__*,struct ib_ah_attr*) ;
 int FUNC_12 (struct mlx4_ib_dev*,int,int,int ,int ,int,int,struct ib_ah_attr*,int ,int ,TYPE_9__*) ;
 int FUNC_13 (int ,char*,int,...) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*,int,int) ;
 int FUNC_16 (TYPE_6__*,int,int) ;
 struct mlx4_ib_dev* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct mlx4_ib_demux_pv_ctx *VAR_6, struct ib_wc *VAR_7)
{
 struct mlx4_ib_dev *VAR_8 = FUNC_17(VAR_6->ib_dev);
 struct mlx4_ib_demux_pv_qp *VAR_9 = &VAR_6->qp[FUNC_0(VAR_7->wr_id)];
 int VAR_10 = VAR_7->wr_id & (VAR_5 - 1);
 struct mlx4_tunnel_mad *VAR_11 = VAR_9->ring[VAR_10].addr;
 struct mlx4_ib_ah VAR_12;
 struct ib_ah_attr VAR_13;
 u8 *VAR_14;
 int VAR_15;
 int VAR_16;
 u16 VAR_17;


 if (VAR_7->src_qp < VAR_8->dev->phys_caps.base_proxy_sqpn ||
     VAR_7->src_qp >= VAR_8->dev->phys_caps.base_proxy_sqpn + 8 * VAR_4 ||
     (VAR_7->src_qp & 0x1) != VAR_6->port - 1 ||
     VAR_7->src_qp & 0x4) {
  FUNC_13(VAR_6->ib_dev, "can't multiplex bad sqp:%d\n", VAR_7->src_qp);
  return;
 }
 VAR_15 = ((VAR_7->src_qp & ~0x7) - VAR_8->dev->phys_caps.base_proxy_sqpn) / 8;
 if (VAR_15 != VAR_6->slave) {
  FUNC_13(VAR_6->ib_dev, "can't multiplex bad sqp:%d: "
        "belongs to another slave\n", VAR_7->src_qp);
  return;
 }


 FUNC_5(VAR_6->ib_dev, VAR_9->ring[VAR_10].map,
       sizeof (struct mlx4_tunnel_mad),
       VAR_0);
 switch (VAR_11->mad.mad_hdr.method) {
 case 132:
 case 134:
 case 133:
 case 129:
 case 131:
 case 130:
 case 128:
  VAR_14 = (u8 *) &VAR_11->mad.mad_hdr.tid;
  if (*VAR_14) {
   FUNC_13(VAR_6->ib_dev, "egress mad has non-null tid msb:%d "
         "class:%d slave:%d\n", *VAR_14,
         VAR_11->mad.mad_hdr.mgmt_class, VAR_15);
   return;
  } else
   *VAR_14 = VAR_15;
 default:
               ;
 }


 switch (VAR_11->mad.mad_hdr.mgmt_class) {
 case 135:
 case 136:
  if (VAR_15 != FUNC_14(VAR_8->dev) &&
      !FUNC_16(VAR_8->dev, VAR_15, VAR_6->port))
   return;
  break;
 case 137:
  if (FUNC_10(VAR_6->ib_dev, VAR_6->port, VAR_15,
         (struct ib_sa_mad *) &VAR_11->mad))
   return;
  break;
 case 139:
  if (FUNC_9(VAR_6->ib_dev, VAR_6->port, VAR_15,
         (struct ib_mad *) &VAR_11->mad))
   return;
  break;
 case 138:
  if (VAR_11->mad.mad_hdr.method != 134 &&
      VAR_11->mad.mad_hdr.method != 132)
   return;
  break;
 default:

  if (VAR_15 != FUNC_14(VAR_8->dev)) {
   FUNC_13(VAR_6->ib_dev, "dropping unsupported egress mad from class:%d "
         "for slave:%d\n", VAR_11->mad.mad_hdr.mgmt_class, VAR_15);
   return;
  }
 }



 FUNC_7(&VAR_12.av, &VAR_11->hdr.av, sizeof (struct mlx4_av));
 VAR_12.ibah.device = VAR_6->ib_dev;

 VAR_16 = FUNC_2(VAR_12.av.ib.port_pd) >> 24;
 VAR_16 = FUNC_15(VAR_8->dev, VAR_15, VAR_16);
 if (VAR_16 < 0)
  return;
 VAR_12.av.ib.port_pd = FUNC_3(VAR_16 << 24 | (FUNC_2(VAR_12.av.ib.port_pd) & 0xffffff));

 FUNC_11(&VAR_12.ibah, &VAR_13);
 if (VAR_13.ah_flags & VAR_1)
  FUNC_4(VAR_8, VAR_15, VAR_6->port, &VAR_13);

 FUNC_7(VAR_13.dmac, VAR_11->hdr.mac, 6);
 VAR_17 = FUNC_1(VAR_11->hdr.vlan);

 FUNC_8(VAR_8->dev, VAR_6->port, VAR_15,
        &VAR_17, &VAR_13.sl);

 FUNC_12(VAR_8, VAR_15, VAR_6->port,
        FUNC_6(VAR_8, VAR_7->src_qp, VAR_15) ?
        VAR_3 : VAR_2,
        FUNC_1(VAR_11->hdr.pkey_index),
        FUNC_2(VAR_11->hdr.remote_qpn),
        FUNC_2(VAR_11->hdr.qkey),
        &VAR_13, VAR_7->smac, VAR_17, &VAR_11->mad);
}
