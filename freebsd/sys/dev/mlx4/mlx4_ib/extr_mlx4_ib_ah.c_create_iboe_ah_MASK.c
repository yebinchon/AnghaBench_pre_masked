
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct ib_ah {int dummy; } ;
struct TYPE_12__ {int gid_index; int stat_rate; void* sl_tclass_flowlabel; struct in6_addr* dgid; int hop_limit; void* vlan; void* port_pd; struct in6_addr* s_mac; struct in6_addr* mac; } ;
struct TYPE_9__ {void* dlid; } ;
struct TYPE_13__ {TYPE_5__ eth; TYPE_2__ ib; } ;
struct mlx4_ib_ah {struct ib_ah ibah; TYPE_6__ av; } ;
struct TYPE_8__ {int stat_rate_support; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct in6_addr {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_gid_attr {scalar_t__ ndev; } ;
struct TYPE_10__ {int raw; } ;
struct TYPE_11__ {TYPE_3__ dgid; int hop_limit; int sgid_index; } ;
struct ib_ah_attr {int port_num; int sl; int static_rate; TYPE_4__ grh; int dmac; } ;
typedef int in6 ;
struct TYPE_14__ {int pdn; } ;


 struct ib_ah* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct in6_addr*) ;
 int FUNC_6 (int ,int,int ,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_7 (struct in6_addr*,int ,int) ;
 int FUNC_8 (struct mlx4_ib_dev*,int,int ) ;
 int FUNC_9 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_10 (struct in6_addr*) ;
 int FUNC_11 (scalar_t__) ;
 struct mlx4_ib_dev* FUNC_12 (int ) ;
 TYPE_7__* FUNC_13 (struct ib_pd*) ;

__attribute__((used)) static struct ib_ah *FUNC_14(struct ib_pd *VAR_3, struct ib_ah_attr *VAR_4,
        struct mlx4_ib_ah *VAR_5)
{
 struct mlx4_ib_dev *VAR_6 = FUNC_12(VAR_3->device);
 struct mlx4_dev *VAR_7 = VAR_6->dev;
 int VAR_8 = 0;
 struct in6_addr VAR_9;
 u16 VAR_10 = 0xffff;
 union ib_gid VAR_11;
 struct ib_gid_attr VAR_12;
 int VAR_13;

 FUNC_7(&VAR_9, VAR_4->grh.dgid.raw, sizeof(VAR_9));
 if (FUNC_10(&VAR_9)) {
  VAR_8 = 1;
  FUNC_9(&VAR_9, VAR_5->av.eth.mac);
 } else {
  FUNC_7(VAR_5->av.eth.mac, VAR_4->dmac, VAR_0);
 }
 VAR_13 = FUNC_6(VAR_3->device, VAR_4->port_num,
    VAR_4->grh.sgid_index, &VAR_11, &VAR_12);
 if (VAR_13)
  return FUNC_0(VAR_13);
 FUNC_5(VAR_5->av.eth.s_mac);
 if (VAR_12.ndev) {
  VAR_10 = FUNC_11(VAR_12.ndev);
  FUNC_7(VAR_5->av.eth.s_mac, FUNC_1(VAR_12.ndev), VAR_0);
  FUNC_4(VAR_12.ndev);
 }
 if (VAR_10 < 0x1000)
  VAR_10 |= (VAR_4->sl & 7) << 13;
 VAR_5->av.eth.port_pd = FUNC_3(FUNC_13(VAR_3)->pdn | (VAR_4->port_num << 24));
 VAR_13 = FUNC_8(VAR_6, VAR_4->port_num, VAR_4->grh.sgid_index);
 if (VAR_13 < 0)
  return FUNC_0(VAR_13);
 VAR_5->av.eth.gid_index = VAR_13;
 VAR_5->av.eth.vlan = FUNC_2(VAR_10);
 VAR_5->av.eth.hop_limit = VAR_4->grh.hop_limit;
 if (VAR_4->static_rate) {
  VAR_5->av.eth.stat_rate = VAR_4->static_rate + VAR_2;
  while (VAR_5->av.eth.stat_rate > VAR_1 + VAR_2 &&
         !(1 << VAR_5->av.eth.stat_rate & VAR_7->caps.stat_rate_support))
   --VAR_5->av.eth.stat_rate;
 }




 if (VAR_8)
  VAR_5->av.ib.dlid = FUNC_2(0xc000);

 FUNC_7(VAR_5->av.eth.dgid, VAR_4->grh.dgid.raw, 16);
 VAR_5->av.eth.sl_tclass_flowlabel = FUNC_3(VAR_4->sl << 29);

 return &VAR_5->ibah;
}
