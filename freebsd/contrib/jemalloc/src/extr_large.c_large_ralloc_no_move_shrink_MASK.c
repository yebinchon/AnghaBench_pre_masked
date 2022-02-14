
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_5__ {int * split; } ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,size_t) ;
 int FUNC_1 (int *,int *,TYPE_1__**,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,TYPE_1__**,int *,size_t,int ,int,size_t,int ,int) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ,size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_10 (size_t) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static bool
FUNC_12(tsdn_t *VAR_4, extent_t *VAR_5, size_t VAR_6) {
 arena_t *VAR_7 = FUNC_4(VAR_5);
 size_t VAR_8 = FUNC_8(VAR_5);
 extent_hooks_t *VAR_9 = FUNC_5(VAR_7);
 size_t VAR_10 = FUNC_6(VAR_5) - (VAR_6 + VAR_3);

 FUNC_2(VAR_8 > VAR_6);

 if (VAR_9->split == ((void*)0)) {
  return 1;
 }


 if (VAR_10 != 0) {
  extent_t *VAR_11 = FUNC_7(VAR_4, VAR_7,
      &VAR_9, VAR_5, VAR_6 + VAR_3,
      FUNC_10(VAR_6), 0, VAR_10, VAR_0, 0);
  if (VAR_11 == ((void*)0)) {
   return 1;
  }

  if (VAR_1 && FUNC_11(VAR_2)) {
   FUNC_9(FUNC_3(VAR_11),
       FUNC_6(VAR_11));
  }

  FUNC_1(VAR_4, VAR_7, &VAR_9, VAR_11);
 }

 FUNC_0(VAR_4, VAR_7, VAR_5, VAR_8);

 return 0;
}
