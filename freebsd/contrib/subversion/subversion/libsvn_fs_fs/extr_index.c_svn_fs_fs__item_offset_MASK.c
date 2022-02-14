
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {scalar_t__ is_packed; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,TYPE_1__*,int ,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__*,int *,int const*,scalar_t__,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;

svn_error_t *
FUNC_6(apr_off_t *VAR_1,
                       svn_fs_t *VAR_2,
                       svn_fs_fs__revision_file_t *VAR_3,
                       svn_revnum_t VAR_4,
                       const svn_fs_fs__id_part_t *VAR_5,
                       apr_uint64_t VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8 = VAR_0;
  if (VAR_5)
    {
      if (FUNC_5(VAR_2))
        {


          FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_5,
                                         VAR_6, VAR_7));
        }
      else
        {

          *VAR_1 = VAR_6;
        }
    }
  else if (FUNC_5(VAR_2))
    {

      FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
                               VAR_6, VAR_7));
    }
  else if (VAR_3->is_packed)
    {

      apr_off_t VAR_9;
      FUNC_0(FUNC_4(&VAR_9, VAR_2, VAR_4,
                                           VAR_7));
      *VAR_1 = VAR_9 + VAR_6;
    }
  else
    {


      *VAR_1 = VAR_6;
    }

  return FUNC_3(VAR_8);
}
