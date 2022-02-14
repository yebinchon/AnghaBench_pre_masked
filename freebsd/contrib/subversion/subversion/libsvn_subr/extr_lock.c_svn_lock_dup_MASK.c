
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* comment; void* owner; void* token; void* path; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;

svn_lock_t *
FUNC_2(const svn_lock_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_lock_t *VAR_2;

  if (VAR_0 == ((void*)0))
    return ((void*)0);

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  *VAR_2 = *VAR_0;

  VAR_2->path = FUNC_1(VAR_1, VAR_2->path);
  VAR_2->token = FUNC_1(VAR_1, VAR_2->token);
  VAR_2->owner = FUNC_1(VAR_1, VAR_2->owner);
  VAR_2->comment = FUNC_1(VAR_1, VAR_2->comment);

  return VAR_2;
}
