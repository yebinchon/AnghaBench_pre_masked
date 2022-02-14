
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_4__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  svn_error_t *VAR_2;
  svn_fs_t *VAR_3 = VAR_1;

  VAR_2 = FUNC_1(VAR_3, ((void*)0));

  if (VAR_2)
    {
      apr_status_t VAR_4 = VAR_2->apr_err;
      FUNC_0(VAR_2);
      return VAR_4;
    }

  return VAR_0;
}
