
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_1 (char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int **,char const*,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_5, apr_pool_t *VAR_6)
{
  const char *VAR_7 = FUNC_1(VAR_5, VAR_6);
  svn_error_t *VAR_8;
  apr_file_t *VAR_9;

  VAR_8 = FUNC_4(&VAR_9, VAR_7,
                         VAR_3 | VAR_0 | VAR_1,
                         VAR_2,
                         VAR_6);

  if (VAR_8 && FUNC_0(VAR_8->apr_err))
    {

      FUNC_2(VAR_8);
      return VAR_4;
    }

  return FUNC_3(VAR_8);
}
