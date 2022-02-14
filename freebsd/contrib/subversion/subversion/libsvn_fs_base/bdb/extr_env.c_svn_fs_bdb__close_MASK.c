
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ env; int error_info; scalar_t__ pool; } ;
typedef TYPE_1__ bdb_env_t ;
struct TYPE_7__ {scalar_t__ env; TYPE_5__* error_info; TYPE_1__* bdb; } ;
typedef TYPE_2__ bdb_env_baton_t ;
struct TYPE_8__ {scalar_t__ refcount; int pending_errors; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

svn_error_t *
FUNC_6(bdb_env_baton_t *VAR_2)
{
  bdb_env_t *VAR_3 = VAR_2->bdb;

  FUNC_0(VAR_2->env == VAR_2->bdb->env);
  FUNC_0(VAR_2->error_info->refcount > 0);



  VAR_2->bdb = ((void*)0);





  if (0 == --VAR_2->error_info->refcount && VAR_3->pool)
    {
      FUNC_4(VAR_2->error_info->pending_errors);




    }


  FUNC_1(VAR_1, FUNC_5(VAR_3));

  return VAR_0;
}
