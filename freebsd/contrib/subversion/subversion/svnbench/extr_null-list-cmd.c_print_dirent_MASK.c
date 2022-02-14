
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_dirent_t ;
struct print_baton {int locks; int files; int directories; TYPE_1__* ctx; } ;
typedef int apr_pool_t ;
struct TYPE_4__ {int cancel_baton; int (* cancel_func ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3,
             const char *VAR_4,
             const svn_dirent_t *VAR_5,
             const svn_lock_t *VAR_6,
             const char *VAR_7,
             const char *VAR_8,
             const char *VAR_9,
             apr_pool_t *VAR_10)
{
  struct print_baton *VAR_11 = VAR_3;

  if (VAR_11->ctx->cancel_func)
    FUNC_0(VAR_11->ctx->cancel_func(VAR_11->ctx->cancel_baton));

  if (VAR_5->kind == VAR_1)
    VAR_11->directories++;
  if (VAR_5->kind == VAR_2)
    VAR_11->files++;
  if (VAR_6)
    VAR_11->locks++;

  return VAR_0;
}
