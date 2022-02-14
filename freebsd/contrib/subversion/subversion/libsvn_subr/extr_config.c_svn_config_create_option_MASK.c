
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {int state; int * x_value; void* value; void* hash_key; void* name; } ;
typedef TYPE_1__ cfg_option_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,char const*) ;
 void* FUNC_2 (void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(cfg_option_t **VAR_1,
                         const char *VAR_2,
                         const char *VAR_3,
                         svn_boolean_t VAR_4,
                         apr_pool_t *VAR_5)
{
  cfg_option_t *VAR_6;

  VAR_6 = FUNC_0(VAR_5, sizeof(cfg_option_t));
  VAR_6->name = FUNC_1(VAR_5, VAR_2);
  if(VAR_4)
    VAR_6->hash_key = VAR_6->name;
  else
    VAR_6->hash_key = FUNC_2(FUNC_1(VAR_5, VAR_2));

  VAR_6->value = FUNC_1(VAR_5, VAR_3);
  VAR_6->x_value = ((void*)0);
  VAR_6->state = VAR_0;

  *VAR_1 = VAR_6;
}
