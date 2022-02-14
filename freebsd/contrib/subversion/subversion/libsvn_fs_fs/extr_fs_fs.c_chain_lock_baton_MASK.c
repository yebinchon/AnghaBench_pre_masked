
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* is_outer_most_lock; void* is_inner_most_lock; int * lock_pool; struct TYPE_6__* baton; int body; int fs; } ;
typedef TYPE_1__ with_lock_baton_t ;
typedef int lock_id_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static with_lock_baton_t *
FUNC_2(lock_id_t VAR_3,
                 with_lock_baton_t *VAR_4)
{

  apr_pool_t *VAR_5 = VAR_4->lock_pool;
  with_lock_baton_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));


  VAR_6->fs = VAR_4->fs;



  VAR_6->body = VAR_2;
  VAR_6->baton = VAR_4;


  VAR_6->lock_pool = VAR_5;


  VAR_6->is_inner_most_lock = VAR_0;
  VAR_6->is_outer_most_lock = VAR_1;
  VAR_4->is_outer_most_lock = VAR_0;



  FUNC_1(VAR_6, VAR_3);

  return VAR_6;
}
