
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct hn_txdesc {scalar_t__ chim_index; int flags; int data_dmap; } ;
struct hn_tx_ring {int hn_tx_data_dtag; int hn_tx_collapsed; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,struct mbuf*,int *,int*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct mbuf* FUNC_3 (struct mbuf*,int ,int ) ;

__attribute__((used)) static __inline int
FUNC_4(struct hn_tx_ring *VAR_8, struct hn_txdesc *VAR_9,
    struct mbuf **VAR_10, bus_dma_segment_t *VAR_11, int *VAR_12)
{
 struct mbuf *VAR_13 = *VAR_10;
 int VAR_14;

 FUNC_0(VAR_9->chim_index == VAR_4, ("txd uses chim"));

 VAR_14 = FUNC_1(VAR_8->hn_tx_data_dtag, VAR_9->data_dmap,
     VAR_13, VAR_11, VAR_12, VAR_1);
 if (VAR_14 == VAR_2) {
  struct mbuf *VAR_15;

  VAR_15 = FUNC_3(VAR_13, VAR_7, VAR_6);
  if (VAR_15 == ((void*)0))
   return VAR_3;
  else
   *VAR_10 = VAR_13 = VAR_15;
  VAR_8->hn_tx_collapsed++;

  VAR_14 = FUNC_1(VAR_8->hn_tx_data_dtag,
      VAR_9->data_dmap, VAR_13, VAR_11, VAR_12, VAR_1);
 }
 if (!VAR_14) {
  FUNC_2(VAR_8->hn_tx_data_dtag, VAR_9->data_dmap,
      VAR_0);
  VAR_9->flags |= VAR_5;
 }
 return VAR_14;
}
