
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {scalar_t__ chim_index; scalar_t__ chim_size; int send_ctx; } ;
struct hn_tx_ring {int hn_chan; } ;
struct hn_nvs_rndis {scalar_t__ nvs_chim_idx; scalar_t__ nvs_chim_sz; int nvs_rndis_mtype; int nvs_type; } ;
typedef int rndis ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct hn_nvs_rndis*,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct hn_tx_ring *VAR_4, struct hn_txdesc *VAR_5)
{
 struct hn_nvs_rndis VAR_6;

 FUNC_0(VAR_5->chim_index != VAR_0 &&
     VAR_5->chim_size > 0, ("invalid rndis chim txd"));

 VAR_6.nvs_type = VAR_2;
 VAR_6.nvs_rndis_mtype = VAR_1;
 VAR_6.nvs_chim_idx = VAR_5->chim_index;
 VAR_6.nvs_chim_sz = VAR_5->chim_size;

 return (FUNC_1(VAR_4->hn_chan, VAR_3,
     &VAR_6, sizeof(VAR_6), &VAR_5->send_ctx));
}
