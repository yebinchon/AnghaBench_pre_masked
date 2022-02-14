
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {scalar_t__ sa_master_obj; scalar_t__ sa_reg_attr_obj; int sa_num_attrs; int sa_lock; scalar_t__ sa_need_attr_registration; TYPE_3__* sa_attr_table; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_8__ {TYPE_4__* sa_os; } ;
typedef TYPE_2__ sa_handle_t ;
struct TYPE_9__ {scalar_t__ sa_registered; int sa_name; int sa_byteswap; int sa_length; int sa_attr; } ;
typedef TYPE_3__ sa_attr_table_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {TYPE_1__* os_sa; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__,int ,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_6(sa_handle_t *VAR_4, dmu_tx_t *VAR_5)
{
 uint64_t VAR_6 = 0;
 sa_os_t *VAR_7 = VAR_4->sa_os->os_sa;
 sa_attr_table_t *VAR_8 = VAR_7->sa_attr_table;
 int VAR_9;

 FUNC_2(&VAR_7->sa_lock);

 if (!VAR_7->sa_need_attr_registration || VAR_7->sa_master_obj == 0) {
  FUNC_3(&VAR_7->sa_lock);
  return;
 }

 if (VAR_7->sa_reg_attr_obj == 0) {
  VAR_7->sa_reg_attr_obj = FUNC_4(VAR_4->sa_os,
      VAR_2,
      VAR_7->sa_master_obj, VAR_3, VAR_5);
 }
 for (VAR_9 = 0; VAR_9 != VAR_7->sa_num_attrs; VAR_9++) {
  if (VAR_7->sa_attr_table[VAR_9].sa_registered)
   continue;
  FUNC_0(VAR_6, VAR_8[VAR_9].sa_attr, VAR_8[VAR_9].sa_length,
      VAR_8[VAR_9].sa_byteswap);
  FUNC_1(0 == FUNC_5(VAR_4->sa_os, VAR_7->sa_reg_attr_obj,
      VAR_8[VAR_9].sa_name, 8, 1, &VAR_6, VAR_5));
  VAR_8[VAR_9].sa_registered = VAR_1;
 }
 VAR_7->sa_need_attr_registration = VAR_0;
 FUNC_3(&VAR_7->sa_lock);
}
