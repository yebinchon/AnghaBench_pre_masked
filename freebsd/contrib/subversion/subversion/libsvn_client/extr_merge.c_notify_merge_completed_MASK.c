
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
struct TYPE_3__ {int notify_baton2; int (* notify_func2 ) (int ,int *,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (char const*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1,
                       svn_client_ctx_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  if (VAR_2->notify_func2)
    {
      svn_wc_notify_t *VAR_4
        = FUNC_1(VAR_1, VAR_0,
                               VAR_3);
      VAR_2->notify_func2(VAR_2->notify_baton2, VAR_4, VAR_3);
    }
}
