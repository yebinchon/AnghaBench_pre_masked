
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_8__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t
FUNC_7(void *VAR_2)
{
  svn_wc__db_wcroot_t *VAR_3 = VAR_2;
  svn_error_t *VAR_4;

  FUNC_0(VAR_3->sdb != ((void*)0));
  VAR_4 = FUNC_5(VAR_3->sdb);
  VAR_3->sdb = ((void*)0);
  if (VAR_4)
    {
      apr_status_t VAR_5 = VAR_4->apr_err;
      FUNC_2(VAR_4);
      return VAR_5;
    }

  return VAR_0;
}
