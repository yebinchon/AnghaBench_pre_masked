
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_error_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_wc__db_status_t *VAR_8,
                          svn_wc__db_status_t VAR_9)
{
  svn_wc__db_status_t VAR_10 = VAR_9;

  FUNC_0(VAR_10 == VAR_6
                 || VAR_10 == VAR_7
                 || VAR_10 == VAR_2
                 || VAR_10 == VAR_5
                 || VAR_10 == VAR_4);

  if (VAR_10 == VAR_4)
    {
      *VAR_8 = VAR_4;
    }
  else if (VAR_10 == VAR_7
           || VAR_10 == VAR_2)
    {






      *VAR_8 = VAR_3;
    }
  else
    {



      *VAR_8 = VAR_1;
    }

  return VAR_0;
}
