
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_6__ {int number; } ;
typedef TYPE_2__ svn_fs_fs__id_part_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 char const* FUNC_1 (int *,int ,int ,char*,int ) ;

const char *
FUNC_2(svn_fs_t *VAR_3,
                            const svn_fs_fs__id_part_t *VAR_4,
                            apr_pool_t *VAR_5)
{
  char VAR_6[VAR_1];
  apr_size_t VAR_7 = FUNC_0(VAR_6, VAR_4->number);

  if (VAR_7 > 1)
    VAR_6[VAR_7 - 1] = '\0';

  return FUNC_1(VAR_5, VAR_3->path, VAR_0,
                              VAR_6, VAR_2);
}
