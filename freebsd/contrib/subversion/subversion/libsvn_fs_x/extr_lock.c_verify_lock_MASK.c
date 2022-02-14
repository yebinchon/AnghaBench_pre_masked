
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int path; int token; int owner; } ;
typedef TYPE_2__ svn_lock_t ;
struct TYPE_8__ {TYPE_1__* access_ctx; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int lock_tokens; int username; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int *,int ,int ,...) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_4,
            svn_lock_t *VAR_5)
{
  if ((! VAR_4->access_ctx) || (! VAR_4->access_ctx->username))
    return FUNC_2
      (VAR_2, ((void*)0),
       FUNC_0("Cannot verify lock on path '%s'; no username available"),
       VAR_5->path);

  else if (FUNC_1(VAR_4->access_ctx->username, VAR_5->owner) != 0)
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_0("User '%s' does not own lock on path '%s' (currently locked by '%s')"),
       VAR_4->access_ctx->username, VAR_5->path, VAR_5->owner);

  else if (FUNC_3(VAR_4->access_ctx->lock_tokens, VAR_5->token) == ((void*)0))
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_0("Cannot verify lock on path '%s'; no matching lock-token available"),
       VAR_5->path);

  return VAR_3;
}
