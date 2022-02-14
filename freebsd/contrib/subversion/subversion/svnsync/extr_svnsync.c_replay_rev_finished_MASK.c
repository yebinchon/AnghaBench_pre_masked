
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int (* close_edit ) (void*,int *) ;} ;
typedef TYPE_2__ svn_delta_editor_t ;
struct TYPE_7__ {int normalized_rev_props_count; TYPE_1__* sb; scalar_t__ has_atomic_revprops_capability; int to_session; scalar_t__ has_commit_revprops_capability; } ;
typedef TYPE_3__ replay_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int quiet; int source_prop_encoding; int committed_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int*,int *,int ,int *) ;
 int FUNC_3 (int,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int *,int *) ;
 int FUNC_5 (void*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int const**,int const*,int *) ;
 int FUNC_11 (int ,int ,int **,int *) ;
 int * FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *,int*,int ,int *) ;
 int FUNC_14 (int*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_revnum_t VAR_6,
                    void *VAR_7,
                    const svn_delta_editor_t *VAR_8,
                    void *VAR_9,
                    apr_hash_t *VAR_10,
                    apr_pool_t *VAR_11)
{
  apr_pool_t *VAR_12 = FUNC_8(VAR_11);
  replay_baton_t *VAR_13 = VAR_7;
  apr_hash_t *VAR_14, *VAR_15;
  int VAR_16;
  int VAR_17;
  const svn_string_t *VAR_18;

  FUNC_0(VAR_8->close_edit(VAR_9, VAR_11));


  if (VAR_13->sb->committed_rev != VAR_6)
    return FUNC_6
             (VAR_0, ((void*)0),
              FUNC_1("Commit created r%ld but should have created r%ld"),
              VAR_13->sb->committed_rev, VAR_6);

  FUNC_0(FUNC_11(VAR_13->to_session, VAR_6, &VAR_15,
                              VAR_12));






  VAR_14 = FUNC_2(&VAR_16, VAR_10,
                          (VAR_13->has_commit_revprops_capability
                            ? VAR_5
                            : VAR_4),
                          VAR_12);



  FUNC_0(FUNC_13(VAR_14, &VAR_17,
                                     VAR_13->sb->source_prop_encoding, VAR_11));
  VAR_13->normalized_rev_props_count += VAR_17;

  FUNC_0(FUNC_14(&VAR_16, VAR_13->to_session, VAR_6, VAR_14,
                         ((void*)0), VAR_12));


  FUNC_0(FUNC_4(VAR_13->to_session, VAR_6,
                                     VAR_10, VAR_15, VAR_12));

  FUNC_7(VAR_12);

  VAR_18 = FUNC_12(VAR_12, "%ld", VAR_6);


  FUNC_0(FUNC_10(
           VAR_13->to_session,
           0,
           VAR_2,
           ((void*)0),
           VAR_18,
           VAR_12));



  FUNC_0(FUNC_10(VAR_13->to_session, 0,
                                  VAR_1,
                                  VAR_13->has_atomic_revprops_capability
                                    ? &VAR_18 : ((void*)0),
                                  ((void*)0), VAR_12));


  if (! VAR_13->sb->quiet)
    FUNC_0(FUNC_3(VAR_16 > 0, VAR_6, VAR_12));

  FUNC_9(VAR_12);

  return VAR_3;
}
