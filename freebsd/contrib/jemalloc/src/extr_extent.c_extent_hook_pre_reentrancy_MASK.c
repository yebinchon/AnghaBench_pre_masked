
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tsd_t ;
typedef int arena_t ;


 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(tsdn_t *VAR_0, arena_t *VAR_1) {
 tsd_t *VAR_2 = FUNC_4(VAR_0) ? FUNC_2() : FUNC_5(VAR_0);
 if (VAR_1 == FUNC_0(FUNC_3(VAR_2), 0, 0)) {







  FUNC_1(VAR_2, ((void*)0));
 } else {
  FUNC_1(VAR_2, VAR_1);
 }
}
