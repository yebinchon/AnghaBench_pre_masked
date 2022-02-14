
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct TYPE_4__ {int normalized_rev_props_count; scalar_t__ current_revision; int normalized_node_props_count; TYPE_2__* sb; int to_session; scalar_t__ has_commit_revprops_capability; } ;
typedef TYPE_1__ replay_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int quiet; int source_prop_encoding; int to_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int*,int *,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,int const*,void*,int const**,void**,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int *,int ,int *) ;
 int FUNC_8 (int ,int const**,void**,int *,int ,TYPE_2__*,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,scalar_t__) ;
 int FUNC_11 (int const*,void*,scalar_t__,int ,int ,int ,int const**,void**,int *,int *) ;
 int FUNC_12 (int *,int*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_revnum_t VAR_8,
                   void *VAR_9,
                   const svn_delta_editor_t **VAR_10,
                   void **VAR_11,
                   apr_hash_t *VAR_12,
                   apr_pool_t *VAR_13)
{
  const svn_delta_editor_t *VAR_14;
  const svn_delta_editor_t *VAR_15;
  const svn_delta_editor_t *VAR_16;
  void *VAR_17;
  void *VAR_18;
  void *VAR_19;
  replay_baton_t *VAR_20 = VAR_9;
  apr_hash_t *VAR_21;
  int VAR_22;
  int VAR_23;
  FUNC_0(FUNC_7(VAR_20->to_session, 0,
                                  VAR_1,
                                  ((void*)0),
                                  FUNC_10(VAR_13, "%ld", VAR_8),
                                  VAR_13));
  VAR_21 = FUNC_1(&VAR_22, VAR_12,
                          (VAR_20->has_commit_revprops_capability
                            ? VAR_6
                            : VAR_7),
                          VAR_13);






  if (! FUNC_4(VAR_21, VAR_3))
    FUNC_5(VAR_21, VAR_3,
                  FUNC_9(VAR_13));




  FUNC_0(FUNC_12(VAR_21, &VAR_23,
                                     VAR_20->sb->source_prop_encoding, VAR_13));
  VAR_20->normalized_rev_props_count += VAR_23;





  FUNC_0(FUNC_8(VAR_20->to_session, &VAR_14,
                                    &VAR_17,
                                    VAR_21,
                                    VAR_5, VAR_20->sb,
                                    ((void*)0), VAR_0, VAR_13));




  FUNC_0(FUNC_11(VAR_14, VAR_17, VAR_8 - 1,
                                  VAR_20->sb->to_url, VAR_20->sb->source_prop_encoding,
                                  VAR_20->sb->quiet, &VAR_16, &VAR_19,
                                  &(VAR_20->normalized_node_props_count), VAR_13));

  FUNC_0(FUNC_3(VAR_4, ((void*)0),
                                            VAR_16, VAR_19,
                                            &VAR_15,
                                            &VAR_18,
                                            VAR_13));
  *VAR_10 = VAR_15;
  *VAR_11 = VAR_18;

  VAR_20->current_revision = VAR_8;
  return VAR_2;
}
