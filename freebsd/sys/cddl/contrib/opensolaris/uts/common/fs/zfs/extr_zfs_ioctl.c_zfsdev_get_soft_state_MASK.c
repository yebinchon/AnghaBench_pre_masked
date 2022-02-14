
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zss_type; void* zss_data; } ;
typedef TYPE_1__ zfs_soft_state_t ;
typedef int minor_t ;
typedef enum zfs_soft_state_type { ____Placeholder_zfs_soft_state_type } zfs_soft_state_type ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_0 ;

void *
FUNC_1(minor_t VAR_1, enum zfs_soft_state_type VAR_2)
{
 zfs_soft_state_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0) || VAR_3->zss_type != VAR_2)
  return (((void*)0));

 return (VAR_3->zss_data);
}
