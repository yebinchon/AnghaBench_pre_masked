
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2quo_state {scalar_t__ qs_holds; int qs_work; scalar_t__ qs_pending; int qs_hold_bm; int qs_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int,char*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct o2quo_state *VAR_0, u8 VAR_1)
{
 FUNC_0(&VAR_0->qs_lock);

 if (FUNC_4(VAR_1, VAR_0->qs_hold_bm)) {
  FUNC_1(0, "node %u, %d total\n", VAR_1, VAR_0->qs_holds - 1);
  if (--VAR_0->qs_holds == 0) {
   if (VAR_0->qs_pending) {
    VAR_0->qs_pending = 0;
    FUNC_3(&VAR_0->qs_work);
   }
  }
  FUNC_2(VAR_0->qs_holds < 0, "node %u, holds %d\n",
    VAR_1, VAR_0->qs_holds);
 }
}
