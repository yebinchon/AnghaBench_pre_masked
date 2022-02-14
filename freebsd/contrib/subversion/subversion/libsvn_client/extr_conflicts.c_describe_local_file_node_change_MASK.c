
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_reason_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_15__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_16__ {int local_abspath; } ;
typedef TYPE_3__ svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const**,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_10 (char const**,int *,int ,int ,int *,int *) ;
 int FUNC_11 (char const**,int *,int ,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char **VAR_5,
                                svn_client_conflict_t *VAR_6,
                                svn_client_ctx_t *VAR_7,
                                apr_pool_t *VAR_8,
                                apr_pool_t *VAR_9)
{
  svn_wc_conflict_reason_t VAR_10;
  svn_wc_operation_t VAR_11;

  VAR_10 = FUNC_3(VAR_6);
  VAR_11 = FUNC_4(VAR_6);

  switch (VAR_10)
    {
      case 134:
        if (VAR_11 == VAR_4 ||
            VAR_11 == VAR_3)
          *VAR_5 = FUNC_1("A file containing uncommitted changes was "
                           "found in the working copy.");
        else if (VAR_11 == VAR_2)
          *VAR_5 = FUNC_1("A file which differs from the corresponding "
                           "file on the merge source branch was found "
                           "in the working copy.");
        break;
      case 130:
        *VAR_5 = FUNC_1("A file which already occupies this path was found "
                         "in the working copy.");
        break;
      case 128:
        *VAR_5 = FUNC_1("An unversioned file was found in the working "
                         "copy.");
        break;
      case 135:
        *VAR_5 = FUNC_1("A deleted file was found in the working copy.");
        break;
      case 133:
        if (VAR_11 == VAR_4 ||
            VAR_11 == VAR_3)
          *VAR_5 = FUNC_1("No such file was found in the working copy.");
        else if (VAR_11 == VAR_2)
          {

            *VAR_5 = FUNC_1("No such file was found in the merge target "
                             "working copy.\nPerhaps the file has been "
                             "deleted or moved away in the repository's "
                             "history?");
          }
        break;
      case 136:
      case 129:
        {

          *VAR_5 = FUNC_1("A file scheduled to be added to the "
                           "repository in the next commit was found in "
                           "the working copy.");
        }
        break;
      case 132:
        {
          const char *VAR_12;
          svn_error_t *VAR_13;

          VAR_13 = FUNC_10(&VAR_12, ((void*)0),
                                            VAR_7->wc_ctx,
                                            VAR_6->local_abspath,
                                            VAR_9,
                                            VAR_9);
          if (VAR_13)
            {
              if (VAR_13->apr_err == VAR_0)
                {
                  VAR_12 = ((void*)0);
                  FUNC_7(VAR_13);
                }
              else
                return FUNC_8(VAR_13);
            }
          if (VAR_11 == VAR_4 ||
              VAR_11 == VAR_3)
            {
              if (VAR_12 == ((void*)0))
                {

                  *VAR_5 = FUNC_1("The file in the working copy had "
                                   "been moved away at the time this "
                                   "conflict was recorded.");
                }
              else
                {
                  const char *VAR_14;

                  FUNC_0(FUNC_9(&VAR_14,
                                             VAR_7->wc_ctx,
                                             VAR_6->local_abspath,
                                             VAR_9,
                                             VAR_9));
                  *VAR_5 = FUNC_2(
                                   VAR_8,
                                   FUNC_1("The file in the working copy was "
                                     "moved away to\n'%s'."),
                                   FUNC_5(
                                     FUNC_6(
                                       VAR_14,
                                       VAR_12),
                                     VAR_9));
                }
            }
          else if (VAR_11 == VAR_2)
            {
              if (VAR_12 == ((void*)0))
                {




                  *VAR_5 = FUNC_1("The file in the working copy had "
                                   "been moved away at the time this "
                                   "conflict was recorded.");
                }
              else
                {

                  const char *VAR_15;

                  FUNC_0(FUNC_9(&VAR_15,
                                             VAR_7->wc_ctx,
                                             VAR_6->local_abspath,
                                             VAR_9,
                                             VAR_9));
                  *VAR_5 = FUNC_2(
                                   VAR_8,
                                   FUNC_1("The file in the working copy was "
                                     "moved away to\n'%s'."),
                                   FUNC_5(
                                     FUNC_6(
                                       VAR_15,
                                       VAR_12),
                                     VAR_9));
                }
            }
          break;
        }
      case 131:
        {
          const char *VAR_16;

          FUNC_0(FUNC_11(&VAR_16, ((void*)0),
                                              VAR_7->wc_ctx,
                                              VAR_6->local_abspath,
                                              VAR_9,
                                              VAR_9));
          if (VAR_11 == VAR_4 ||
              VAR_11 == VAR_3)
            {
              if (VAR_16 == ((void*)0))
                {

                  *VAR_5 = FUNC_1("A file had been moved here in the "
                                   "working copy at the time this "
                                   "conflict was recorded.");
                }
              else
                {
                  const char *VAR_17;

                  FUNC_0(FUNC_9(&VAR_17,
                                             VAR_7->wc_ctx,
                                             VAR_6->local_abspath,
                                             VAR_9,
                                             VAR_9));
                  *VAR_5 = FUNC_2(
                                   VAR_8,
                                   FUNC_1("A file was moved here in the "
                                     "working copy from\n'%s'."),
                                   FUNC_5(
                                     FUNC_6(
                                       VAR_17,
                                       VAR_16),
                                     VAR_9));
                }
            }
          else if (VAR_11 == VAR_2)
            {
              if (VAR_16 == ((void*)0))
                {




                  *VAR_5 = FUNC_1("A file had been moved here in the "
                                   "working copy at the time this "
                                   "conflict was recorded.");
                }
              else
                {
                  const char *VAR_18;

                  FUNC_0(FUNC_9(&VAR_18,
                                             VAR_7->wc_ctx,
                                             VAR_6->local_abspath,
                                             VAR_9,
                                             VAR_9));

                  *VAR_5 = FUNC_2(
                                   VAR_8,
                                   FUNC_1("A file was moved here in the "
                                     "working copy from\n'%s'."),
                                   FUNC_5(
                                     FUNC_6(
                                       VAR_18,
                                       VAR_16),
                                     VAR_9));
                }
            }
          break;
        }
    }

  return VAR_1;
}
