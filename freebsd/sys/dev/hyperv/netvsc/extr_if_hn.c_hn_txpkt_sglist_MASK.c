
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {scalar_t__ chim_index; scalar_t__ chim_size; int send_ctx; } ;
struct hn_tx_ring {int hn_gpa_cnt; int hn_gpa; int hn_chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct hn_tx_ring *VAR_2, struct hn_txdesc *VAR_3)
{

 FUNC_0(VAR_3->chim_index == VAR_0 &&
     VAR_3->chim_size == 0, ("invalid rndis sglist txd"));
 return (FUNC_1(VAR_2->hn_chan, VAR_1,
     &VAR_3->send_ctx, VAR_2->hn_gpa, VAR_2->hn_gpa_cnt));
}
