
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char **VAR_4,
                                svn_client_conflict_t *VAR_5,
                                apr_pool_t *VAR_6,
                                apr_pool_t *VAR_7)
{
  svn_wc_conflict_reason_t VAR_8;
  svn_wc_operation_t VAR_9;

  VAR_8 = FUNC_1(VAR_5);
  VAR_9 = FUNC_2(VAR_5);

  switch (VAR_8)
    {
    case 134:
      *VAR_4 = FUNC_0("An item containing uncommitted changes was "
                       "found in the working copy.");
      break;
    case 130:
      *VAR_4 = FUNC_0("An item which already occupies this path was found in "
                       "the working copy.");
      break;
    case 135:
      *VAR_4 = FUNC_0("A deleted item was found in the working copy.");
      break;
    case 133:
      if (VAR_9 == VAR_3 ||
          VAR_9 == VAR_2)
        *VAR_4 = FUNC_0("No such file or directory was found in the "
                         "working copy.");
      else if (VAR_9 == VAR_1)
        {

          *VAR_4 = FUNC_0("No such file or directory was found in the "
                           "merge target working copy.\nThe item may "
                           "have been deleted or moved away in the "
                           "repository's history.");
        }
      break;
    case 128:
      *VAR_4 = FUNC_0("An unversioned item was found in the working "
                       "copy.");
      break;
    case 136:
    case 129:
      *VAR_4 = FUNC_0("An item scheduled to be added to the repository "
                       "in the next commit was found in the working "
                       "copy.");
      break;
    case 132:
      *VAR_4 = FUNC_0("The item in the working copy had been moved "
                       "away at the time this conflict was recorded.");
      break;
    case 131:
      *VAR_4 = FUNC_0("An item had been moved here in the working copy "
                       "at the time this conflict was recorded.");
      break;
    }

  return VAR_0;
}
