
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zfs_type; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_6__ {int holdtag; int * snapholds; } ;
typedef TYPE_2__ send_dump_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(zfs_handle_t *VAR_1, send_dump_data_t *VAR_2)
{
 FUNC_0(VAR_1->zfs_type == VAR_0);





 if (VAR_2->snapholds == ((void*)0))
  return;

 FUNC_1(VAR_2->snapholds, VAR_1->zfs_name, VAR_2->holdtag);
}
