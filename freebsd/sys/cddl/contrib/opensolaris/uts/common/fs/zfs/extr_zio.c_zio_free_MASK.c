
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_7__ {size_t spa_syncing_txg; int * spa_free_bplist; } ;
typedef TYPE_1__ spa_t ;
typedef int blkptr_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 size_t VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int *,TYPE_1__*,size_t,int const*,int ,int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(spa_t *VAR_3, uint64_t VAR_4, const blkptr_t *VAR_5)
{

 FUNC_8(VAR_3, VAR_5);






 if (FUNC_2(VAR_5))
  return;
 FUNC_6(VAR_3, VAR_5);







 if (VAR_2 || FUNC_3(VAR_5) || FUNC_0(VAR_5) ||
     VAR_4 != VAR_3->spa_syncing_txg ||
     FUNC_7(VAR_3) >= VAR_1) {
  FUNC_5(&VAR_3->spa_free_bplist[VAR_4 & VAR_0], VAR_5);
 } else {
  FUNC_4(FUNC_10(FUNC_9(((void*)0), VAR_3, VAR_4, VAR_5,
      FUNC_1(VAR_5), 0)));
 }
}
