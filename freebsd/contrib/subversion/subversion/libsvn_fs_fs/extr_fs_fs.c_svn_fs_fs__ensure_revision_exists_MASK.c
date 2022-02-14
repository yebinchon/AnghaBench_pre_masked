
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ youngest_rev_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,TYPE_1__*,int *) ;
 int * FUNC_4 (int ,int *,int ,scalar_t__) ;

svn_error_t *
FUNC_5(svn_revnum_t VAR_2,
                                  svn_fs_t *VAR_3,
                                  apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_3->fsap_data;

  if (! FUNC_1(VAR_2))
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_2("Invalid revision number '%ld'"), VAR_2);




  if (VAR_2 <= VAR_5->youngest_rev_cache)
    return VAR_1;

  FUNC_0(FUNC_3(&(VAR_5->youngest_rev_cache), VAR_3, VAR_4));


  if (VAR_2 <= VAR_5->youngest_rev_cache)
    return VAR_1;

  return FUNC_4(VAR_0, ((void*)0),
                           FUNC_2("No such revision %ld"), VAR_2);
}
