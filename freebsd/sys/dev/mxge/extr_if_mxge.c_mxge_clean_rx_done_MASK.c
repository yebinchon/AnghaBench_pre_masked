
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {size_t idx; int cnt; int mask; TYPE_3__* entry; } ;
struct mxge_slice_state {int lc; TYPE_2__* sc; TYPE_4__ rx_done; } ;
typedef TYPE_4__ mxge_rx_done_t ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ checksum; } ;
struct TYPE_6__ {TYPE_1__* ifp; } ;
struct TYPE_5__ {int if_capenable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mxge_slice_state*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct mxge_slice_state*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(struct mxge_slice_state *VAR_3)
{
 mxge_rx_done_t *VAR_4 = &VAR_3->rx_done;
 int VAR_5 = 0;
 uint16_t VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 VAR_8 = VAR_3->sc->ifp->if_capenable & VAR_0;
 while (VAR_4->entry[VAR_4->idx].length != 0) {
  VAR_6 = FUNC_3(VAR_4->entry[VAR_4->idx].length);
  VAR_4->entry[VAR_4->idx].length = 0;
  VAR_7 = VAR_4->entry[VAR_4->idx].checksum;
  if (VAR_6 <= (VAR_1 - VAR_2))
   FUNC_2(VAR_3, VAR_6, VAR_7, VAR_8);
  else
   FUNC_1(VAR_3, VAR_6, VAR_7, VAR_8);
  VAR_4->cnt++;
  VAR_4->idx = VAR_4->cnt & VAR_4->mask;


  if (FUNC_0(++VAR_5 > VAR_4->mask / 2))
   break;
 }



}
