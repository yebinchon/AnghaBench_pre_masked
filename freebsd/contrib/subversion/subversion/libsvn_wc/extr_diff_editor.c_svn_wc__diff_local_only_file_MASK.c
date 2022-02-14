
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int (* file_added ) (char const*,TYPE_2__*,TYPE_2__*,char const*,char const*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* file_opened ) (void**,int*,char const*,int *,TYPE_2__*,TYPE_2__*,void*,TYPE_1__ const*,int *,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
struct TYPE_12__ {char const* repos_relpath; char const* moved_from_relpath; } ;
typedef TYPE_2__ svn_diff_source_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void**,int*,char const*,int *,TYPE_2__*,TYPE_2__*,void*,TYPE_1__ const*,int *,int *) ;
 int FUNC_5 (char const*,TYPE_2__*,TYPE_2__*,char const*,char const*,int *,int *,void*,TYPE_1__ const*,int *) ;
 TYPE_2__* FUNC_6 (int ,int *) ;
 scalar_t__ VAR_6 ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int*,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_10 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int const**,int *,int*,int **,int *,char const*,int *,int *) ;
 int FUNC_11 (int **,int *,char const*,int *,int *) ;
 int FUNC_12 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int*,int *,char const*,int,int *) ;
 int FUNC_14 (char const**,char const*,int *,char const*,int,int ,void*,int *,int *) ;

svn_error_t *
FUNC_15(svn_wc__db_t *VAR_10,
                             const char *VAR_11,
                             const char *VAR_12,
                             const char *VAR_13,
                             const svn_diff_tree_processor_t *VAR_14,
                             void *VAR_15,
                             svn_boolean_t VAR_16,
                             svn_cancel_func_t VAR_17,
                             void *VAR_18,
                             apr_pool_t *VAR_19)
{
  svn_diff_source_t *VAR_20;
  svn_diff_source_t *VAR_21 = ((void*)0);
  svn_wc__db_status_t VAR_22;
  svn_node_kind_t VAR_23;
  const svn_checksum_t *VAR_24;
  const char *VAR_25;
  svn_revnum_t VAR_26;
  svn_boolean_t VAR_27;
  svn_boolean_t VAR_28;
  apr_hash_t *VAR_29;
  apr_hash_t *VAR_30 = ((void*)0);
  const char *VAR_31;
  const char *VAR_32;
  svn_revnum_t VAR_33;
  void *VAR_34 = ((void*)0);
  svn_boolean_t VAR_35 = VAR_0;
  svn_boolean_t VAR_36 = VAR_5;

  FUNC_0(FUNC_9(&VAR_22, &VAR_23, &VAR_33, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_24, ((void*)0),
                               &VAR_25, ((void*)0), ((void*)0),
                               &VAR_26, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), &VAR_27,
                               &VAR_28, ((void*)0), ((void*)0), ((void*)0),
                               VAR_10, VAR_11,
                               VAR_19, VAR_19));

  FUNC_3(VAR_23 == VAR_6
         && (VAR_22 == VAR_9
             || VAR_22 == VAR_7
             || (VAR_22 == VAR_8 && VAR_16)));


  if (VAR_22 == VAR_8)
    {
      FUNC_3(VAR_16);

      FUNC_0(FUNC_10(&VAR_22, &VAR_23, ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), &VAR_24, ((void*)0), &VAR_27,
                                            &VAR_29,
                                            VAR_10, VAR_11,
                                            VAR_19, VAR_19));
      VAR_28 = VAR_0;
    }
  else if (!VAR_27)
    VAR_29 = FUNC_2(VAR_19);
  else
    FUNC_0(FUNC_11(&VAR_29,
                                           VAR_10, VAR_11,
                                           VAR_19, VAR_19));

  if (VAR_25)
    {
      VAR_21 = FUNC_6(VAR_26, VAR_19);
      VAR_21->repos_relpath = VAR_25;
      VAR_21->moved_from_relpath = VAR_13;
    }

  if (VAR_28 || !FUNC_1(VAR_33))
    VAR_20 = FUNC_6(VAR_1, VAR_19);
  else
    {
      if (VAR_16)
        VAR_36 = VAR_0;
      else
        FUNC_0(FUNC_13(&VAR_36, VAR_10, VAR_11,
                                                 VAR_0, VAR_19));

      if (!VAR_36)
        VAR_20 = FUNC_6(VAR_33, VAR_19);
      else
        VAR_20 = FUNC_6(VAR_1, VAR_19);
    }

  FUNC_0(VAR_14->file_opened(&VAR_34, &VAR_35,
                                 VAR_12,
                                 ((void*)0) ,
                                 VAR_20,
                                 VAR_21,
                                 VAR_15,
                                 VAR_14,
                                 VAR_19, VAR_19));

  if (VAR_35)
    return VAR_2;

  if (VAR_28 && !VAR_16)
    FUNC_0(FUNC_12(&VAR_30, VAR_10, VAR_11,
                                  VAR_19, VAR_19));
  else
    VAR_30 = FUNC_7(VAR_29, VAR_19);

  if (VAR_24)
    FUNC_0(FUNC_8(&VAR_31, VAR_10, VAR_11,
                                         VAR_24, VAR_19, VAR_19));
  else
    VAR_31 = ((void*)0);

  if (VAR_16)
    {
      VAR_32 = VAR_31;
    }
  else
    {
      FUNC_0(FUNC_14(
           &VAR_32, VAR_11, VAR_10, VAR_11,
           VAR_3 | VAR_4,
           VAR_17, VAR_18,
           VAR_19, VAR_19));
    }

  FUNC_0(VAR_14->file_added(VAR_12,
                                VAR_21,
                                VAR_20,
                                VAR_21
                                  ? VAR_31
                                  : ((void*)0),
                                VAR_32,
                                VAR_21
                                  ? VAR_29
                                  : ((void*)0),
                                VAR_30,
                                VAR_34,
                                VAR_14,
                                VAR_19));

  return VAR_2;
}
