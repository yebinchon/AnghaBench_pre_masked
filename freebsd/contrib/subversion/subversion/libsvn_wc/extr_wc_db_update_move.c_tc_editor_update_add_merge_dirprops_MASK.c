
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int db; TYPE_4__* wcroot; int new_version; } ;
typedef TYPE_1__ update_local_add_baton_t ;
typedef scalar_t__ svn_wc_notify_state_t ;
struct TYPE_13__ {char const* path_in_repos; int peg_rev; scalar_t__ node_kind; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_14__ {int local_relpath; TYPE_1__* b; scalar_t__ skip; } ;
typedef TYPE_3__ added_node_baton_t ;
struct TYPE_15__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int **,int ,char const*,int *,int *,int *) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int *,int *) ;
 int FUNC_5 (int *,scalar_t__*,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_4__*,int ,int *,int *) ;
 TYPE_2__* FUNC_6 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__*,int **,int ,int *,int *,int ,TYPE_4__*,int *,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ,scalar_t__,int ,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(added_node_baton_t *VAR_6,
                                    apr_hash_t *VAR_7,
                                    apr_hash_t *VAR_8,
                                    apr_pool_t *VAR_9)
{
  update_local_add_baton_t *VAR_10 = VAR_6->b;
  svn_skel_t *VAR_11 = ((void*)0);
  svn_wc_notify_state_t VAR_12;
  svn_skel_t *VAR_13 = ((void*)0);
  svn_node_kind_t VAR_14;
  const char *VAR_15 = FUNC_1(VAR_10->wcroot->abspath,
                                              VAR_6->local_relpath,
                                              VAR_9);

  FUNC_0(FUNC_8(VAR_6, VAR_9));
  if (VAR_6->skip)
    return VAR_0;


  FUNC_0(FUNC_2(VAR_15, &VAR_14, VAR_9));
  if (VAR_14 != VAR_2)
    {
      FUNC_0(FUNC_9(VAR_6, VAR_2,
                                                            VAR_14,
                                                            VAR_9));
      VAR_6->skip = VAR_1;
      return VAR_0;
    }

  FUNC_0(FUNC_7(&VAR_12, &VAR_11,
                                          VAR_6->local_relpath,
                                          VAR_8, VAR_7,
                                          VAR_10->db, VAR_10->wcroot,
                                          VAR_9, VAR_9));


  if (VAR_11 && VAR_12 == VAR_3)
    {
      svn_wc_conflict_version_t *VAR_16;
      svn_node_kind_t VAR_17;
      svn_revnum_t VAR_18;
      const char *VAR_19;

      VAR_16 = FUNC_6(VAR_6->b->new_version,
                                                VAR_9);
      FUNC_0(FUNC_5(((void*)0), &VAR_17, &VAR_18,
                                                &VAR_19, ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                VAR_10->wcroot, VAR_6->local_relpath,
                                                VAR_9, VAR_9));

      VAR_16->path_in_repos = VAR_19;
      VAR_16->node_kind = VAR_17;
      VAR_16->peg_rev = VAR_18;


      FUNC_0(FUNC_4(VAR_11, ((void*)0),
                                                  VAR_16, VAR_9,
                                                  VAR_9));
      FUNC_0(FUNC_3(&VAR_13, VAR_10->db,
                                              VAR_15,
                                              VAR_11,
                                              VAR_9,
                                              VAR_9));
    }

  FUNC_0(FUNC_10(VAR_10->wcroot, VAR_6->local_relpath, VAR_10->db,
                               VAR_5, VAR_2,
                               VAR_4, VAR_12,
                               VAR_11, VAR_13, VAR_9));

  return VAR_0;
}
