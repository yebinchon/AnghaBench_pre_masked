
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int location_and_kind; } ;
typedef TYPE_1__ working_node_version_t ;
typedef scalar_t__ svn_wc_operation_t ;
struct TYPE_13__ {char const* path_in_repos; void* node_kind; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef void* svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 char const* FUNC_2 (char const*,char const*,int *) ;
 char* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int **,int *,char const*,int *,int *,int *) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_2__*,int *,int *) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_2__*,int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_2__*,int *,int *) ;
 TYPE_2__* FUNC_8 (int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_skel_t **VAR_3,
                        const char *VAR_4,
                        svn_wc__db_t *VAR_5,
                        const char *VAR_6,
                        svn_skel_t *VAR_7,
                        svn_wc_operation_t VAR_8,
                        const working_node_version_t *VAR_9,
                        const working_node_version_t *VAR_10,
                        svn_node_kind_t VAR_11,
                        svn_boolean_t VAR_12,
                        apr_pool_t *VAR_13,
                        apr_pool_t *VAR_14)
{
  svn_wc_conflict_version_t *VAR_15;
  svn_wc_conflict_version_t *VAR_16;
  const char *VAR_17;

  VAR_15 = FUNC_8(
                       VAR_9->location_and_kind, VAR_14);
  VAR_15->node_kind = VAR_11;
  VAR_16 = FUNC_8(
                         VAR_10->location_and_kind, VAR_14);
  VAR_16->node_kind = VAR_11;

  VAR_17 = FUNC_3(VAR_15->path_in_repos,
                                   VAR_6);
  if (VAR_17 == ((void*)0))
    VAR_17 = FUNC_3(VAR_16->path_in_repos,
                                     VAR_6);
  FUNC_1(VAR_17 != ((void*)0));

  VAR_16->path_in_repos
    = FUNC_2(VAR_16->path_in_repos, VAR_17, VAR_14);
  VAR_15->path_in_repos = VAR_6;

  if (VAR_12)
    {
      if (VAR_8 == VAR_2)
        {
          FUNC_0(FUNC_7(
                    VAR_7, VAR_15,
                    VAR_16,
                    VAR_14, VAR_14));
        }
      else if (VAR_8 == VAR_1)
        {
          FUNC_0(FUNC_5(
                    VAR_7, VAR_15,
                    VAR_16,
                    VAR_14, VAR_14));
        }
      else
        {
          FUNC_0(FUNC_6(
                    VAR_7, VAR_15,
                    VAR_16,
                    VAR_14, VAR_14));
        }
    }



  FUNC_0(FUNC_4(VAR_3, VAR_5,
                                          VAR_4,
                                          VAR_7,
                                          VAR_13,
                                          VAR_14));

  return VAR_0;
}
