
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int (* file_deleted ) (char const*,int *,char const*,int *,void*,TYPE_1__ const*,int *) ;int (* file_opened ) (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_1 ;
 int FUNC_3 (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_1__ const*,int *,int *) ;
 int FUNC_4 (char const*,int *,char const*,int *,void*,TYPE_1__ const*,int *) ;
 int * FUNC_5 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int **,int *,int *,char const*,int *,int *) ;
 int FUNC_7 (char const**,int *,char const*,int const*,int *,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_4,
                            const char *VAR_5,
                            const char *VAR_6,
                            svn_revnum_t VAR_7,
                            const svn_diff_tree_processor_t *VAR_8,
                            void *VAR_9,
                            apr_pool_t *VAR_10)
{
  svn_wc__db_status_t VAR_11;
  svn_node_kind_t VAR_12;
  const svn_checksum_t *VAR_13;
  apr_hash_t *VAR_14;
  void *VAR_15 = ((void*)0);
  svn_boolean_t VAR_16 = VAR_0;
  svn_diff_source_t *VAR_17;
  const char *VAR_18;

  FUNC_0(FUNC_6(&VAR_11, &VAR_12,
                                   FUNC_2(VAR_7)
                                        ? ((void*)0) : &VAR_7,
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   &VAR_13, ((void*)0), ((void*)0), ((void*)0), &VAR_14, ((void*)0),
                                   VAR_4, VAR_5,
                                   VAR_10, VAR_10));

  FUNC_1(VAR_11 == VAR_3
                 && VAR_12 == VAR_2
                 && VAR_13);

  VAR_17 = FUNC_5(VAR_7, VAR_10);

  FUNC_0(VAR_8->file_opened(&VAR_15, &VAR_16,
                                 VAR_6,
                                 VAR_17,
                                 ((void*)0) ,
                                 ((void*)0) ,
                                 VAR_9,
                                 VAR_8,
                                 VAR_10, VAR_10));

  if (VAR_16)
    return VAR_1;

  FUNC_0(FUNC_7(&VAR_18,
                                       VAR_4, VAR_5, VAR_13,
                                       VAR_10, VAR_10));

  FUNC_0(VAR_8->file_deleted(VAR_6,
                                  VAR_17,
                                  VAR_18,
                                  VAR_14,
                                  VAR_15,
                                  VAR_8,
                                  VAR_10));

  return VAR_1;
}
