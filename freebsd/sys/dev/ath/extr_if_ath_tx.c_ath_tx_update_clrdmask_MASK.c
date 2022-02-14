
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_tid {int dummy; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int clrdmask; } ;
struct TYPE_2__ {int bfs_txflags; } ;
struct ath_buf {TYPE_1__ bf_state; int bf_node; } ;


 struct ath_node* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_1, struct ath_tid *VAR_2,
    struct ath_buf *VAR_3)
{
 struct ath_node *VAR_4 = FUNC_0(VAR_3->bf_node);

 FUNC_1(VAR_1);

 if (VAR_4->clrdmask == 1) {
  VAR_3->bf_state.bfs_txflags |= VAR_0;
  VAR_4->clrdmask = 0;
 }
}
