
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct lock_token_get_args {int path; int lock_p; } ;


 int * FUNC_0 (int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0, trail_t *VAR_1)
{
  struct lock_token_get_args *VAR_2 = VAR_0;
  return FUNC_0(VAR_2->lock_p, VAR_2->path,
                                      VAR_1, VAR_1->pool);
}
