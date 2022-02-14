
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_sp_obj {int func_id; int cl_id; } ;
struct ecore_general_setup_params {int fp_hsi; int cos; int mtu; int spcl_id; int stat_id; } ;
struct client_init_general_data {int statistics_en_flg; int cos; void* activate_flg; int fp_hsi_ver; int traffic_type; int func_id; int mtu; int sp_client_id; void* is_fcoe_flg; int statistics_counter_id; void* statistics_zero_flg; int client_id; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bxe_softc*,char*,void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int ,unsigned long*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_7,
    struct ecore_queue_sp_obj *VAR_8,
    struct ecore_general_setup_params *VAR_9,
    struct client_init_general_data *VAR_10,
    unsigned long *VAR_11)
{
 VAR_10->client_id = VAR_8->cl_id;

 if (FUNC_2(VAR_3, VAR_11)) {
  VAR_10->statistics_counter_id =
     VAR_9->stat_id;
  VAR_10->statistics_en_flg = 1;
  VAR_10->statistics_zero_flg =
   FUNC_2(VAR_4, VAR_11);
 } else
  VAR_10->statistics_counter_id =
     VAR_0;

 VAR_10->is_fcoe_flg = FUNC_2(VAR_2,
         VAR_11);
 VAR_10->activate_flg = FUNC_2(VAR_1,
          VAR_11);
 VAR_10->sp_client_id = VAR_9->spcl_id;
 VAR_10->mtu = FUNC_0(VAR_9->mtu);
 VAR_10->func_id = VAR_8->func_id;

 VAR_10->cos = VAR_9->cos;

 VAR_10->traffic_type =
  FUNC_2(VAR_2, VAR_11) ?
  VAR_5 : VAR_6;

 VAR_10->fp_hsi_ver = VAR_9->fp_hsi;

 FUNC_1(VAR_7, "flags: active %d, cos %d, stats en %d\n",
    VAR_10->activate_flg, VAR_10->cos, VAR_10->statistics_en_flg);
}
