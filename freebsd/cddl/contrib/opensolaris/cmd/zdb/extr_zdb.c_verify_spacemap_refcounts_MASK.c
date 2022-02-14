
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef int longlong_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_7(spa_t *VAR_2)
{
 uint64_t VAR_3 = 0;
 uint64_t VAR_4;

 (void) FUNC_0(VAR_2,
     &VAR_1[VAR_0],
     &VAR_3);
 VAR_4 = FUNC_2(VAR_2->spa_root_vdev);
 VAR_4 += FUNC_3(VAR_2->spa_root_vdev);
 VAR_4 += FUNC_4(VAR_2->spa_root_vdev);
 VAR_4 += FUNC_5(VAR_2);
 VAR_4 += FUNC_1(VAR_2->spa_root_vdev);

 if (VAR_3 != VAR_4) {
  (void) FUNC_6("space map refcount mismatch: expected %lld != "
      "actual %lld\n",
      (longlong_t)VAR_3,
      (longlong_t)VAR_4);
  return (2);
 }
 return (0);
}
