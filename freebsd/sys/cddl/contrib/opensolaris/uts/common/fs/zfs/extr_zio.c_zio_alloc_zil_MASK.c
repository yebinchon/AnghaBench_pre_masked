
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int spa_alloc_count; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int ,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ,scalar_t__,int *,int,scalar_t__,int *,int ,int *,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (char*,int ,scalar_t__,int) ;

int
FUNC_19(spa_t *VAR_9, uint64_t VAR_10, uint64_t VAR_11, blkptr_t *VAR_12,
    blkptr_t *VAR_13, uint64_t VAR_14, boolean_t *VAR_15)
{
 int VAR_16 = 1;
 zio_alloc_list_t VAR_17;

 FUNC_0(VAR_11 > FUNC_16(VAR_9));

 FUNC_12(&VAR_17);






 VAR_16 = FUNC_10(VAR_9, FUNC_13(VAR_9), VAR_14, VAR_12, 1,
     VAR_11, VAR_13, VAR_2, &VAR_17, ((void*)0),
     FUNC_9(0, 0, 0, VAR_10) % VAR_9->spa_alloc_count);
 if (VAR_16 == 0) {
  *VAR_15 = VAR_4;
 } else {
  VAR_16 = FUNC_10(VAR_9, FUNC_15(VAR_9), VAR_14,
      VAR_12, 1, VAR_11, VAR_13, VAR_2,
      &VAR_17, ((void*)0), FUNC_9(0, 0, 0, VAR_10) %
      VAR_9->spa_alloc_count);
  if (VAR_16 == 0)
   *VAR_15 = VAR_1;
 }
 FUNC_11(&VAR_17);

 if (VAR_16 == 0) {
  FUNC_6(VAR_12, VAR_14);
  FUNC_7(VAR_12, VAR_14);
  FUNC_3(VAR_12, VAR_8);
  FUNC_2(VAR_12,
      FUNC_17(VAR_9) >= VAR_3
      ? VAR_7 : VAR_6);
  FUNC_8(VAR_12, VAR_0);
  FUNC_5(VAR_12, 0);
  FUNC_4(VAR_12, 0);
  FUNC_1(VAR_12, VAR_5);
 } else {
  FUNC_18("%s: zil block allocation failure: "
      "size %llu, error %d", FUNC_14(VAR_9), VAR_14, VAR_16);
 }

 return (VAR_16);
}
