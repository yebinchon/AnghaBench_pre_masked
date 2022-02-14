
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_17__ {int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_18__ {int dd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 TYPE_3__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,int ,char*) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void
FUNC_17(dsl_dir_t *VAR_13, nvlist_t *VAR_14)
{
 FUNC_15(&VAR_13->dd_lock);
 FUNC_14(VAR_14, VAR_5,
     FUNC_3(VAR_13));
 FUNC_14(VAR_14, VAR_7,
     FUNC_5(VAR_13));
 FUNC_14(VAR_14, VAR_3,
     FUNC_1(VAR_13));
 if (FUNC_12(VAR_13)->dd_flags & VAR_0) {
  FUNC_14(VAR_14, VAR_12,
      FUNC_10(VAR_13));
  FUNC_14(VAR_14, VAR_10,
      FUNC_8(VAR_13));
  FUNC_14(VAR_14, VAR_11,
      FUNC_9(VAR_13));
  FUNC_14(VAR_14, VAR_9,
      FUNC_7(VAR_13));
 }
 FUNC_16(&VAR_13->dd_lock);

 uint64_t VAR_15;
 if (FUNC_0(VAR_13, &VAR_15) == 0) {
  FUNC_14(VAR_14, VAR_2,
      VAR_15);
 }
 if (FUNC_6(VAR_13, &VAR_15) == 0) {
  FUNC_14(VAR_14, VAR_8,
      VAR_15);
 }
 if (FUNC_4(VAR_13, &VAR_15) == 0) {
  FUNC_14(VAR_14, VAR_6,
      VAR_15);
 }

 if (FUNC_11(VAR_13)) {
  char VAR_16[VAR_1];
  FUNC_2(VAR_13, VAR_16);
  FUNC_13(VAR_14, VAR_4, VAR_16);
 }

}
