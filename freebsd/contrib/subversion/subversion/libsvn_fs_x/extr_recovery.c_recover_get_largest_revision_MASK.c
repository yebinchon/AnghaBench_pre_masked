
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                             svn_revnum_t *VAR_2,
                             apr_pool_t *VAR_3)
{




  apr_pool_t *VAR_4;
  svn_revnum_t VAR_5, VAR_6 = 1;

  VAR_4 = FUNC_3(VAR_3);

  while (1)
    {
      svn_boolean_t VAR_7;
      FUNC_2(VAR_4);

      FUNC_0(FUNC_1(&VAR_7, VAR_1, VAR_6, VAR_4));
      if (!VAR_7)
        break;

      VAR_6 <<= 1;
    }

  VAR_5 = VAR_6 >> 1;



  while (VAR_5 + 1 < VAR_6)
    {
      svn_revnum_t VAR_8 = VAR_5 + ((VAR_6 - VAR_5) / 2);
      svn_boolean_t VAR_9;
      FUNC_2(VAR_4);

      FUNC_0(FUNC_1(&VAR_9, VAR_1, VAR_8, VAR_4));
      if (VAR_9)
        VAR_5 = VAR_8;
      else
        VAR_6 = VAR_8;
    }

  FUNC_4(VAR_4);


  *VAR_2 = VAR_5;
  return VAR_0;
}
