
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mge_softc {size_t tx_desc_used_idx; int mge_tx_dtag; scalar_t__ tx_desc_used_count; int mge_desc_dtag; struct mge_desc_wrapper* mge_tx_desc; scalar_t__ wd_timer; struct ifnet* ifp; } ;
struct mge_desc_wrapper {struct mbuf* buffer; int buffer_dmap; int desc_dmap; struct mge_desc* mge_desc; } ;
struct mge_desc {int cmd_status; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mge_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_6(struct mge_softc *VAR_11)
{
 struct ifnet *VAR_12 = VAR_11->ifp;
 struct mge_desc_wrapper *VAR_13;
 struct mge_desc *VAR_14;
 uint32_t VAR_15;
 int VAR_16 = 0;

 FUNC_0(VAR_11);


 VAR_11->wd_timer = 0;

 while (VAR_11->tx_desc_used_count) {

  VAR_13 = &VAR_11->mge_tx_desc[VAR_11->tx_desc_used_idx];
  VAR_14 = VAR_13->mge_desc;
  FUNC_1(VAR_11->mge_desc_dtag, VAR_13->desc_dmap,
      VAR_0);


  VAR_15 = VAR_14->cmd_status;

  if (VAR_15 & VAR_5)
   break;

  VAR_11->tx_desc_used_idx =
   (++VAR_11->tx_desc_used_idx) % VAR_8;
  VAR_11->tx_desc_used_count--;


  if (VAR_15 & VAR_7) {
   if ((VAR_15 & VAR_6) == VAR_9)
    FUNC_3(VAR_12, VAR_2, 1);
   if ((VAR_15 & VAR_6) == VAR_10)
    FUNC_3(VAR_12, VAR_2, 16);
  }

  FUNC_1(VAR_11->mge_tx_dtag, VAR_13->buffer_dmap,
      VAR_1);
  FUNC_2(VAR_11->mge_tx_dtag, VAR_13->buffer_dmap);
  FUNC_4(VAR_13->buffer);
  VAR_13->buffer = (struct mbuf*)((void*)0);
  VAR_16++;

  FUNC_3(VAR_12, VAR_3, 1);
 }

 if (VAR_16) {

  VAR_12->if_drv_flags &= ~VAR_4;
  FUNC_5(VAR_12);
 }
}
