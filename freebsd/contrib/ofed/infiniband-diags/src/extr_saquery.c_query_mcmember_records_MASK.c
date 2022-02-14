
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sa_handle {int dummy; } ;
struct query_params {int proxy_join; int join_state; int scope; int hop_limit; int flow_label; int sl; int pkey; int tclass; int pkt_life; int rate; int mtu; int qkey; int mlid; int gid; int mgid; } ;
struct query_cmd {int dummy; } ;
typedef int mr ;
typedef int ib_net64_t ;
struct TYPE_4__ {int mlid; int qkey; int tclass; int pkey; int scope_state; int proxy_join; int sl_flow_hop; int pkt_life; int rate; int mtu; int port_gid; int mgid; } ;
typedef TYPE_1__ ib_member_rec_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int) ;
 int VAR_18 ;
 int FUNC_4 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_7(const struct query_cmd *VAR_19,
      struct sa_handle * VAR_20, struct query_params *VAR_21,
      int VAR_22, char *VAR_23[])
{
 ib_member_rec_t VAR_24;
 ib_net64_t VAR_25 = 0;
 uint32_t VAR_26 = 0;
 uint8_t VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;

 FUNC_6(&VAR_24, 0, sizeof(VAR_24));
 FUNC_0(VAR_21->mgid, VAR_24.mgid, VAR_5, VAR_6);
 FUNC_0(VAR_21->gid, VAR_24.port_gid, VAR_5, VAR_10);
 FUNC_1(VAR_21->mlid, 16, 0, VAR_24.mlid, VAR_5, VAR_7);
 FUNC_1(VAR_21->qkey, 32, 0, VAR_24.qkey, VAR_5, VAR_12);
 FUNC_2(VAR_21->mtu, VAR_24.mtu, VAR_5, VAR_8, VAR_17);
 FUNC_2(VAR_21->rate, VAR_24.rate, VAR_5, VAR_13, VAR_17);
 FUNC_2(VAR_21->pkt_life, VAR_24.pkt_life, VAR_5, VAR_4, VAR_17);
 FUNC_1(VAR_21->tclass, 8, 0, VAR_24.tclass, VAR_5, VAR_16);
 FUNC_1(VAR_21->pkey, 16, 0, VAR_24.pkey, VAR_5, VAR_9);
 FUNC_1(VAR_21->sl, 8, -1, VAR_27, VAR_5, VAR_15);
 FUNC_1(VAR_21->flow_label, 32, 0, VAR_26, VAR_5, VAR_0);
 FUNC_1(VAR_21->hop_limit, 8, 0, VAR_28, VAR_5, VAR_1);

 VAR_24.sl_flow_hop = FUNC_5(VAR_27, FUNC_3(VAR_26), VAR_28);
 FUNC_1(VAR_21->scope, 8, 0, VAR_29, VAR_5, VAR_14);
 FUNC_1(VAR_21->join_state, 8, 0, VAR_24.scope_state, VAR_5, VAR_3);
 VAR_24.scope_state |= VAR_29 << 4;
 FUNC_1(VAR_21->proxy_join, 8, -1, VAR_24.proxy_join, VAR_5, VAR_11);

 return FUNC_4(VAR_20, VAR_2, 0, VAR_25,
     &VAR_24, sizeof(VAR_24), VAR_18, VAR_21);
}
