
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rx_rs {int dummy; } ;
struct TYPE_2__ {int ale_rx_curp; struct ale_rx_page* ale_rx_page; } ;
struct ale_softc {TYPE_1__ ale_cdata; } ;
struct ale_rx_page {scalar_t__ cons; scalar_t__* cmb_addr; int cmb_map; int cmb_tag; int page_map; int page_tag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ale_softc*,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct ale_softc *VAR_8, struct ale_rx_page **VAR_9,
    uint32_t VAR_10, uint32_t *VAR_11)
{
 struct ale_rx_page *VAR_12;

 VAR_12 = *VAR_9;

 VAR_12->cons += FUNC_2(VAR_10 + sizeof(struct rx_rs),
     VAR_1);
 if (VAR_12->cons >= VAR_2) {




  VAR_12->cons = 0;
  *VAR_12->cmb_addr = 0;
  FUNC_1(VAR_12->cmb_tag, VAR_12->cmb_map,
      VAR_5 | VAR_6);
  FUNC_0(VAR_8, VAR_0 + VAR_8->ale_cdata.ale_rx_curp,
      VAR_7);

  VAR_8->ale_cdata.ale_rx_curp ^= 1;
  VAR_12 = *VAR_9 =
      &VAR_8->ale_cdata.ale_rx_page[VAR_8->ale_cdata.ale_rx_curp];

  FUNC_1(VAR_12->page_tag, VAR_12->page_map,
      VAR_3 | VAR_4);
  FUNC_1(VAR_12->cmb_tag, VAR_12->cmb_map,
      VAR_3 | VAR_4);

  *VAR_11 = *VAR_12->cmb_addr;
 }
}
