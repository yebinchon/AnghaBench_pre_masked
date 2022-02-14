
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {int refs; scalar_t__ chim_index; scalar_t__ chim_size; int flags; int agg_list; int * m; } ;
struct hn_tx_ring {scalar_t__ hn_txdesc_avail; int hn_txdesc_br; int hn_txlist_spin; int hn_txlist; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 struct hn_txdesc* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int) ;
 struct hn_txdesc* FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static __inline struct hn_txdesc *
FUNC_8(struct hn_tx_ring *VAR_5)
{
 struct hn_txdesc *VAR_6;


 FUNC_6(&VAR_5->hn_txlist_spin);
 VAR_6 = FUNC_1(&VAR_5->hn_txlist);
 if (VAR_6 != ((void*)0)) {
  FUNC_0(VAR_5->hn_txdesc_avail > 0,
      ("txdesc_get: invalid txd avail %d", VAR_5->hn_txdesc_avail));
  VAR_5->hn_txdesc_avail--;
  FUNC_2(&VAR_5->hn_txlist, VAR_4);
 }
 FUNC_7(&VAR_5->hn_txlist_spin);




 if (VAR_6 != ((void*)0)) {





  FUNC_0(VAR_6->m == ((void*)0) && VAR_6->refs == 0 &&
      FUNC_3(&VAR_6->agg_list) &&
      VAR_6->chim_index == VAR_0 &&
      VAR_6->chim_size == 0 &&
      (VAR_6->flags & VAR_3) &&
      (VAR_6->flags & VAR_2) == 0 &&
      (VAR_6->flags & VAR_1) == 0, ("invalid txd"));
  VAR_6->flags &= ~VAR_3;
  VAR_6->refs = 1;
 }
 return VAR_6;
}
