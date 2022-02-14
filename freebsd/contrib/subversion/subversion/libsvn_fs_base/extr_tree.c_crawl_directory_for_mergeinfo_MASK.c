
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_mergeinfo_receiver_t ;
typedef int svn_error_t ;
struct get_mergeinfo_data_and_entries_baton {char const* node_path; void* receiver_baton; int receiver; int * node; int * children_atop_mergeinfo_trees; } ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 int * FUNC_6 (int *,int ,struct get_mergeinfo_data_and_entries_baton*,int ,int *) ;
 char* FUNC_7 (char const*,void const*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_fs_t *VAR_3,
                              dag_node_t *VAR_4,
                              const char *VAR_5,
                              svn_fs_mergeinfo_receiver_t VAR_6,
                              void *VAR_7,
                              apr_pool_t *VAR_8)
{
  struct get_mergeinfo_data_and_entries_baton VAR_9;
  apr_hash_t *VAR_10 = FUNC_3(VAR_8);
  apr_hash_index_t *VAR_11;
  apr_pool_t *VAR_12;



  VAR_9.children_atop_mergeinfo_trees = VAR_10;
  VAR_9.node = VAR_4;
  VAR_9.node_path = VAR_5;
  VAR_9.receiver = VAR_6;
  VAR_9.receiver_baton = VAR_7;
  FUNC_0(FUNC_6(VAR_3, VAR_2,
                                 &VAR_9, VAR_0, VAR_8));




  if (FUNC_1(VAR_10) == 0)
    return VAR_1;

  VAR_12 = FUNC_9(VAR_8);
  for (VAR_11 = FUNC_2(VAR_8, VAR_10);
       VAR_11;
       VAR_11 = FUNC_4(VAR_11))
    {
      const void *VAR_13;
      void *VAR_14;
      FUNC_8(VAR_12);
      FUNC_5(VAR_11, &VAR_13, ((void*)0), &VAR_14);
      FUNC_0(FUNC_11(VAR_3, VAR_14,
                                            FUNC_7(VAR_5, VAR_13,
                                                             VAR_12),
                                            VAR_6, VAR_7, VAR_12));
    }
  FUNC_10(VAR_12);
  return VAR_1;
}
