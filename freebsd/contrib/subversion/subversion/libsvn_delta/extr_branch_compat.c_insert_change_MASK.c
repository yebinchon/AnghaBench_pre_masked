
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef enum restructure_action_t { ____Placeholder_restructure_action_t } restructure_action_t ;
struct TYPE_6__ {int action; int changing_rev; } ;
typedef TYPE_1__ change_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;






 int FUNC_0 () ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 TYPE_1__* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(change_node_t **VAR_2, apr_hash_t *VAR_3,
              const char *VAR_4,
              enum restructure_action_t VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_2(VAR_3);
  change_node_t *VAR_7 = FUNC_5(VAR_3, VAR_4);


  switch (VAR_5)
    {
    case 128:
      if (VAR_7)
        {


          FUNC_1(VAR_7->action == 131);
        }
      break;

    case 131:
      if (VAR_7)
        {


          FUNC_1(VAR_7->action == 129);
          VAR_7->action = VAR_5;
        }
      break;







    case 129:
      FUNC_0();
    }

  if (VAR_7)
    {
      if (VAR_5 != 128)
        {
          VAR_7->action = VAR_5;
        }
    }
  else
    {

      VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7));
      VAR_7->action = VAR_5;
      VAR_7->changing_rev = VAR_0;

      FUNC_6(VAR_3, FUNC_4(VAR_6, VAR_4), VAR_7);
    }

  *VAR_2 = VAR_7;
  return VAR_1;
}
