
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rl_rx_dmamap; int rl_tx_tag; int rl_rx_buf_ptr; } ;
struct rl_softc {TYPE_1__ rl_cdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct rl_softc *VAR_4)
{

 FUNC_0(VAR_4);

 FUNC_2(VAR_4->rl_cdata.rl_rx_buf_ptr,
     VAR_2 + VAR_3);
 FUNC_1(VAR_4->rl_cdata.rl_tx_tag, VAR_4->rl_cdata.rl_rx_dmamap,
     VAR_0 | VAR_1);

 return (0);
}
