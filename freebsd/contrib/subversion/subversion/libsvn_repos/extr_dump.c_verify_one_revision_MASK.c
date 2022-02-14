
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int (* close_edit ) (void*,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__ const**,void**,int *,int ,char*,int ,int *,int *,int ,int ,void*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (int ,void*,TYPE_1__ const*,void*,TYPE_1__ const**,void**,int *) ;
 int FUNC_4 (int **,int *,int ,int ,int *,int *) ;
 int FUNC_5 (int **,int *,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*,int ,int ,TYPE_1__ const*,void*,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_t *VAR_5,
                    svn_revnum_t VAR_6,
                    svn_repos_notify_func_t VAR_7,
                    void *VAR_8,
                    svn_revnum_t VAR_9,
                    svn_boolean_t VAR_10,
                    svn_cancel_func_t VAR_11,
                    void *VAR_12,
                    apr_pool_t *VAR_13)
{
  const svn_delta_editor_t *VAR_14;
  void *VAR_15;
  svn_fs_root_t *VAR_16;
  apr_hash_t *VAR_17;
  const svn_delta_editor_t *VAR_18;
  void *VAR_19;


  FUNC_0(FUNC_1(&VAR_14, &VAR_15,
                          VAR_5, VAR_6, "",
                          FUNC_8(VAR_13),
                          ((void*)0), ((void*)0),
                          VAR_4,
                          VAR_7, VAR_8,
                          VAR_9,
                          VAR_0, VAR_3,
                          VAR_10,
                          VAR_13));
  FUNC_0(FUNC_3(VAR_11, VAR_12,
                                            VAR_14, VAR_15,
                                            &VAR_18,
                                            &VAR_19,
                                            VAR_13));
  FUNC_0(FUNC_5(&VAR_16, VAR_5, VAR_6, VAR_13));
  FUNC_0(FUNC_6(VAR_16, VAR_13));
  FUNC_0(FUNC_7(VAR_16, "", VAR_1, VAR_0,
                            VAR_18, VAR_19,
                            ((void*)0), ((void*)0), VAR_13));



  FUNC_0(VAR_18->close_edit(VAR_19, VAR_13));

  FUNC_0(FUNC_4(&VAR_17, VAR_5, VAR_6, VAR_0, VAR_13,
                                    VAR_13));

  return VAR_2;
}
