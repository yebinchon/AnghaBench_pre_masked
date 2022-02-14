
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zd_name; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int proplist ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(ztest_ds_t *VAR_6, uint64_t VAR_7)
{
 zfs_prop_t VAR_8[] = {
  VAR_1,
  VAR_2,
  VAR_3,
  VAR_4
 };

 FUNC_0(&VAR_5, VAR_0);

 for (int VAR_9 = 0; VAR_9 < sizeof (VAR_8) / sizeof (VAR_8[0]); VAR_9++)
  (void) FUNC_2(VAR_6->zd_name, VAR_8[VAR_9],
      FUNC_4(VAR_8[VAR_9]), (int)FUNC_3(2));

 FUNC_1(&VAR_5);
}
