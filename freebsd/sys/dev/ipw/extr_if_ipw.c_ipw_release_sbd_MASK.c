
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int sc_tx_timer; int free_sbuf; int txbuf_dmat; int free_shdr; int hdr_dmat; int cmd_map; int cmd_dmat; } ;
struct ipw_soft_hdr {int m; int ni; int map; } ;
struct ipw_soft_buf {int m; int ni; int map; } ;
struct ipw_soft_bd {int type; struct ipw_soft_hdr* priv; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *,struct ipw_soft_hdr*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct ipw_softc *VAR_3, struct ipw_soft_bd *VAR_4)
{
 struct ipw_soft_hdr *VAR_5;
 struct ipw_soft_buf *VAR_6;

 switch (VAR_4->type) {
 case 130:
  FUNC_1(VAR_3->cmd_dmat, VAR_3->cmd_map,
      VAR_0);
  FUNC_2(VAR_3->cmd_dmat, VAR_3->cmd_map);
  break;

 case 128:
  VAR_5 = VAR_4->priv;
  FUNC_1(VAR_3->hdr_dmat, VAR_5->map, VAR_0);
  FUNC_2(VAR_3->hdr_dmat, VAR_5->map);
  FUNC_0(&VAR_3->free_shdr, VAR_5, VAR_2);
  break;

 case 129:
  VAR_6 = VAR_4->priv;
  FUNC_1(VAR_3->txbuf_dmat, VAR_6->map,
      VAR_0);
  FUNC_2(VAR_3->txbuf_dmat, VAR_6->map);
  FUNC_0(&VAR_3->free_sbuf, VAR_6, VAR_2);

  FUNC_3(VAR_6->ni, VAR_6->m, 0 );

  VAR_3->sc_tx_timer = 0;
  break;
 }

 VAR_4->type = VAR_1;
}
