
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct mlx5_create_ah_resp {int dmac; int ibv_resp; } ;
struct mlx5_context {int num_ports; scalar_t__* cached_link_layer; int cmds_supp_uhw; } ;
struct ibv_ah {int dummy; } ;
struct TYPE_6__ {int fl_mlid; int stat_rate_sl; int rmac; int rgid; scalar_t__ grh_gid_fl; int hop_limit; int tclass; void* rlid; } ;
struct mlx5_ah {int kern_ah; struct ibv_ah ibv_ah; TYPE_3__ av; } ;
struct ibv_port_attr {scalar_t__ link_layer; } ;
struct ibv_pd {int context; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {int sgid_index; int flow_label; TYPE_1__ dgid; int hop_limit; int traffic_class; } ;
struct ibv_ah_attr {int port_num; int src_path_bits; int dlid; int static_rate; int sl; TYPE_2__ grh; scalar_t__ is_global; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mlx5_ah* FUNC_0 (int,int) ;
 int VAR_7 ;
 int FUNC_1 (struct mlx5_ah*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ibv_pd*,struct ibv_ah*,struct ibv_ah_attr*,int *,int) ;
 scalar_t__ FUNC_5 (int ,int,int,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int,struct ibv_port_attr*) ;
 scalar_t__ FUNC_7 (int ,struct ibv_ah_attr*,int ,int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 struct mlx5_context* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

struct ibv_ah *FUNC_12(struct ibv_pd *VAR_8, struct ibv_ah_attr *VAR_9)
{
 struct mlx5_context *VAR_10 = FUNC_10(VAR_8->context);
 struct ibv_port_attr VAR_11;
 struct mlx5_ah *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;
 int VAR_16;

 if (VAR_9->port_num < 1 || VAR_9->port_num > VAR_10->num_ports)
  return ((void*)0);

 if (VAR_10->cached_link_layer[VAR_9->port_num - 1]) {
  VAR_16 = VAR_10->cached_link_layer[VAR_9->port_num - 1] ==
   VAR_3;
 } else {
  if (FUNC_6(VAR_8->context, VAR_9->port_num, &VAR_11))
   return ((void*)0);

  VAR_16 = (VAR_11.link_layer == VAR_3);
 }

 if (FUNC_11((!VAR_9->is_global) && VAR_16)) {
  VAR_7 = VAR_0;
  return ((void*)0);
 }

 VAR_12 = FUNC_0(1, sizeof *VAR_12);
 if (!VAR_12)
  return ((void*)0);

 if (VAR_16) {
  if (FUNC_5(VAR_8->context, VAR_9->port_num,
           VAR_9->grh.sgid_index, &VAR_13))
   goto err;

  if (VAR_13 == VAR_2)
   VAR_12->av.rlid = FUNC_2(FUNC_9() % (VAR_5 + 1
            - VAR_6)
         + VAR_6);



  VAR_15 = 0;
 } else {
  VAR_12->av.fl_mlid = VAR_9->src_path_bits & 0x7f;
  VAR_12->av.rlid = FUNC_2(VAR_9->dlid);
  VAR_15 = 1;
 }
 VAR_12->av.stat_rate_sl = (VAR_9->static_rate << 4) | VAR_9->sl;
 if (VAR_9->is_global) {
  VAR_12->av.tclass = VAR_9->grh.traffic_class;
  VAR_12->av.hop_limit = VAR_9->grh.hop_limit;
  VAR_14 = FUNC_3((VAR_15 << 30) |
       ((VAR_9->grh.sgid_index & 0xff) << 20) |
       (VAR_9->grh.flow_label & 0xfffff));
  VAR_12->av.grh_gid_fl = VAR_14;
  FUNC_8(VAR_12->av.rgid, VAR_9->grh.dgid.raw, 16);
 }

 if (VAR_16) {
  if (VAR_10->cmds_supp_uhw & VAR_4) {
   struct mlx5_create_ah_resp VAR_17 = {};

   if (FUNC_4(VAR_8, &VAR_12->ibv_ah, VAR_9, &VAR_17.ibv_resp, sizeof(VAR_17)))
    goto err;

   VAR_12->kern_ah = 1;
   FUNC_8(VAR_12->av.rmac, VAR_17.dmac, VAR_1);
  } else {
   uint16_t VAR_18;

   if (FUNC_7(VAR_8->context, VAR_9,
       VAR_12->av.rmac, &VAR_18))
    goto err;
  }
 }

 return &VAR_12->ibv_ah;
err:
 FUNC_1(VAR_12);
 return ((void*)0);
}
