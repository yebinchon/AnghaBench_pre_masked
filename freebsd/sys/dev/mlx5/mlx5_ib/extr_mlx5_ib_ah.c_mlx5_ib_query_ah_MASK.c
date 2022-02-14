
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int stat_rate_sl; int rlid; int tclass; int hop_limit; int rgid; int grh_gid_fl; } ;
struct mlx5_ib_ah {TYPE_2__ av; } ;
struct TYPE_3__ {int sgid_index; int flow_label; int traffic_class; int hop_limit; int dgid; } ;
struct ib_ah_attr {int static_rate; int sl; int dlid; TYPE_1__ grh; int ah_flags; } ;
struct ib_ah {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 struct mlx5_ib_ah* FUNC_4 (struct ib_ah*) ;

int FUNC_5(struct ib_ah *VAR_1, struct ib_ah_attr *VAR_2)
{
 struct mlx5_ib_ah *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 VAR_4 = FUNC_1(VAR_3->av.grh_gid_fl);
 if (VAR_4 & (1 << 30)) {
  VAR_2->ah_flags = VAR_0;
  VAR_2->grh.sgid_index = (VAR_4 >> 20) & 0xff;
  VAR_2->grh.flow_label = VAR_4 & 0xfffff;
  FUNC_2(&VAR_2->grh.dgid, VAR_3->av.rgid, 16);
  VAR_2->grh.hop_limit = VAR_3->av.hop_limit;
  VAR_2->grh.traffic_class = VAR_3->av.tclass;
 }
 VAR_2->dlid = FUNC_0(VAR_3->av.rlid);
 VAR_2->static_rate = VAR_3->av.stat_rate_sl >> 4;
 VAR_2->sl = VAR_3->av.stat_rate_sl & 0xf;

 return 0;
}
