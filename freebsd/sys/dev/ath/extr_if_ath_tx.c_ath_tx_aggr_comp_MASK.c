
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ bfs_aggr; } ;
struct ath_buf {TYPE_1__ bf_state; } ;


 int FUNC_0 (struct ath_softc*,struct ath_buf*,int) ;
 int FUNC_1 (struct ath_softc*,struct ath_buf*,int) ;

void
FUNC_2(struct ath_softc *VAR_0, struct ath_buf *VAR_1, int VAR_2)
{
 if (VAR_1->bf_state.bfs_aggr)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
