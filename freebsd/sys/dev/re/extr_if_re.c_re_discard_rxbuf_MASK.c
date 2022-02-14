
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rl_rx_desc_cnt; struct rl_desc* rl_rx_list; struct rl_rxdesc* rl_rx_desc; struct rl_rxdesc* rl_jrx_desc; } ;
struct rl_softc {int rl_flags; TYPE_2__ rl_ldata; TYPE_1__* rl_ifp; } ;
struct rl_rxdesc {int rx_size; } ;
struct rl_desc {int rl_cmdstat; scalar_t__ rl_vlanctl; } ;
struct TYPE_3__ {scalar_t__ if_mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct rl_softc *VAR_4, int VAR_5)
{
 struct rl_desc *VAR_6;
 struct rl_rxdesc *VAR_7;
 uint32_t VAR_8;

 if (VAR_4->rl_ifp->if_mtu > VAR_1 &&
     (VAR_4->rl_flags & VAR_0) != 0)
  VAR_7 = &VAR_4->rl_ldata.rl_jrx_desc[VAR_5];
 else
  VAR_7 = &VAR_4->rl_ldata.rl_rx_desc[VAR_5];
 VAR_6 = &VAR_4->rl_ldata.rl_rx_list[VAR_5];
 VAR_6->rl_vlanctl = 0;
 VAR_8 = VAR_7->rx_size;
 if (VAR_5 == VAR_4->rl_ldata.rl_rx_desc_cnt - 1)
  VAR_8 |= VAR_2;
 VAR_6->rl_cmdstat = FUNC_0(VAR_8 | VAR_3);
}
