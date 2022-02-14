
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {TYPE_2__* db_data; } ;
typedef TYPE_1__ dmu_buf_t ;
struct TYPE_6__ {scalar_t__ bt_begin; scalar_t__ bt_end; } ;
typedef TYPE_2__ bptree_phys_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int ) ;

boolean_t
FUNC_3(objset_t *VAR_1, uint64_t VAR_2)
{
 dmu_buf_t *VAR_3;
 bptree_phys_t *VAR_4;
 boolean_t VAR_5;

 FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_3));
 VAR_4 = VAR_3->db_data;
 VAR_5 = (VAR_4->bt_begin == VAR_4->bt_end);
 FUNC_2(VAR_3, VAR_0);
 return (VAR_5);
}
