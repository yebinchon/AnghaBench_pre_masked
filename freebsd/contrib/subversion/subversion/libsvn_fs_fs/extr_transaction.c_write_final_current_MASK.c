
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,TYPE_1__*,int const*,int *) ;
 int * FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_1,
                    const svn_fs_fs__id_part_t *VAR_2,
                    svn_revnum_t VAR_3,
                    apr_uint64_t VAR_4,
                    apr_uint64_t VAR_5,
                    apr_pool_t *VAR_6)
{
  apr_uint64_t VAR_7;
  apr_uint64_t VAR_8;
  fs_fs_data_t *VAR_9 = VAR_1->fsap_data;

  if (VAR_9->format >= VAR_0)
    return FUNC_2(VAR_1, VAR_3, 0, 0, VAR_6);



  FUNC_0(FUNC_1(&VAR_7, &VAR_8, VAR_1, VAR_2, VAR_6));

  VAR_4 += VAR_7;
  VAR_5 += VAR_8;

  return FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5,
                                  VAR_6);
}
