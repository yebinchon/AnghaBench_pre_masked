
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rndis_packet_msg {int rm_len; } ;
struct ifnet {int dummy; } ;
struct hn_txdesc {int chim_index; int chim_size; } ;
struct hn_tx_ring {int hn_agg_pktleft; int hn_agg_szleft; int hn_agg_pktmax; int hn_agg_szmax; struct rndis_packet_msg* hn_agg_prevpkt; struct hn_txdesc* hn_agg_txd; int hn_agg_align; TYPE_1__* hn_sc; int hn_tx_chimney; int hn_tx_chimney_tried; } ;
struct TYPE_2__ {int hn_chim_szmax; void* hn_chim; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ifnet*,struct hn_tx_ring*) ;
 int FUNC_4 (struct hn_txdesc*,struct hn_txdesc*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void *
FUNC_6(struct ifnet *VAR_1, struct hn_tx_ring *VAR_2, struct hn_txdesc *VAR_3,
    int VAR_4)
{
 void *VAR_5;

 if (VAR_2->hn_agg_txd != ((void*)0)) {
  if (VAR_2->hn_agg_pktleft >= 1 && VAR_2->hn_agg_szleft > VAR_4) {
   struct hn_txdesc *VAR_6 = VAR_2->hn_agg_txd;
   struct rndis_packet_msg *VAR_7 = VAR_2->hn_agg_prevpkt;
   int VAR_8;
   VAR_8 = VAR_7->rm_len;
   VAR_7->rm_len = FUNC_5(VAR_8, VAR_2->hn_agg_align);
   VAR_6->chim_size += VAR_7->rm_len - VAR_8;


   FUNC_4(VAR_6, VAR_3);

   VAR_5 = (uint8_t *)VAR_7 + VAR_7->rm_len;

   VAR_2->hn_agg_prevpkt = VAR_5;

   VAR_2->hn_agg_pktleft--;
   VAR_2->hn_agg_szleft -= VAR_4;
   if (VAR_2->hn_agg_szleft <=
       FUNC_0(VAR_2->hn_agg_align)) {




    VAR_2->hn_agg_pktleft = 0;
   }

   return (VAR_5);
  }
  FUNC_3(VAR_1, VAR_2);
 }
 FUNC_1(VAR_2->hn_agg_txd == ((void*)0), ("lingering aggregating txdesc"));

 VAR_2->hn_tx_chimney_tried++;
 VAR_3->chim_index = FUNC_2(VAR_2->hn_sc);
 if (VAR_3->chim_index == VAR_0)
  return (((void*)0));
 VAR_2->hn_tx_chimney++;

 VAR_5 = VAR_2->hn_sc->hn_chim +
     (VAR_3->chim_index * VAR_2->hn_sc->hn_chim_szmax);

 if (VAR_2->hn_agg_pktmax > 1 &&
     VAR_2->hn_agg_szmax > VAR_4 + FUNC_0(VAR_2->hn_agg_align)) {
  VAR_2->hn_agg_txd = VAR_3;
  VAR_2->hn_agg_pktleft = VAR_2->hn_agg_pktmax - 1;
  VAR_2->hn_agg_szleft = VAR_2->hn_agg_szmax - VAR_4;
  VAR_2->hn_agg_prevpkt = VAR_5;
 }
 return (VAR_5);
}
