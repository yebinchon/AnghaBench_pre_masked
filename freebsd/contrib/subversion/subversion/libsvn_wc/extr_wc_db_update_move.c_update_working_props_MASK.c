
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* wcroot; int db; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
struct working_node_version_t {int * props; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_11__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;
struct TYPE_12__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (TYPE_2__**,int *,int *,int *) ;
 int FUNC_3 (TYPE_7__*,char const*,int *,int ,int *) ;
 int FUNC_4 (int **,TYPE_7__*,char const*,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int **,int *,int **,int ,int ,int *,int *,int *,TYPE_2__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc_notify_state_t *VAR_1,
                     svn_skel_t **VAR_2,
                     apr_array_header_t **VAR_3,
                     apr_hash_t **VAR_4,
                     update_move_baton_t *VAR_5,
                     const char *VAR_6,
                     const struct working_node_version_t *VAR_7,
                     const struct working_node_version_t *VAR_8,
                     apr_pool_t *VAR_9,
                     apr_pool_t *VAR_10)
{
  apr_hash_t *VAR_11;
  apr_array_header_t *VAR_12;







  FUNC_0(FUNC_4(VAR_4,
                                         VAR_5->wcroot, VAR_6,
                                         VAR_9, VAR_10));
  FUNC_0(FUNC_2(VAR_3, VAR_8->props, VAR_7->props,
                         VAR_9));
  FUNC_0(FUNC_6(VAR_2, VAR_1,
                              &VAR_11,
                              VAR_5->db, FUNC_1(VAR_5->wcroot->abspath,
                                                     VAR_6,
                                                     VAR_10),
                              VAR_7->props, VAR_7->props,
                              *VAR_4, *VAR_3,
                              VAR_9, VAR_10));






  FUNC_0(FUNC_2(&VAR_12, VAR_11, VAR_8->props,
                         VAR_10));
  if (!VAR_12->nelts)
    VAR_11 = ((void*)0);


  FUNC_0(FUNC_3(VAR_5->wcroot, VAR_6,
                                           VAR_11,
                                           FUNC_5(
                                                    *VAR_3),
                                           VAR_10));

  return VAR_0;
}
