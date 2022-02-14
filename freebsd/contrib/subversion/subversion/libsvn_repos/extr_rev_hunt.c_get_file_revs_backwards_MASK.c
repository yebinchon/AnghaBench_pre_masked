
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int (* svn_repos_authz_func_t ) (int *,int *,char const*,void*,int *) ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_history_t ;
typedef int svn_file_rev_handler_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct send_baton {int * iterpool; int * last_pool; int last_props; int * last_path; int * last_root; void* include_merged_revisions; } ;
struct path_revision {char const* path; scalar_t__ revnum; void* merged; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 struct path_revision* FUNC_3 (int *,int) ;
 int FUNC_4 (struct path_revision*,TYPE_1__*,struct send_baton*,int ,void*) ;
 int * FUNC_5 (int ,int *,int ,char const*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_7 (char const**,scalar_t__*,int *,int *) ;
 int FUNC_8 (int **,int *,int ,int *,int *) ;
 int FUNC_9 (int **,int *,char const*,int *,int *) ;
 int FUNC_10 (int **,int ,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_repos_t *VAR_5,
                        const char *VAR_6,
                        svn_revnum_t VAR_7,
                        svn_revnum_t VAR_8,
                        svn_repos_authz_func_t VAR_9,
                        void *VAR_10,
                        svn_file_rev_handler_t VAR_11,
                        void *VAR_12,
                        apr_pool_t *VAR_13)
{
  apr_pool_t *VAR_14, *VAR_15;
  svn_fs_history_t *VAR_16;
  svn_fs_root_t *VAR_17;
  svn_node_kind_t VAR_18;
  struct send_baton VAR_19;





  VAR_14 = FUNC_12(VAR_13);
  VAR_15 = FUNC_12(VAR_13);
  VAR_19.iterpool = FUNC_12(VAR_13);
  VAR_19.last_pool = FUNC_12(VAR_13);
  VAR_19.include_merged_revisions = VAR_0;


  VAR_19.last_root = ((void*)0);
  VAR_19.last_path = ((void*)0);


  VAR_19.last_props = FUNC_2(VAR_19.last_pool);


  FUNC_0(FUNC_10(&VAR_17, VAR_5->fs, VAR_8, VAR_13));
  FUNC_0(FUNC_6(&VAR_18, VAR_17, VAR_6, VAR_13));
  if (VAR_18 != VAR_4)
    return FUNC_5(VAR_1,
                             ((void*)0), FUNC_1("'%s' is not a file in revision %ld"),
                             VAR_6, VAR_8);


  FUNC_0(FUNC_9(&VAR_16, VAR_17, VAR_6, VAR_13, VAR_14));
  while (1)
    {
      struct path_revision *VAR_20;
      svn_revnum_t VAR_21;
      const char *VAR_22;

      FUNC_11(VAR_14);


      FUNC_0(FUNC_8(&VAR_16, VAR_16, VAR_3, VAR_14,
                                   VAR_14));
      if (!VAR_16)
        break;
      FUNC_0(FUNC_7(&VAR_22, &VAR_21,
                                      VAR_16, VAR_14));


      if (VAR_9)
        {
          svn_boolean_t VAR_23;
          svn_fs_root_t *VAR_24;

          FUNC_0(FUNC_10(&VAR_24, VAR_5->fs, VAR_21,
                                       VAR_14));
          FUNC_0(VAR_9(&VAR_23, VAR_24, VAR_22,
                                  VAR_10, VAR_14));
          if (! VAR_23)
            break;
        }


      VAR_20 = FUNC_3(VAR_14, sizeof(*VAR_20));
      VAR_20->path = VAR_22;
      VAR_20->revnum = VAR_21;
      VAR_20->merged = VAR_0;

      FUNC_0(FUNC_4(VAR_20, VAR_5, &VAR_19,
                                 VAR_11, VAR_12));

      if (VAR_20->revnum <= VAR_7)
        break;


      {
        apr_pool_t *VAR_25 = VAR_14;
        VAR_14 = VAR_15;
        VAR_15 = VAR_25;
      }
    }

  FUNC_13(VAR_14);
  FUNC_13(VAR_15);
  FUNC_13(VAR_19.last_pool);
  FUNC_13(VAR_19.iterpool);

  return VAR_2;

}
