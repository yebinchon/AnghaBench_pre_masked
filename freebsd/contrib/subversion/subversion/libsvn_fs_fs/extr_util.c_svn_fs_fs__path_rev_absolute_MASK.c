
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 char const* FUNC_0 (TYPE_1__*,int ,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

const char *
FUNC_2(svn_fs_t *VAR_1,
                             svn_revnum_t VAR_2,
                             apr_pool_t *VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_1->fsap_data;
  svn_boolean_t VAR_5 = VAR_4->format >= VAR_0
                         && FUNC_1(VAR_1, VAR_2);

  return FUNC_0(VAR_1, VAR_2, VAR_5, VAR_3);
}
