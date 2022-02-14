
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_5__ {scalar_t__* fdstate; int * fdlock; scalar_t__ maxsocks; } ;
typedef TYPE_1__ isc__socketmgr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int ,int ,char*,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_9(isc__socketmgr_t *VAR_11, int VAR_12, int VAR_13) {
 isc_result_t VAR_14;
 int VAR_15 = FUNC_0(VAR_12);







 FUNC_1(VAR_12 >= 0 && VAR_12 < (int)VAR_11->maxsocks);

 if (VAR_13 == VAR_7) {

  FUNC_1(VAR_11->fdstate[VAR_12] == VAR_1);
  VAR_11->fdstate[VAR_12] = VAR_0;
  (void)FUNC_7(VAR_11, VAR_12, VAR_8);
  (void)FUNC_7(VAR_11, VAR_12, VAR_9);
  (void)FUNC_4(VAR_12);
  return;
 }

 FUNC_2(&VAR_11->fdlock[VAR_15]);
 if (VAR_11->fdstate[VAR_12] == VAR_1) {
  FUNC_3(&VAR_11->fdlock[VAR_15]);
  (void)FUNC_7(VAR_11, VAR_12, VAR_8);
  (void)FUNC_7(VAR_11, VAR_12, VAR_9);
  return;
 }
 if (VAR_11->fdstate[VAR_12] != VAR_6) {
  FUNC_3(&VAR_11->fdlock[VAR_15]);
  return;
 }
 FUNC_3(&VAR_11->fdlock[VAR_15]);




 VAR_14 = FUNC_8(VAR_11, VAR_12, VAR_13);
 if (VAR_14 != VAR_5) {





  FUNC_5(VAR_10, VAR_2,
         VAR_3, VAR_4,
         "failed to start watching FD (%d): %s",
         VAR_12, FUNC_6(VAR_14));
 }
}
