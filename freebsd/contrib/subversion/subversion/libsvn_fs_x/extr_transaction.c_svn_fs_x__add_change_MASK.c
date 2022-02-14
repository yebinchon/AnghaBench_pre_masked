
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_4__ {char const* data; int len; } ;
struct TYPE_5__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int node_kind; int mergeinfo_mod; void* prop_mod; void* text_mod; int change_kind; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_x__change_t ;
typedef int svn_fs_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int *,int *,int ,int *) ;
 int FUNC_6 (int *,char const*,TYPE_2__*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_8,
                     svn_fs_x__txn_id_t VAR_9,
                     const char *VAR_10,
                     svn_fs_path_change_kind_t VAR_11,
                     svn_boolean_t VAR_12,
                     svn_boolean_t VAR_13,
                     svn_boolean_t VAR_14,
                     svn_node_kind_t VAR_15,
                     svn_revnum_t VAR_16,
                     const char *VAR_17,
                     apr_pool_t *VAR_18)
{
  apr_file_t *VAR_19;
  svn_fs_x__change_t VAR_20;
  apr_hash_t *VAR_21 = FUNC_1(VAR_18);


  FUNC_0(FUNC_8(&VAR_19,
                           FUNC_4(VAR_8, VAR_9,
                                                      VAR_18),
                           VAR_0 | VAR_3 | VAR_1,
                           VAR_2, VAR_18));

  VAR_20.path.data = VAR_10;
  VAR_20.path.len = FUNC_3(VAR_10);
  VAR_20.change_kind = VAR_11;
  VAR_20.text_mod = VAR_12;
  VAR_20.prop_mod = VAR_13;
  VAR_20.mergeinfo_mod = VAR_14 ? VAR_7
                                       : VAR_6;
  VAR_20.node_kind = VAR_15;
  VAR_20.copyfrom_known = VAR_5;
  VAR_20.copyfrom_rev = VAR_16;
  if (VAR_17)
    VAR_20.copyfrom_path = FUNC_2(VAR_18, VAR_17);

  FUNC_6(VAR_21, VAR_10, &VAR_20);
  FUNC_0(FUNC_5(FUNC_9(VAR_19, VAR_5,
                                                           VAR_18),
                                  VAR_8, VAR_21, VAR_4, VAR_18));

  return FUNC_7(VAR_19, VAR_18);
}
