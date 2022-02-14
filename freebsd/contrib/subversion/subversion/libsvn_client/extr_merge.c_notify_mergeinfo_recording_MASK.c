
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * merge_range; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_merge_range_t ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int * FUNC_1 (int const*,int *) ;
 TYPE_1__* FUNC_2 (char const*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1,
                           const svn_merge_range_t *VAR_2,
                           svn_client_ctx_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  if (VAR_3->notify_func2)
    {
      svn_wc_notify_t *VAR_5 = FUNC_2(
        VAR_1, VAR_0, VAR_4);

      VAR_5->merge_range = VAR_2 ? FUNC_1(VAR_2, VAR_4) : ((void*)0);
      VAR_3->notify_func2(VAR_3->notify_baton2, VAR_5, VAR_4);
    }
}
