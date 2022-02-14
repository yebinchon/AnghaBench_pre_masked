
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int mtime; int size; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (scalar_t__*,int *,char const*,int ,void*,int *) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int *) ;
 int FUNC_3 (int *,char const*,int ,int ,int *) ;
 int FUNC_4 (scalar_t__*,int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc__db_t *VAR_4,
                       const char *VAR_5,
                       svn_cancel_func_t VAR_6,
                       void *VAR_7,
                       apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9;
  FUNC_0(FUNC_1(&VAR_9, VAR_4,
                                 VAR_5,
                                 VAR_6, VAR_7,
                                 VAR_8));


  if (VAR_9)
    {
      apr_finfo_t VAR_10;

      FUNC_0(FUNC_2(&VAR_10, VAR_5,
                          VAR_1 | VAR_0, VAR_8));
      FUNC_0(FUNC_3(VAR_4, VAR_5,
                                                VAR_10.size, VAR_10.mtime,
                                                VAR_8));
    }
  else
    {
      svn_boolean_t VAR_11;
      FUNC_0(FUNC_4(&VAR_11,
                                               VAR_4, VAR_5, VAR_2,
                                               VAR_8));
    }
  return VAR_3;
}
