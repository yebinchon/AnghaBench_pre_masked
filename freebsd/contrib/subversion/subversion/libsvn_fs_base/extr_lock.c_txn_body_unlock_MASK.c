
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* fs; int pool; } ;
typedef TYPE_2__ trail_t ;
struct TYPE_17__ {int * owner; } ;
typedef TYPE_3__ svn_lock_t ;
typedef int svn_error_t ;
struct unlock_args {int path; int * token; int break_lock; } ;
struct TYPE_18__ {TYPE_1__* access_ctx; } ;
struct TYPE_15__ {char const* username; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_5__*,char const*,int *) ;
 int * FUNC_2 (TYPE_5__*,int ) ;
 int * FUNC_3 (TYPE_5__*) ;
 int * FUNC_4 (char const*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 int * FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__**,TYPE_5__*,char const*,TYPE_2__*,int ) ;
 int FUNC_8 (char const**,TYPE_5__*,int ,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_0, trail_t *VAR_1)
{
  struct unlock_args *VAR_2 = VAR_0;
  const char *VAR_3;
  svn_lock_t *VAR_4;


  FUNC_0(FUNC_8(&VAR_3, VAR_1->fs, VAR_2->path,
                                     VAR_1, VAR_1->pool));


  if (!VAR_2->break_lock)
    {

      if (VAR_2->token == ((void*)0))
        return FUNC_6(VAR_1->fs, VAR_2->path);
      else if (FUNC_5(VAR_3, VAR_2->token) != 0)
        return FUNC_2(VAR_1->fs, VAR_2->path);

      FUNC_0(FUNC_7(&VAR_4, VAR_1->fs, VAR_3,
                                   VAR_1, VAR_1->pool));


      if (!VAR_1->fs->access_ctx || !VAR_1->fs->access_ctx->username)
        return FUNC_3(VAR_1->fs);


      if (FUNC_5(VAR_1->fs->access_ctx->username, VAR_4->owner) != 0)
        return FUNC_1(
           VAR_1->fs,
           VAR_1->fs->access_ctx->username,
           VAR_4->owner);
    }


  return FUNC_4(VAR_3, VAR_2->path, VAR_1);
}
