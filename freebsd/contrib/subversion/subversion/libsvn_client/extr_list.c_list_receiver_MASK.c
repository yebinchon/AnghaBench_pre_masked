
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef int svn_dirent_t ;
struct TYPE_4__ {int fs_base_path; int list_baton; int (* list_func ) (int ,char const*,int *,int const*,int ,int *,int *,int *) ;TYPE_1__* ctx; scalar_t__ locks; } ;
typedef TYPE_2__ receiver_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int cancel_baton; int (* cancel_func ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int *,int const*,int ,int *,int *,int *) ;
 char* FUNC_3 (int ,char const*,int *) ;
 char* FUNC_4 (int ,char const*) ;
 int * FUNC_5 (scalar_t__,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_1,
              svn_dirent_t *VAR_2,
              void *VAR_3,
              apr_pool_t *VAR_4)
{
  receiver_baton_t *VAR_5 = VAR_3;
  const svn_lock_t *VAR_6 = ((void*)0);


  VAR_1 = FUNC_4(VAR_5->fs_base_path, VAR_1);

  if (VAR_5->locks)
    {
      const char *VAR_7 = FUNC_3(VAR_5->fs_base_path, VAR_1, VAR_4);
      VAR_6 = FUNC_5(VAR_5->locks, VAR_7);
    }

  if (VAR_5->ctx->cancel_func)
    FUNC_0(VAR_5->ctx->cancel_func(VAR_5->ctx->cancel_baton));

  FUNC_0(VAR_5->list_func(VAR_5->list_baton, VAR_1, VAR_2, VAR_6,
                       VAR_5->fs_base_path, ((void*)0), ((void*)0), VAR_4));

  return VAR_0;
}
