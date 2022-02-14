
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_share_proto_t ;
struct TYPE_7__ {int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_8__ {scalar_t__ cl_prop; int cl_list; } ;
typedef TYPE_2__ prop_changelist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;

int
FUNC_3(prop_changelist_t *VAR_2, zfs_share_proto_t *VAR_3)
{
 prop_changenode_t *VAR_4;
 int VAR_5 = 0;

 if (VAR_2->cl_prop != VAR_0 &&
     VAR_2->cl_prop != VAR_1)
  return (0);

 for (VAR_4 = FUNC_0(VAR_2->cl_list); VAR_4 != ((void*)0);
     VAR_4 = FUNC_1(VAR_2->cl_list, VAR_4)) {
  if (FUNC_2(VAR_4->cn_handle, ((void*)0), VAR_3) != 0)
   VAR_5 = -1;
 }

 return (VAR_5);
}
