
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ale_rx_page* ale_rx_page; scalar_t__ ale_rx_curp; scalar_t__ ale_rx_seqno; } ;
struct ale_softc {int ale_pagesize; TYPE_1__ ale_cdata; scalar_t__ ale_morework; } ;
struct ale_rx_page {int cmb_map; int cmb_tag; int page_map; int page_tag; scalar_t__* cmb_addr; scalar_t__ cons; scalar_t__* page_addr; } ;


 int FUNC_0 (struct ale_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ale_softc *VAR_4)
{
 struct ale_rx_page *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4);

 VAR_4->ale_morework = 0;
 VAR_4->ale_cdata.ale_rx_seqno = 0;
 VAR_4->ale_cdata.ale_rx_curp = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->ale_cdata.ale_rx_page[VAR_6];
  FUNC_2(VAR_5->page_addr, VAR_4->ale_pagesize);
  FUNC_2(VAR_5->cmb_addr, VAR_0);
  VAR_5->cons = 0;
  *VAR_5->cmb_addr = 0;
  FUNC_1(VAR_5->page_tag, VAR_5->page_map,
      VAR_2 | VAR_3);
  FUNC_1(VAR_5->cmb_tag, VAR_5->cmb_map,
      VAR_2 | VAR_3);
 }
}
