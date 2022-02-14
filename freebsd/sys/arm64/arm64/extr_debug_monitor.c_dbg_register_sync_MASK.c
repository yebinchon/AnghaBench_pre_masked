
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct debug_monitor_state {int dbg_flags; int * dbg_wvr; int * dbg_wcr; int * dbg_bvr; int * dbg_bcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 struct debug_monitor_state VAR_10 ;
 int VAR_11 ;

void
FUNC_4(struct debug_monitor_state *VAR_12)
{
 uint64_t VAR_13;
 int VAR_14;

 if (VAR_12 == ((void*)0))
  VAR_12 = &VAR_10;

 VAR_13 = FUNC_0(VAR_11);
 if ((VAR_12->dbg_flags & VAR_0) == 0) {
  VAR_13 &= ~(VAR_3 | VAR_2);
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   FUNC_2(VAR_4, VAR_14,
       VAR_12->dbg_bcr[VAR_14]);
   FUNC_2(VAR_5, VAR_14,
       VAR_12->dbg_bvr[VAR_14]);
  }

  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   FUNC_2(VAR_6, VAR_14,
       VAR_12->dbg_wcr[VAR_14]);
   FUNC_2(VAR_7, VAR_14,
       VAR_12->dbg_wvr[VAR_14]);
  }
  VAR_13 |= VAR_3;
  if ((VAR_12->dbg_flags & VAR_1) == VAR_1)
   VAR_13 |= VAR_2;
 }
 FUNC_1(VAR_11, VAR_13);
 FUNC_3();
}
