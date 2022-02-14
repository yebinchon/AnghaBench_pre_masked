
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int * fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int*,int *,int *) ;

svn_error_t *
FUNC_4(svn_revnum_t *VAR_1,
                         svn_repos_t *VAR_2,
                         apr_time_t VAR_3,
                         apr_pool_t *VAR_4)
{
  svn_revnum_t VAR_5, VAR_6, VAR_7, VAR_8;
  apr_time_t VAR_9;
  svn_fs_t *VAR_10 = VAR_2->fs;


  FUNC_0(FUNC_3(&VAR_8, VAR_10, VAR_4));
  FUNC_0(FUNC_2(VAR_10, VAR_4));
  VAR_7 = 0;
  VAR_6 = VAR_8;

  while (VAR_7 <= VAR_6)
    {
      VAR_5 = (VAR_6 + VAR_7) / 2;
      FUNC_0(FUNC_1(&VAR_9, VAR_10, VAR_5, VAR_4));

      if (VAR_9 > VAR_3)
        {
          apr_time_t VAR_11;

          if ((VAR_5 - 1) < 0)
            {
              *VAR_1 = 0;
              break;
            }


          FUNC_0(FUNC_1(&VAR_11, VAR_10, VAR_5 - 1, VAR_4));
          if (VAR_11 <= VAR_3)
            {
              *VAR_1 = VAR_5 - 1;
              break;
            }

          VAR_6 = VAR_5 - 1;
        }

      else if (VAR_9 < VAR_3)
        {
          apr_time_t VAR_12;

          if ((VAR_5 + 1) > VAR_8)
            {
              *VAR_1 = VAR_8;
              break;
            }


          FUNC_0(FUNC_1(&VAR_12, VAR_10, VAR_5 + 1, VAR_4));
          if (VAR_12 > VAR_3)
            {
              *VAR_1 = VAR_5;
              break;
            }

          VAR_7 = VAR_5 + 1;
        }

      else
        {
          *VAR_1 = VAR_5;
          break;
        }
    }

  return VAR_0;
}
