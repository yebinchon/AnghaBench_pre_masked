
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * revprop_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_5__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;



__attribute__((used)) static svn_boolean_t
FUNC_0(svn_fs_t *VAR_0,
                  apr_pool_t *VAR_1)
{
  svn_fs_x__data_t *VAR_2 = VAR_0->fsap_data;


  return VAR_2->revprop_cache != ((void*)0);
}
