
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* err; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_13__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (char const*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_client_ctx_t *VAR_3,
                    const char *VAR_4,
                    svn_error_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  if (VAR_5 && VAR_5->apr_err != VAR_0)
    {
      if (VAR_3->notify_func2)
        {
          svn_wc_notify_t *VAR_7 = FUNC_2(
                                            VAR_4,
                                            VAR_2,
                                            VAR_6);
          VAR_7->err = VAR_5;
          VAR_3->notify_func2(VAR_3->notify_baton2, VAR_7, VAR_6);
        }
      FUNC_1(VAR_5);
      return VAR_1;
    }

  return VAR_5;
}
