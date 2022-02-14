
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int **,int *,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_2, svn_revnum_t *VAR_3, apr_pool_t *VAR_4)
{




  apr_pool_t *VAR_5;
  svn_revnum_t VAR_6, VAR_7 = 1;

  VAR_5 = FUNC_4(VAR_4);

  while (1)
    {
      svn_error_t *VAR_8;
      svn_fs_fs__revision_file_t *VAR_9;
      FUNC_3(VAR_5);

      VAR_8 = FUNC_2(&VAR_9, VAR_2, VAR_7, VAR_5,
                                             VAR_5);
      if (VAR_8 && VAR_8->apr_err == VAR_0)
        {
          FUNC_1(VAR_8);
          break;
        }
      else
        FUNC_0(VAR_8);

      VAR_7 <<= 1;
    }

  VAR_6 = VAR_7 >> 1;



  while (VAR_6 + 1 < VAR_7)
    {
      svn_revnum_t VAR_10 = VAR_6 + ((VAR_7 - VAR_6) / 2);
      svn_error_t *VAR_11;
      svn_fs_fs__revision_file_t *VAR_12;
      FUNC_3(VAR_5);

      VAR_11 = FUNC_2(&VAR_12, VAR_2, VAR_10, VAR_5,
                                             VAR_5);
      if (VAR_11 && VAR_11->apr_err == VAR_0)
        {
          FUNC_1(VAR_11);
          VAR_7 = VAR_10;
        }
      else
        {
          FUNC_0(VAR_11);
          VAR_6 = VAR_10;
        }
    }

  FUNC_5(VAR_5);


  *VAR_3 = VAR_6;
  return VAR_1;
}
