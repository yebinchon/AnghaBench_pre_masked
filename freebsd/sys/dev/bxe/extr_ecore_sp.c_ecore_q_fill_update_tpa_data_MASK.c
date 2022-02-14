
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpa_update_ramrod_data {int update_ipv6; int update_ipv4; int tpa_mode; void* sge_pause_thr_low; void* sge_pause_thr_high; void* sge_page_base_lo; void* sge_page_base_hi; void* sge_buff_size; int max_tpa_queues; int max_sges_for_packet; void* max_agg_size; int dont_verify_rings_pause_thr_flg; int complete_on_both_clients; int client_id; } ;
struct ecore_queue_update_tpa_params {int update_ipv6; int update_ipv4; int tpa_mode; int sge_pause_thr_low; int sge_pause_thr_high; int sge_map; int sge_buff_sz; int max_tpa_queues; int max_sges_pkt; int max_agg_sz; int dont_verify_thr; int complete_on_both_clients; } ;
struct ecore_queue_sp_obj {int cl_id; } ;
struct bxe_softc {int dummy; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_0,
    struct ecore_queue_sp_obj *VAR_1,
    struct ecore_queue_update_tpa_params *VAR_2,
    struct tpa_update_ramrod_data *VAR_3)
{
 VAR_3->client_id = VAR_1->cl_id;
 VAR_3->complete_on_both_clients = VAR_2->complete_on_both_clients;
 VAR_3->dont_verify_rings_pause_thr_flg =
  VAR_2->dont_verify_thr;
 VAR_3->max_agg_size = FUNC_0(VAR_2->max_agg_sz);
 VAR_3->max_sges_for_packet = VAR_2->max_sges_pkt;
 VAR_3->max_tpa_queues = VAR_2->max_tpa_queues;
 VAR_3->sge_buff_size = FUNC_0(VAR_2->sge_buff_sz);
 VAR_3->sge_page_base_hi = FUNC_1(FUNC_2(VAR_2->sge_map));
 VAR_3->sge_page_base_lo = FUNC_1(FUNC_3(VAR_2->sge_map));
 VAR_3->sge_pause_thr_high = FUNC_0(VAR_2->sge_pause_thr_high);
 VAR_3->sge_pause_thr_low = FUNC_0(VAR_2->sge_pause_thr_low);
 VAR_3->tpa_mode = VAR_2->tpa_mode;
 VAR_3->update_ipv4 = VAR_2->update_ipv4;
 VAR_3->update_ipv6 = VAR_2->update_ipv6;
}
