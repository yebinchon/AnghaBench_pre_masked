
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zcd_spa; int zcd_txg; } ;
typedef TYPE_1__ ztest_cb_data_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int ) ;

__attribute__((used)) static ztest_cb_data_t *
FUNC_2(objset_t *VAR_1, uint64_t VAR_2)
{
 ztest_cb_data_t *VAR_3;

 VAR_3 = FUNC_1(sizeof (ztest_cb_data_t), VAR_0);

 VAR_3->zcd_txg = VAR_2;
 VAR_3->zcd_spa = FUNC_0(VAR_1);

 return (VAR_3);
}
