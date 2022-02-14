
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef scalar_t__ svn_client_conflict_option_id_t ;
struct TYPE_6__ {scalar_t__ choice; int accept_arg; scalar_t__ code; } ;
typedef TYPE_1__ resolver_option_t ;
struct TYPE_7__ {int is_recommended; int accept_arg; int long_desc; int label; scalar_t__ code; scalar_t__ choice; } ;
typedef TYPE_2__ client_option_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(client_option_t **VAR_2,
                       svn_client_conflict_t *VAR_3,
                       const resolver_option_t *VAR_4,
                       svn_client_conflict_option_t *VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  const resolver_option_t *VAR_8;
  svn_client_conflict_option_id_t VAR_9;
  svn_client_conflict_option_id_t VAR_10;

  VAR_9 = FUNC_3(VAR_5);
  VAR_10 = FUNC_1(VAR_3);

  for (VAR_8 = VAR_4; VAR_8->code; VAR_8++)
    {
      if (VAR_8->choice == VAR_9)
        {
          client_option_t *VAR_11;

          VAR_11 = FUNC_0(VAR_6, sizeof(*VAR_11));
          VAR_11->choice = VAR_9;
          VAR_11->code = VAR_8->code;
          VAR_11->label = FUNC_4(
              VAR_5,
              VAR_6);
          VAR_11->long_desc = FUNC_2(
                                    VAR_5,
                                    VAR_6);
          VAR_11->accept_arg = VAR_8->accept_arg;
          VAR_11->is_recommended =
            (VAR_10 != VAR_1 &&
             VAR_9 == VAR_10);

          *VAR_2 = VAR_11;

          return VAR_0;
        }
    }

  *VAR_2 = ((void*)0);

  return VAR_0;
}
