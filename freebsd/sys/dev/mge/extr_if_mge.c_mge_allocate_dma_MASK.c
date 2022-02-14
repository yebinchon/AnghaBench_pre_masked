
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mge_softc {struct mge_desc_wrapper* mge_rx_desc; int rx_desc_start; struct mge_desc_wrapper* mge_tx_desc; int tx_desc_start; int mge_rx_dtag; int mge_tx_dtag; int mge_desc_dtag; int dev; } ;
struct mge_desc_wrapper {int mge_desc_paddr; TYPE_1__* mge_desc; int buffer; int buffer_dmap; } ;
struct mge_desc {int dummy; } ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mge_softc*,struct mge_desc_wrapper*,int,int *) ;
 int FUNC_3 (int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct mge_softc *VAR_4)
{
 int VAR_5;
 struct mge_desc_wrapper *VAR_6;
 int VAR_7;


 VAR_5 = FUNC_0(FUNC_1(VAR_4->dev),
     16, 0,
     VAR_1,
     VAR_0,
     ((void*)0), ((void*)0),
     sizeof(struct mge_desc), 1,
     sizeof(struct mge_desc), 0,
     ((void*)0), ((void*)0),
     &VAR_4->mge_desc_dtag);


 FUNC_2(VAR_4, VAR_4->mge_tx_desc, VAR_3,
     &VAR_4->mge_tx_dtag);
 FUNC_2(VAR_4, VAR_4->mge_rx_desc, VAR_2,
     &VAR_4->mge_rx_dtag);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = &(VAR_4->mge_rx_desc[VAR_7]);
  FUNC_3(VAR_4->mge_rx_dtag, VAR_6->buffer_dmap, &VAR_6->buffer,
      &VAR_6->mge_desc->buffer);
 }

 VAR_4->tx_desc_start = VAR_4->mge_tx_desc[0].mge_desc_paddr;
 VAR_4->rx_desc_start = VAR_4->mge_rx_desc[0].mge_desc_paddr;

 return (0);
}
