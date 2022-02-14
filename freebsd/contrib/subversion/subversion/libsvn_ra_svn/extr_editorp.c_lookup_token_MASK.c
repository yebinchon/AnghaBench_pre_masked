
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {scalar_t__ is_file; int token; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_11__ {TYPE_2__* last_token; int tokens; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *FUNC_4(ra_svn_driver_state_t *VAR_2,
                                 svn_string_t *VAR_3,
                                 svn_boolean_t VAR_4,
                                 ra_svn_token_entry_t **VAR_5)
{
  if (VAR_2->last_token && FUNC_3(VAR_2->last_token->token, VAR_3))
    {
      *VAR_5 = VAR_2->last_token;
    }
  else
    {
      *VAR_5 = FUNC_1(VAR_2->tokens, VAR_3->data, VAR_3->len);
      VAR_2->last_token = *VAR_5;
    }

  if (!*VAR_5 || (*VAR_5)->is_file != VAR_4)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Invalid file or dir token during edit"));
  return VAR_1;
}
