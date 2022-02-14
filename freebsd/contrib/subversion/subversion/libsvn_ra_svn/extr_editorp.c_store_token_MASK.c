
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {TYPE_3__* token; int * pool; int * dstream; int is_file; void* baton; } ;
typedef TYPE_1__ ra_svn_token_entry_t ;
struct TYPE_9__ {TYPE_1__* last_token; int tokens; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int len; int data; } ;


 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 TYPE_3__* FUNC_2 (int *,int *) ;

__attribute__((used)) static ra_svn_token_entry_t *FUNC_3(ra_svn_driver_state_t *VAR_0,
                                         void *VAR_1,
                                         svn_string_t *VAR_2,
                                         svn_boolean_t VAR_3,
                                         apr_pool_t *VAR_4)
{
  ra_svn_token_entry_t *VAR_5;

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  VAR_5->token = FUNC_2(VAR_2, VAR_4);
  VAR_5->baton = VAR_1;
  VAR_5->is_file = VAR_3;
  VAR_5->dstream = ((void*)0);
  VAR_5->pool = VAR_4;

  FUNC_0(VAR_0->tokens, VAR_5->token->data, VAR_5->token->len, VAR_5);
  VAR_0->last_token = VAR_5;

  return VAR_5;
}
