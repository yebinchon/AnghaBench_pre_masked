
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_fs_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int **,int *,char const*,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_4 (int *,int *,char const*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_2,
                         trail_t *VAR_3,
                         apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5 = VAR_1;
  svn_fs_t *VAR_6 = VAR_3->fs;
  svn_checksum_t *VAR_7;


  FUNC_0(FUNC_3(((void*)0), &VAR_7,
                                              VAR_6, VAR_2, VAR_3, VAR_4));
  if (VAR_7)
    {
      VAR_5 = FUNC_4(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4);
      if (VAR_5 && (VAR_5->apr_err == VAR_0))
        {
          FUNC_1(VAR_5);
          VAR_5 = VAR_1;
        }
    }
  return FUNC_2(VAR_5);
}
