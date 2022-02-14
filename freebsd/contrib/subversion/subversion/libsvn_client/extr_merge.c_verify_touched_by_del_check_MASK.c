
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node_status; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
struct dir_delete_baton_t {int found_edit; int compared_abspaths; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,char const*) ;




__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3,
                            const char *VAR_4,
                            const svn_wc_status3_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  struct dir_delete_baton_t *VAR_7 = VAR_3;

  if (FUNC_1(VAR_7->compared_abspaths, VAR_4))
    return VAR_1;

  switch (VAR_5->node_status)
    {
      case 130:
      case 129:
      case 128:
        return VAR_1;

      default:
        VAR_7->found_edit = VAR_2;
        return FUNC_0(VAR_0, ((void*)0), ((void*)0));
    }
}
