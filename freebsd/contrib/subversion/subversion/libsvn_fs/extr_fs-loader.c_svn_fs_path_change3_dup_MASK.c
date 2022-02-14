
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; } ;
struct TYPE_8__ {scalar_t__ copyfrom_path; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_path_change3_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

svn_fs_path_change3_t *
FUNC_3(svn_fs_path_change3_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_fs_path_change3_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                            sizeof(*VAR_2));

  VAR_2->path.data = FUNC_2(VAR_1, VAR_2->path.data,
                                   VAR_2->path.len);
  if (VAR_2->copyfrom_path)
    VAR_2->copyfrom_path = FUNC_1(VAR_1, VAR_0->copyfrom_path);

  return VAR_2;
}
