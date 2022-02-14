
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_tid {int dummy; } ;
struct ath_softc {int dummy; } ;
struct ath_node {struct ath_tid* an_tid; } ;
struct TYPE_2__ {scalar_t__ bfs_dobaw; scalar_t__ bfs_addedbaw; } ;
struct ath_buf {struct ath_buf* bf_next; int bf_comp; TYPE_1__ bf_state; } ;
typedef int ath_bufhead ;


 int FUNC_0 (struct ath_tid*,struct ath_buf*,int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int *,struct ath_buf*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ath_softc*,struct ath_node*,struct ath_tid*,struct ath_buf*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_2, struct ath_node *VAR_3,
    int VAR_4, struct ath_buf *VAR_5, ath_bufhead *VAR_6)
{
 struct ath_tid *VAR_7 = &VAR_3->an_tid[VAR_4];
 struct ath_buf *VAR_8, *VAR_9;

 FUNC_1(VAR_2);




 FUNC_0(VAR_7, VAR_5, VAR_1);




 VAR_8 = VAR_5;
 while (VAR_8 != ((void*)0)) {
  VAR_9 = VAR_8->bf_next;
  if (VAR_8->bf_state.bfs_addedbaw) {
   FUNC_3(VAR_2, VAR_3, VAR_7, VAR_8);
   VAR_8->bf_state.bfs_dobaw = 0;
  }




  VAR_8->bf_comp = VAR_0;
  VAR_8->bf_next = ((void*)0);




  FUNC_2(VAR_6, VAR_8, VAR_1);




  VAR_8 = VAR_9;
 }
}
