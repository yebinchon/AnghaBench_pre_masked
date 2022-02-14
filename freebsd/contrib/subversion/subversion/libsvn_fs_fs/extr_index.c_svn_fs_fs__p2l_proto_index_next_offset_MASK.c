
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int ,scalar_t__*,int *) ;

svn_error_t *
FUNC_3(apr_off_t *VAR_4,
                                       apr_file_t *VAR_5,
                                       apr_pool_t *VAR_6)
{
  apr_off_t VAR_7 = 0;


  FUNC_0(FUNC_2(VAR_5, VAR_0, &VAR_7, VAR_6));
  if (VAR_7 == 0)
    {
      *VAR_4 = 0;
    }
  else
    {

      svn_fs_fs__p2l_entry_t VAR_8;
      VAR_7 -= VAR_2;

      FUNC_0(FUNC_2(VAR_5, VAR_1, &VAR_7, VAR_6));
      FUNC_0(FUNC_1(VAR_5, &VAR_8,
                                              ((void*)0), VAR_6));


      *VAR_4 = VAR_8.offset + VAR_8.size;
    }

  return VAR_3;
}
