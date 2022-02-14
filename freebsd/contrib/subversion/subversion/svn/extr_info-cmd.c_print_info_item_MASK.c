
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {char* URL; char* repos_root_URL; char* repos_UUID; char* last_changed_author; TYPE_1__* wc_info; int last_changed_date; int last_changed_rev; int rev; int kind; } ;
typedef TYPE_2__ svn_client_info2_t ;
struct TYPE_8__ {int print_what; scalar_t__ start_new_line; int path_prefix; int target_is_path; int multiple_targets; } ;
typedef TYPE_3__ print_info_baton_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {char* wcroot_abspath; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char const* const,int *) ;
 int FUNC_3 (char*,char const* const,int *) ;
 char* FUNC_4 (TYPE_2__ const*,int *) ;
 int VAR_2 ;
 char* FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (char*,int ,int *) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_3,
                  const char *VAR_4,
                  const svn_client_info2_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  print_info_baton_t *const VAR_7 = VAR_3;
  const char *const VAR_8 =
    (!VAR_7->multiple_targets ? ((void*)0)
     : (!VAR_7->target_is_path ? VAR_5->URL
        : FUNC_5(
            VAR_7->path_prefix, VAR_4, VAR_6)));

  if (VAR_7->start_new_line)
    FUNC_0(FUNC_6("\n", VAR_2, VAR_6));

  switch (VAR_7->print_what)
    {
    case 137:
      FUNC_0(FUNC_3(FUNC_7(VAR_5->kind),
                                     VAR_8, VAR_6));
      break;

    case 129:
      FUNC_0(FUNC_3(VAR_5->URL, VAR_8, VAR_6));
      break;

    case 133:
      FUNC_0(FUNC_3(FUNC_4(VAR_5, VAR_6),
                                     VAR_8, VAR_6));
      break;

    case 132:
      FUNC_0(FUNC_3(VAR_5->repos_root_URL, VAR_8, VAR_6));
      break;

    case 131:
      FUNC_0(FUNC_3(VAR_5->repos_UUID, VAR_8, VAR_6));
      break;

    case 130:
      FUNC_0(FUNC_2(VAR_5->rev, VAR_8, VAR_6));
      break;

    case 134:
      FUNC_0(FUNC_2(VAR_5->last_changed_rev,
                                       VAR_8, VAR_6));
      break;

    case 135:
      FUNC_0(FUNC_3(
                  (!VAR_5->last_changed_date ? ((void*)0)
                   : FUNC_8(VAR_5->last_changed_date, VAR_6)),
                  VAR_8, VAR_6));
      break;

    case 136:
      FUNC_0(FUNC_3(VAR_5->last_changed_author,
                                     VAR_8, VAR_6));
      break;

    case 128:
      FUNC_0(FUNC_3(
                  (VAR_5->wc_info && VAR_5->wc_info->wcroot_abspath
                   ? VAR_5->wc_info->wcroot_abspath : ((void*)0)),
                  VAR_8, VAR_6));
      break;

    default:
      FUNC_1();
    }

  VAR_7->start_new_line = VAR_1;
  return VAR_0;
}
