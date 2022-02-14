
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node_status; int const text_status; int const prop_status; int actual_kind; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
struct TYPE_5__ {void* found_not_delete; void* found_mod; int ignore_unversioned; } ;
typedef TYPE_2__ modcheck_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int * FUNC_0 (int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_5,
                  const char *VAR_6,
                  const svn_wc_status3_t *VAR_7,
                  apr_pool_t *VAR_8)
{
  modcheck_baton_t *VAR_9 = VAR_5;

  switch (VAR_7->node_status)
    {
      case 131:
      case 136:
      case 132:
      case 137:
        break;

      case 135:
        if ((VAR_7->text_status != 131
             && VAR_7->text_status != 132)
            || (VAR_7->prop_status != 131
                && VAR_7->prop_status != 132))
          {
            VAR_9->found_mod = VAR_2;
            VAR_9->found_not_delete = VAR_2;

            return FUNC_0(VAR_0, ((void*)0), ((void*)0));
          }
        break;

      case 138:
        VAR_9->found_mod = VAR_2;
        if (!VAR_9->ignore_unversioned
            && VAR_7->actual_kind != VAR_3
            && VAR_7->actual_kind != VAR_4)
          {

            VAR_9->found_not_delete = VAR_2;
            return FUNC_0(VAR_0, ((void*)0), ((void*)0));
          }
        break;

      case 128:
        if (VAR_9->ignore_unversioned)
          break;

      case 134:
      case 130:
        VAR_9->found_mod = VAR_2;
        VAR_9->found_not_delete = VAR_2;

        return FUNC_0(VAR_0, ((void*)0), ((void*)0));

      default:
      case 139:
      case 129:
      case 133:
        VAR_9->found_mod = VAR_2;
        VAR_9->found_not_delete = VAR_2;

        return FUNC_0(VAR_0, ((void*)0), ((void*)0));
    }

  return VAR_1;
}
