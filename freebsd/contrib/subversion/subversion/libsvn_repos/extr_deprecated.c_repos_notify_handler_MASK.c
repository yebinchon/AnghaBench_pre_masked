
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_3__ {int action; int old_revision; int path; int node_action; int new_revision; int revision; int warning_str; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,char*,int ,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2,
                     const svn_repos_notify_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  svn_stream_t *VAR_5 = VAR_2;
  apr_size_t VAR_6;

  switch (VAR_3->action)
  {
    case 128:
      FUNC_1(FUNC_3(VAR_5, VAR_3->warning_str));
      return;

    case 136:
      FUNC_1(FUNC_2(VAR_5, VAR_4,
                                        FUNC_0("* Dumped revision %ld.\n"),
                                        VAR_3->revision));
      return;

    case 129:
      FUNC_1(FUNC_2(VAR_5, VAR_4,
                                        FUNC_0("* Verified revision %ld.\n"),
                                        VAR_3->revision));
      return;

    case 131:
      if (VAR_3->old_revision == VAR_0)
        {
          FUNC_1(FUNC_2(VAR_5, VAR_4,
                            FUNC_0("\n------- Committed revision %ld >>>\n\n"),
                            VAR_3->new_revision));
        }
      else
        {
          FUNC_1(FUNC_2(VAR_5, VAR_4,
                            FUNC_0("\n------- Committed new rev %ld"
                              " (loaded from original rev %ld"
                              ") >>>\n\n"), VAR_3->new_revision,
                              VAR_3->old_revision));
        }
      return;

    case 133:
      {
        switch (VAR_3->node_action)
        {
          case 139:
            FUNC_1(FUNC_2(VAR_5, VAR_4,
                                  FUNC_0("     * editing path : %s ..."),
                                  VAR_3->path));
            break;

          case 138:
            FUNC_1(FUNC_2(VAR_5, VAR_4,
                                  FUNC_0("     * deleting path : %s ..."),
                                  VAR_3->path));
            break;

          case 140:
            FUNC_1(FUNC_2(VAR_5, VAR_4,
                                  FUNC_0("     * adding path : %s ..."),
                                  VAR_3->path));
            break;

          case 137:
            FUNC_1(FUNC_2(VAR_5, VAR_4,
                                  FUNC_0("     * replacing path : %s ..."),
                                  VAR_3->path));
            break;

        }
      }
      return;

    case 134:
      VAR_6 = 7;
      FUNC_1(FUNC_4(VAR_5, FUNC_0(" done.\n"), &VAR_6));
      return;

    case 135:
      VAR_6 = 9;
      FUNC_1(FUNC_4(VAR_5, "COPIED...", &VAR_6));
      return;

    case 130:
      FUNC_1(FUNC_2(VAR_5, VAR_4,
                                FUNC_0("<<< Started new transaction, based on "
                                  "original revision %ld\n"),
                                VAR_3->old_revision));
      return;

    case 132:
      FUNC_1(FUNC_2(VAR_5, VAR_4,
                                FUNC_0(" removing '\\r' from %s ..."),
                                VAR_1));
      return;

    default:
      return;
  }
}
