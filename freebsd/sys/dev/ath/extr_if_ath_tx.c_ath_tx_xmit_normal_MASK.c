
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_txq {int dummy; } ;
struct ath_tid {int hwq_depth; } ;
struct ath_softc {int dummy; } ;
struct ath_node {struct ath_tid* an_tid; } ;
struct TYPE_2__ {size_t bfs_tid; int bfs_txflags; } ;
struct ath_buf {int bf_comp; TYPE_1__ bf_state; int bf_node; } ;


 struct ath_node* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_3 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_4 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_5 (struct ath_softc*,struct ath_txq*,struct ath_buf*) ;
 int VAR_1 ;
 int FUNC_6 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_7 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_8 (struct ath_softc*,struct ath_buf*) ;

__attribute__((used)) static void
FUNC_9(struct ath_softc *VAR_2, struct ath_txq *VAR_3,
    struct ath_buf *VAR_4)
{
 struct ath_node *VAR_5 = FUNC_0(VAR_4->bf_node);
 struct ath_tid *VAR_6 = &VAR_5->an_tid[VAR_4->bf_state.bfs_tid];

 FUNC_1(VAR_2);
 VAR_4->bf_state.bfs_txflags |= VAR_0;


 FUNC_4(VAR_2, VAR_4);
 FUNC_2(VAR_2, VAR_4);
 FUNC_3(VAR_2, VAR_4);
 FUNC_7(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_4);
 FUNC_8(VAR_2, VAR_4);


 VAR_6->hwq_depth++;


 VAR_4->bf_comp = VAR_1;


 FUNC_5(VAR_2, VAR_3, VAR_4);
}
