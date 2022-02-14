
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_conflict_result_t ;
struct TYPE_3__ {int kind; int local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef scalar_t__ svn_wc_conflict_choice_t ;
typedef int svn_error_t ;
struct conflict_func_merge_cmd_baton {int accept_which; int conflict_stats; int path_prefix; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 char* FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_2 (scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_wc_conflict_result_t **VAR_8,
                        const svn_wc_conflict_description2_t *VAR_9,
                        void *VAR_10,
                        apr_pool_t *VAR_11,
                        apr_pool_t *VAR_12)
{
  struct conflict_func_merge_cmd_baton *VAR_13 = VAR_10;
  svn_wc_conflict_choice_t VAR_14;

  switch (VAR_13->accept_which)
    {
    case 133:
    case 137:
    case 129:
    case 132:

      VAR_14 = VAR_5;
      break;
    case 139:
      VAR_14 = VAR_1;
      break;
    case 128:
      VAR_14 = VAR_2;
      break;
    case 135:
      VAR_14 = VAR_3;
      break;
    case 131:
      VAR_14 = VAR_6;
      break;
    case 134:
      VAR_14 = VAR_4;
      break;
    case 130:
      VAR_14 = VAR_7;
      break;
    case 138:
    case 136:


      VAR_14 = VAR_5;
      break;
    }

  *VAR_8 = FUNC_2(VAR_14, ((void*)0), VAR_11);


  if (VAR_14 != VAR_5)
    {
      const char *VAR_15;

      VAR_15 = FUNC_1(VAR_13->path_prefix,
                                                     VAR_9->local_abspath,
                                                     VAR_12);
      FUNC_0(VAR_13->conflict_stats, VAR_15,
                                      VAR_9->kind);
    }

  return VAR_0;
}
