
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_5__ {int stats; } ;
typedef TYPE_1__ arena_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_4 (int *) ;

void
FUNC_5(tsdn_t *VAR_2, arena_t *VAR_3, extent_t *VAR_4,
    size_t VAR_5) {
 size_t VAR_6 = FUNC_4(VAR_4);
 size_t VAR_7 = VAR_6 - VAR_5;

 if (VAR_1) {
  FUNC_2(VAR_2, &VAR_3->stats);
  FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_3(VAR_2, &VAR_3->stats);
 }
 FUNC_1(VAR_3, VAR_7 >> VAR_0);
}
