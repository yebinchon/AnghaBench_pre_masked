
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
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int ,int,int) ;
 scalar_t__ FUNC_9 (int *,int ,int,int,void*) ;

void
FUNC_10(ztest_ds_t *VAR_5, uint64_t VAR_6)
{
 ztest_od_t VAR_7[1];
 uint64_t VAR_8 = (1ULL << (FUNC_6(4) + VAR_2)) +
     (FUNC_6(VAR_4) << VAR_2);
 uint64_t VAR_9 = FUNC_6(20) + 1;
 uint64_t VAR_10 = FUNC_7();
 void *VAR_11;

 FUNC_4(&VAR_7[0], VAR_6, VAR_1, 0, VAR_0, VAR_10,
     0, 0);

 if (FUNC_3(VAR_5, VAR_7, sizeof (VAR_7), !FUNC_6(2)) != 0)
  return;

 if (FUNC_8(VAR_5, VAR_7[0].od_object, VAR_8, VAR_9 * VAR_10) != 0)
  return;

 FUNC_5(VAR_5, VAR_7[0].od_object, VAR_8, VAR_9 * VAR_10);

 VAR_11 = FUNC_1(VAR_10, VAR_3);

 while (FUNC_6(VAR_9) != 0) {
  uint64_t VAR_12 = VAR_8 + (FUNC_6(VAR_9) * VAR_10);
  if (FUNC_9(VAR_5, VAR_7[0].od_object, VAR_12, VAR_10,
      VAR_11) != 0)
   break;
  while (FUNC_6(4) != 0)
   FUNC_2(VAR_5, VAR_7[0].od_object, VAR_12);
 }

 FUNC_0(VAR_11, VAR_10);
}
