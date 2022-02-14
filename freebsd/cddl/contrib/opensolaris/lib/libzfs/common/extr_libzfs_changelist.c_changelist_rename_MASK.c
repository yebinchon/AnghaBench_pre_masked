
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_9__ {int cl_list; } ;
typedef TYPE_2__ prop_changelist_t ;
typedef int newname ;
struct TYPE_10__ {char* zfs_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,TYPE_1__*) ;

void
FUNC_7(prop_changelist_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
 prop_changenode_t *VAR_4;
 char VAR_5[VAR_0];

 for (VAR_4 = FUNC_5(VAR_1->cl_list); VAR_4 != ((void*)0);
     VAR_4 = FUNC_6(VAR_1->cl_list, VAR_4)) {



  if (!FUNC_0(VAR_4->cn_handle->zfs_name, VAR_2))
   continue;




  FUNC_1(VAR_4->cn_handle);

  (void) FUNC_3(VAR_5, VAR_3, sizeof (VAR_5));
  (void) FUNC_2(VAR_5, VAR_4->cn_handle->zfs_name + FUNC_4(VAR_2));

  (void) FUNC_3(VAR_4->cn_handle->zfs_name, VAR_5,
      sizeof (VAR_4->cn_handle->zfs_name));
 }
}
