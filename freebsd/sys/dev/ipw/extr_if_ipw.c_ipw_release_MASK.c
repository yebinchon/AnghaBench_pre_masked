
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_softc {int * rxbuf_dmat; struct ipw_soft_buf* rx_sbuf_list; int * txbuf_dmat; TYPE_2__* tx_sbuf_list; int * hdr_dmat; TYPE_1__* shdr_list; int * cmd_dmat; int cmd_map; int * stbd_list; int * status_dmat; int status_map; int * status_list; int * rbd_dmat; int rbd_map; int * rbd_list; int * tbd_dmat; int tbd_map; int * tbd_list; int * parent_dmat; } ;
struct ipw_soft_buf {int map; int * m; } ;
struct TYPE_4__ {int map; } ;
struct TYPE_3__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct ipw_softc*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ipw_softc *VAR_4)
{
 struct ipw_soft_buf *VAR_5;
 int VAR_6;

 if (VAR_4->parent_dmat != ((void*)0)) {
  FUNC_0(VAR_4->parent_dmat);
 }

 if (VAR_4->tbd_dmat != ((void*)0)) {
  FUNC_3(VAR_4->tbd_dmat, VAR_4->tbd_map);
  FUNC_4(VAR_4->tbd_dmat, VAR_4->tbd_list, VAR_4->tbd_map);
  FUNC_0(VAR_4->tbd_dmat);
 }

 if (VAR_4->rbd_dmat != ((void*)0)) {
  if (VAR_4->rbd_list != ((void*)0)) {
   FUNC_3(VAR_4->rbd_dmat, VAR_4->rbd_map);
   FUNC_4(VAR_4->rbd_dmat, VAR_4->rbd_list,
       VAR_4->rbd_map);
  }
  FUNC_0(VAR_4->rbd_dmat);
 }

 if (VAR_4->status_dmat != ((void*)0)) {
  if (VAR_4->status_list != ((void*)0)) {
   FUNC_3(VAR_4->status_dmat, VAR_4->status_map);
   FUNC_4(VAR_4->status_dmat, VAR_4->status_list,
       VAR_4->status_map);
  }
  FUNC_0(VAR_4->status_dmat);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_5(VAR_4, &VAR_4->stbd_list[VAR_6]);

 if (VAR_4->cmd_dmat != ((void*)0)) {
  FUNC_1(VAR_4->cmd_dmat, VAR_4->cmd_map);
  FUNC_0(VAR_4->cmd_dmat);
 }

 if (VAR_4->hdr_dmat != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_1(VAR_4->hdr_dmat, VAR_4->shdr_list[VAR_6].map);
  FUNC_0(VAR_4->hdr_dmat);
 }

 if (VAR_4->txbuf_dmat != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   FUNC_1(VAR_4->txbuf_dmat,
       VAR_4->tx_sbuf_list[VAR_6].map);
  }
  FUNC_0(VAR_4->txbuf_dmat);
 }

 if (VAR_4->rxbuf_dmat != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_5 = &VAR_4->rx_sbuf_list[VAR_6];
   if (VAR_5->m != ((void*)0)) {
    FUNC_2(VAR_4->rxbuf_dmat, VAR_5->map,
        VAR_0);
    FUNC_3(VAR_4->rxbuf_dmat, VAR_5->map);
    FUNC_6(VAR_5->m);
   }
   FUNC_1(VAR_4->rxbuf_dmat, VAR_5->map);
  }
  FUNC_0(VAR_4->rxbuf_dmat);
 }
}
