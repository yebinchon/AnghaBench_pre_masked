
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ size; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_4,
                             const char *VAR_5,
                             const char *VAR_6,
                             apr_pool_t *VAR_7)
{
  apr_finfo_t VAR_8;
  apr_finfo_t VAR_9;
  apr_status_t VAR_10;
  const char *VAR_11, *VAR_12;




  FUNC_0(FUNC_2(&VAR_11, VAR_5, VAR_7));
  FUNC_0(FUNC_2(&VAR_12, VAR_6, VAR_7));


  VAR_10 = FUNC_1(&VAR_8, VAR_11, VAR_0, VAR_7);
  if (VAR_10)
    {




      *VAR_4 = VAR_1;
      return VAR_2;
    }

  VAR_10 = FUNC_1(&VAR_9, VAR_12, VAR_0, VAR_7);
  if (VAR_10)
    {

      *VAR_4 = VAR_1;
      return VAR_2;
    }


  if (VAR_8 == VAR_9)
    *VAR_4 = VAR_1;
  else
    *VAR_4 = VAR_3;

  return VAR_2;
}
