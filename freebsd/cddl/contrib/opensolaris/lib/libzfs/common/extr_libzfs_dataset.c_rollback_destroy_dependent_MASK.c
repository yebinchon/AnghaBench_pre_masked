
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_8__ {void* cb_error; scalar_t__ cb_force; } ;
typedef TYPE_2__ rollback_data_t ;
typedef int prop_changelist_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(zfs_handle_t *VAR_4, void *VAR_5)
{
 rollback_data_t *VAR_6 = VAR_5;
 prop_changelist_t *VAR_7;


 VAR_7 = FUNC_1(VAR_4, VAR_3, 0,
     VAR_6->cb_force ? VAR_2: 0);
 if (VAR_7 == ((void*)0) || FUNC_3(VAR_7) != 0) {
  VAR_6->cb_error = VAR_1;
  FUNC_5(VAR_4);
  return (0);
 }
 if (FUNC_6(VAR_4, VAR_0) != 0)
  VAR_6->cb_error = VAR_1;
 else
  FUNC_4(VAR_7, VAR_4->zfs_name);
 (void) FUNC_2(VAR_7);
 FUNC_0(VAR_7);

 FUNC_5(VAR_4);
 return (0);
}
