
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zd_os; int zd_zilog; } ;
typedef TYPE_1__ ztest_ds_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 ztest_ds_t *VAR_2 = &VAR_0[VAR_1];

 FUNC_1(VAR_2->zd_zilog);
 FUNC_0(VAR_2->zd_os, VAR_2);

 FUNC_2(VAR_2);
}
