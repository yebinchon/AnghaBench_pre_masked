
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsdn_t ;
typedef scalar_t__ ssize_t ;
typedef int nstime_t ;
typedef int extents_t ;
typedef int arena_t ;
struct TYPE_10__ {int epoch; int mtx; } ;
typedef TYPE_1__ arena_decay_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int *,int,int ,int ,int) ;
 int FUNC_6 (int *,int *,TYPE_1__*,int *,int ,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static bool
FUNC_16(tsdn_t *VAR_0, arena_t *VAR_1, arena_decay_t *VAR_2,
    extents_t *VAR_3, bool VAR_4) {
 FUNC_9(VAR_0, &VAR_2->mtx);


 ssize_t VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 <= 0) {
  if (VAR_5 == 0) {
   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, 0,
       0, FUNC_8(VAR_3),
       VAR_4);
  }
  return 0;
 }

 nstime_t VAR_6;
 FUNC_12(&VAR_6, 0);
 FUNC_14(&VAR_6);
 if (FUNC_15(!FUNC_13() && FUNC_10(&VAR_2->epoch, &VAR_6)
     > 0)) {
  FUNC_11(&VAR_2->epoch, &VAR_6);
  FUNC_1(VAR_2);
 } else {

  FUNC_7(FUNC_10(&VAR_2->epoch, &VAR_6) <= 0);
 }
 bool VAR_7 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6,
      VAR_4);
 } else if (VAR_4) {
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3,
      FUNC_8(VAR_3),
      FUNC_0(VAR_2),
      VAR_4);
 }

 return VAR_7;
}
