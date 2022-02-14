
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mge_softc {int rx_desc_start; scalar_t__ rx_desc_curr; struct mge_desc_wrapper* mge_rx_desc; int mge_rx_dtag; } ;
struct mge_desc_wrapper {int mge_desc_paddr; TYPE_1__* mge_desc; int buffer; int buffer_dmap; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct mge_softc*,int ,int ) ;
 int FUNC_4 (struct mge_softc*,struct mge_desc_wrapper*,int,int *) ;
 int FUNC_5 (struct mge_softc*,struct mge_desc_wrapper*,int,int ,int) ;
 int FUNC_6 (int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_7(struct mge_softc *VAR_3)
{
 struct mge_desc_wrapper *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3);

 FUNC_5(VAR_3, VAR_3->mge_rx_desc, VAR_1, VAR_3->mge_rx_dtag, 1);

 FUNC_4(VAR_3, VAR_3->mge_rx_desc, VAR_1,
     &VAR_3->mge_rx_dtag);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &(VAR_3->mge_rx_desc[VAR_5]);
  FUNC_6(VAR_3->mge_rx_dtag, VAR_4->buffer_dmap, &VAR_4->buffer,
  &VAR_4->mge_desc->buffer);
 }

 VAR_3->rx_desc_start = VAR_3->mge_rx_desc[0].mge_desc_paddr;
 VAR_3->rx_desc_curr = 0;

 FUNC_3(VAR_3, FUNC_2(VAR_0),
     VAR_3->rx_desc_start);


 FUNC_3(VAR_3, VAR_2, FUNC_0(VAR_0));
}
