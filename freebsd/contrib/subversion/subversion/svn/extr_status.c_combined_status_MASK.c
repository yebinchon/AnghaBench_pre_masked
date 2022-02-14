
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node_status; int text_status; int conflicted; int versioned; } ;
typedef TYPE_1__ svn_client_status_t ;
typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;



 int VAR_0 ;


__attribute__((used)) static enum svn_wc_status_kind
FUNC_0(const svn_client_status_t *VAR_1)
{
  enum svn_wc_status_kind VAR_2 = VAR_1->node_status;

  switch (VAR_1->node_status)
    {
      case 129:
        if (!VAR_1->versioned && VAR_1->conflicted)
          {

            VAR_2 = VAR_0;
            break;
          }

      case 128:

        VAR_2 = VAR_1->text_status;
        break;
      default:
        break;
    }

  return VAR_2;
}
