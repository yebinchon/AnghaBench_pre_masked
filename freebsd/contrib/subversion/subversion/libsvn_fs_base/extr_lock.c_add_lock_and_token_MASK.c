
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *,TYPE_1__*,int ) ;
 int * FUNC_2 (int ,char const*,char const*,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_lock_t *VAR_0,
                   const char *VAR_1,
                   const char *VAR_2,
                   trail_t *VAR_3)
{
  FUNC_0(FUNC_1(VAR_3->fs, VAR_1, VAR_0,
                               VAR_3, VAR_3->pool));
  return FUNC_2(VAR_3->fs, VAR_2, VAR_1,
                                    VAR_3, VAR_3->pool);
}
