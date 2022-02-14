
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int od_object; } ;
typedef TYPE_1__ ztest_od_t ;
typedef int ztest_ds_t ;
typedef int uint64_t ;
typedef int od ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,size_t) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int ,int ,int ,int ) ;
 size_t FUNC_3 (int) ;

void
FUNC_4(ztest_ds_t *VAR_5, uint64_t VAR_6)
{
 ztest_od_t VAR_7[4];
 int VAR_8 = sizeof (VAR_7) / sizeof (VAR_7[0]);

 for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_2(&VAR_7[VAR_9], VAR_6, VAR_2, VAR_9, VAR_1,
      0, 0, 0);
 }





 if (FUNC_1(VAR_5, VAR_7, sizeof (VAR_7), VAR_0) != 0)
  return;

 while (FUNC_3(4 * VAR_8) != 0)
  FUNC_0(VAR_5, VAR_7[FUNC_3(VAR_8)].od_object,
      FUNC_3(VAR_4) << VAR_3);
}
