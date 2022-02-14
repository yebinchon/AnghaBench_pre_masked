
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct fxp_rx* rx_tail; struct fxp_rx* rx_head; } ;
struct fxp_softc {TYPE_3__ fxp_desc; int fxp_rxmtag; } ;
struct fxp_rx {struct fxp_rx* rx_next; int rx_map; int rx_addr; TYPE_2__* rx_mbuf; } ;
struct fxp_rfa {scalar_t__ rfa_control; int link_addr; } ;
struct TYPE_4__ {scalar_t__ ext_buf; } ;
struct TYPE_5__ {TYPE_1__ m_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct fxp_softc *VAR_3, struct fxp_rx *VAR_4)
{
 struct fxp_rfa *VAR_5;
 struct fxp_rx *VAR_6;





 if (VAR_3->fxp_desc.rx_head != ((void*)0)) {
  VAR_6 = VAR_3->fxp_desc.rx_tail;
  VAR_5 = (struct fxp_rfa *)
      (VAR_6->rx_mbuf->m_ext.ext_buf + VAR_2);
  VAR_6->rx_next = VAR_4;
  FUNC_1(&VAR_5->link_addr, VAR_4->rx_addr);
  VAR_5->rfa_control = 0;
  FUNC_0(VAR_3->fxp_rxmtag, VAR_6->rx_map,
      VAR_0 | VAR_1);
 } else {
  VAR_4->rx_next = ((void*)0);
  VAR_3->fxp_desc.rx_head = VAR_4;
 }
 VAR_3->fxp_desc.rx_tail = VAR_4;
}
