
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sa_handle {int dummy; } ;
struct query_params {int service_id; int slid; int dlid; int hop_limit; int flow_label; int tclass; int reversible; int numb_path; int pkey; int sl; int qos_class; int pkt_life; int rate; int mtu; int dgid; int sgid; } ;
struct query_cmd {int dummy; } ;
typedef int pr ;
struct TYPE_4__ {int service_id; int slid; int dlid; int hop_flow_raw; int tclass; int num_path; int pkey; int qos_class_sl; int pkt_life; int rate; int mtu; int dgid; int sgid; } ;
typedef TYPE_1__ ib_path_rec_t ;
typedef int ib_net64_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int,int,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int) ;
 int VAR_20 ;
 int FUNC_5 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_7(const struct query_cmd *VAR_21, struct sa_handle * VAR_22,
         struct query_params *VAR_23, int VAR_24, char *VAR_25[])
{
 ib_path_rec_t VAR_26;
 ib_net64_t VAR_27 = 0;
 uint32_t VAR_28 = 0;
 uint16_t VAR_29 = 0;
 uint8_t VAR_30 = 0;

 FUNC_6(&VAR_26, 0, sizeof(VAR_26));
 FUNC_1(VAR_23->service_id, 64, 0, VAR_26.service_id, VAR_10, VAR_15);
 FUNC_0(VAR_23->sgid, VAR_26.sgid, VAR_10, VAR_16);
 FUNC_0(VAR_23->dgid, VAR_26.dgid, VAR_10, VAR_0);
 FUNC_1(VAR_23->slid, 16, 0, VAR_26.slid, VAR_10, VAR_18);
 FUNC_1(VAR_23->dlid, 16, 0, VAR_26.dlid, VAR_10, VAR_1);
 FUNC_1(VAR_23->hop_limit, 32, -1, VAR_26.hop_flow_raw, VAR_10, VAR_3);
 FUNC_1((VAR_23->flow_label << 8), 32, 0, VAR_28, VAR_10, VAR_2);
 VAR_26.hop_flow_raw =
  (VAR_26.hop_flow_raw & FUNC_4(~0x0FFFFF00)) | VAR_28;
 FUNC_1(VAR_23->tclass, 8, 0, VAR_26.tclass, VAR_10, VAR_19);
 FUNC_1(VAR_23->reversible, 8, -1, VAR_30, VAR_10, VAR_13);
 FUNC_1(VAR_23->numb_path, 8, -1, VAR_26.num_path, VAR_10, VAR_7);
 VAR_26.num_path |= VAR_30 << 7;
 FUNC_1(VAR_23->pkey, 16, 0, VAR_26.pkey, VAR_10, VAR_8);
 FUNC_1(VAR_23->sl, 16, -1, VAR_26.qos_class_sl, VAR_10, VAR_17);
 FUNC_1((VAR_23->qos_class << 4), 16, -1, VAR_29, VAR_10, VAR_11);
 VAR_26.qos_class_sl = (VAR_26.qos_class_sl & FUNC_3(VAR_4)) |
     VAR_29;
 FUNC_2(VAR_23->mtu, VAR_26.mtu, VAR_10, VAR_6, VAR_14);
 FUNC_2(VAR_23->rate, VAR_26.rate, VAR_10, VAR_12, VAR_14);
 FUNC_2(VAR_23->pkt_life, VAR_26.pkt_life, VAR_10, VAR_9,
      VAR_14);

 return FUNC_5(VAR_22, VAR_5, 0, VAR_27,
     &VAR_26, sizeof(VAR_26), VAR_20, VAR_23);
}
