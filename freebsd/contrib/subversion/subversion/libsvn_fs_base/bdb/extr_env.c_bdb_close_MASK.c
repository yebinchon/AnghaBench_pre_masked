
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ pool; TYPE_2__* env; } ;
typedef TYPE_1__ bdb_env_t ;
struct TYPE_7__ {int (* close ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_5(bdb_env_t *VAR_3)
{
  svn_error_t *VAR_4 = VAR_2;



  int VAR_5 = VAR_3->env->close(VAR_3->env, 0);



  if (VAR_5 && (!VAR_1 || VAR_5 != VAR_0))
    VAR_4 = FUNC_0(VAR_3, VAR_5);



  if (VAR_3->pool)
    FUNC_4(VAR_3->pool);
  else
    FUNC_1(VAR_3);
  return FUNC_3(VAR_4);
}
