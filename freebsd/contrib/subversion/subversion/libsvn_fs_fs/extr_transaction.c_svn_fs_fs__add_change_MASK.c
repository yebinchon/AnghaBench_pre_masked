
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_path_change_kind_t ;
struct TYPE_4__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int node_kind; int mergeinfo_mod; void* prop_mod; void* text_mod; } ;
typedef TYPE_1__ svn_fs_path_change2_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
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
 int FUNC_3 (int *,int const*,int *) ;
 TYPE_1__* FUNC_4 (int const*,int ,int *) ;
 int FUNC_5 (int ,int *,int *,int ,int *) ;
 int FUNC_6 (int *,char const*,TYPE_1__*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

svn_error_t *
FUNC_10(svn_fs_t *VAR_8,
                      const svn_fs_fs__id_part_t *VAR_9,
                      const char *VAR_10,
                      const svn_fs_id_t *VAR_11,
                      svn_fs_path_change_kind_t VAR_12,
                      svn_boolean_t VAR_13,
                      svn_boolean_t VAR_14,
                      svn_boolean_t VAR_15,
                      svn_node_kind_t VAR_16,
                      svn_revnum_t VAR_17,
                      const char *VAR_18,
                      apr_pool_t *VAR_19)
{
  apr_file_t *VAR_20;
  svn_fs_path_change2_t *VAR_21;
  apr_hash_t *VAR_22 = FUNC_1(VAR_19);


  FUNC_0(FUNC_8(&VAR_20, FUNC_3(VAR_8, VAR_9, VAR_19),
                           VAR_0 | VAR_3 | VAR_1,
                           VAR_2, VAR_19));

  VAR_21 = FUNC_4(VAR_11, VAR_12, VAR_19);
  VAR_21->text_mod = VAR_13;
  VAR_21->prop_mod = VAR_14;
  VAR_21->mergeinfo_mod = VAR_15
                        ? VAR_7
                        : VAR_6;
  VAR_21->node_kind = VAR_16;
  VAR_21->copyfrom_known = VAR_5;
  VAR_21->copyfrom_rev = VAR_17;
  if (VAR_18)
    VAR_21->copyfrom_path = FUNC_2(VAR_19, VAR_18);

  FUNC_6(VAR_22, VAR_10, VAR_21);
  FUNC_0(FUNC_5(FUNC_9(VAR_20, VAR_5, VAR_19),
                                   VAR_8, VAR_22, VAR_4, VAR_19));

  return FUNC_7(VAR_20, VAR_19);
}
