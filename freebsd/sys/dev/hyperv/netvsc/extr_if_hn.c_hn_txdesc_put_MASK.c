
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {int flags; scalar_t__ refs; scalar_t__ chim_index; scalar_t__ chim_size; int * m; int data_dmap; int agg_list; } ;
struct hn_tx_ring {scalar_t__ hn_txdesc_avail; scalar_t__ hn_txdesc_cnt; int hn_txdesc_br; int hn_txlist_spin; int hn_txlist; int hn_tx_data_dtag; int hn_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct hn_txdesc*,int ) ;
 int FUNC_2 (int *) ;
 struct hn_txdesc* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ,struct hn_txdesc*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static __inline int
FUNC_14(struct hn_tx_ring *VAR_7, struct hn_txdesc *VAR_8)
{

 FUNC_0((VAR_8->flags & VAR_4) == 0,
     ("put an onlist txd %#x", VAR_8->flags));
 FUNC_0((VAR_8->flags & VAR_3) == 0,
     ("put an onagg txd %#x", VAR_8->flags));

 FUNC_0(VAR_8->refs > 0, ("invalid txd refs %d", VAR_8->refs));
 if (FUNC_6(&VAR_8->refs, -1) != 1)
  return 0;

 if (!FUNC_2(&VAR_8->agg_list)) {
  struct hn_txdesc *VAR_9;

  while ((VAR_9 = FUNC_3(&VAR_8->agg_list)) != ((void*)0)) {
   int VAR_10;

   FUNC_0(FUNC_2(&VAR_9->agg_list),
       ("resursive aggregation on aggregated txdesc"));
   FUNC_0((VAR_9->flags & VAR_3),
       ("not aggregated txdesc"));
   FUNC_0((VAR_9->flags & VAR_2) == 0,
       ("aggregated txdesc uses dmamap"));
   FUNC_0(VAR_9->chim_index == VAR_1,
       ("aggregated txdesc consumes "
        "chimney sending buffer"));
   FUNC_0(VAR_9->chim_size == 0,
       ("aggregated txdesc has non-zero "
        "chimney sending size"));

   FUNC_4(&VAR_8->agg_list, VAR_5);
   VAR_9->flags &= ~VAR_3;
   VAR_10 = FUNC_14(VAR_7, VAR_9);
   FUNC_0(VAR_10, ("failed to free aggregated txdesc"));
  }
 }

 if (VAR_8->chim_index != VAR_1) {
  FUNC_0((VAR_8->flags & VAR_2) == 0,
      ("chim txd uses dmamap"));
  FUNC_10(VAR_7->hn_sc, VAR_8->chim_index);
  VAR_8->chim_index = VAR_1;
  VAR_8->chim_size = 0;
 } else if (VAR_8->flags & VAR_2) {
  FUNC_8(VAR_7->hn_tx_data_dtag,
      VAR_8->data_dmap, VAR_0);
  FUNC_9(VAR_7->hn_tx_data_dtag,
      VAR_8->data_dmap);
  VAR_8->flags &= ~VAR_2;
 }

 if (VAR_8->m != ((void*)0)) {
  FUNC_11(VAR_8->m);
  VAR_8->m = ((void*)0);
 }

 VAR_8->flags |= VAR_4;

 FUNC_12(&VAR_7->hn_txlist_spin);
 FUNC_0(VAR_7->hn_txdesc_avail >= 0 &&
     VAR_7->hn_txdesc_avail < VAR_7->hn_txdesc_cnt,
     ("txdesc_put: invalid txd avail %d", VAR_7->hn_txdesc_avail));
 VAR_7->hn_txdesc_avail++;
 FUNC_1(&VAR_7->hn_txlist, VAR_8, VAR_6);
 FUNC_13(&VAR_7->hn_txlist_spin);







 return 1;
}
