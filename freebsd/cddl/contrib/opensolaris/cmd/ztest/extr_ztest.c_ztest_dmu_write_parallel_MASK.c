
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int od_object; } ;
typedef TYPE_1__ ztest_od_t ;
typedef int ztest_ds_t ;
typedef unsigned long long uint64_t ;
typedef int od ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,unsigned long long) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int ,int ) ;
 unsigned long long FUNC_3 (int) ;

void
FUNC_4(ztest_ds_t *VAR_6, uint64_t VAR_7)
{
 ztest_od_t VAR_8[1];
 uint64_t VAR_9 = (1ULL << (FUNC_3(20) + 43)) +
     (FUNC_3(VAR_5) << VAR_4);






 FUNC_2(&VAR_8[0], VAR_3, VAR_2, 0, VAR_1,
     0, 0, 0);

 if (FUNC_1(VAR_6, VAR_8, sizeof (VAR_8), VAR_0) != 0)
  return;

 while (FUNC_3(10) != 0)
  FUNC_0(VAR_6, VAR_8[0].od_object, VAR_9);
}
