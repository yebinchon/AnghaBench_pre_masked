
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
struct TYPE_11__ {scalar_t__ kind; scalar_t__ filesize; scalar_t__ mtime; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int (* file_closed ) (char const*,int *,int *,void*,TYPE_2__ const*,int *) ;int (* file_changed ) (char const*,int *,int *,char const*,char const*,int *,int *,int,TYPE_3__*,void*,TYPE_2__ const*,int *) ;int (* file_opened ) (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_2__ const*,int *,int *) ;} ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_13__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void**,scalar_t__*,char const*,int *,int *,int *,void*,TYPE_2__ const*,int *,int *) ;
 int FUNC_5 (char const*,int *,int *,char const*,char const*,int *,int *,int,TYPE_3__*,void*,TYPE_2__ const*,int *) ;
 int FUNC_6 (char const*,int *,int *,void*,TYPE_2__ const*,int *) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__*,char const*,char const*,int *) ;
 int FUNC_9 (TYPE_1__ const**,char const*,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (TYPE_3__**,int *,int *,int *) ;
 int FUNC_11 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,scalar_t__*,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_12 (int **,int *,char const*,int *,int *) ;
 int FUNC_13 (char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_14 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_15 (int **,int *,char const*,int *,int *) ;
 int FUNC_16 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (char const**,char const*,int *,char const*,int,int ,void*,int *,int *) ;

svn_error_t *
FUNC_18(svn_wc__db_t *VAR_11,
                               const char *VAR_12,
                               const char *VAR_13,
                               svn_revnum_t VAR_14,
                               const svn_diff_tree_processor_t *VAR_15,
                               void *VAR_16,
                               svn_boolean_t VAR_17,
                               svn_cancel_func_t VAR_18,
                               void *VAR_19,
                               apr_pool_t *VAR_20)
{
  void *VAR_21 = ((void*)0);
  svn_boolean_t VAR_22 = VAR_0;
  svn_wc__db_status_t VAR_23;
  svn_revnum_t VAR_24;
  svn_boolean_t VAR_25;
  svn_boolean_t VAR_26;
  svn_boolean_t VAR_27 = VAR_0;
  svn_wc__db_status_t VAR_28;
  const svn_checksum_t *VAR_29;
  const svn_checksum_t *VAR_30;
  svn_filesize_t VAR_31;
  apr_time_t VAR_32;
  const char *VAR_33;
  const char *VAR_34;
  svn_diff_source_t *VAR_35;
  svn_diff_source_t *VAR_36;
  apr_hash_t *VAR_37;
  apr_hash_t *VAR_38;
  apr_array_header_t *VAR_39;

  FUNC_0(FUNC_14(&VAR_23, ((void*)0), &VAR_24, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_29, ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_31,
                               &VAR_32, ((void*)0), ((void*)0), ((void*)0),
                               &VAR_25, &VAR_26, ((void*)0), ((void*)0), ((void*)0),
                               VAR_11, VAR_12, VAR_20, VAR_20));
  VAR_30 = VAR_29;

  FUNC_3(VAR_23 == VAR_10
         || VAR_23 == VAR_8
         || (VAR_23 == VAR_9 && VAR_17));

  if (VAR_23 != VAR_10)
    {
      FUNC_0(FUNC_11(&VAR_28, ((void*)0), &VAR_24,
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), &VAR_30, ((void*)0), ((void*)0), &VAR_25,
                                       ((void*)0), ((void*)0),
                                       VAR_11, VAR_12,
                                       VAR_20, VAR_20));
      VAR_31 = VAR_1;
      VAR_32 = 0;
      VAR_26 = VAR_6;
    }
  else if (VAR_17)
    VAR_27 = VAR_6;
  else
    {
      const svn_io_dirent2_t *VAR_40;


      FUNC_0(FUNC_9(&VAR_40, VAR_12,
                                  VAR_6 ,
                                  VAR_6 ,
                                  VAR_20, VAR_20));



      if (VAR_40->kind != VAR_7
          || (VAR_40->kind == VAR_7
              && VAR_40->filesize == VAR_31
              && VAR_40->mtime == VAR_32))
        {
          VAR_27 = VAR_6;
        }
    }

  if (VAR_27 && !VAR_26)
    return VAR_3;

  FUNC_3(VAR_30);

  if (!FUNC_1(VAR_14))
    VAR_14 = VAR_24;

  VAR_35 = FUNC_7(VAR_14, VAR_20);
  VAR_36 = FUNC_7(VAR_2, VAR_20);

  FUNC_0(VAR_15->file_opened(&VAR_21, &VAR_22, VAR_13,
                                 VAR_35,
                                 VAR_36,
                                 ((void*)0) ,
                                 VAR_16,
                                 VAR_15,
                                 VAR_20, VAR_20));

  if (VAR_22)
    return VAR_3;

  FUNC_0(FUNC_13(&VAR_33,
                                       VAR_11, VAR_12, VAR_30,
                                       VAR_20, VAR_20));

  if (VAR_17)
    FUNC_0(FUNC_13(&VAR_34,
                                         VAR_11, VAR_12,
                                         VAR_29,
                                         VAR_20, VAR_20));
  else if (! (VAR_25 || VAR_26))
    VAR_34 = VAR_12;
  else if (VAR_27)
    VAR_34 = VAR_33;
  else
    FUNC_0(FUNC_17(
                            &VAR_34, VAR_12,
                            VAR_11, VAR_12,
                            VAR_4
                                | VAR_5,
                            VAR_18, VAR_19,
                            VAR_20, VAR_20));

  if (! VAR_27)
    FUNC_0(FUNC_8(&VAR_27, VAR_34,
                                         VAR_33, VAR_20));

  if (VAR_25)
    FUNC_0(FUNC_12(&VAR_37, VAR_11, VAR_12,
                                      VAR_20, VAR_20));
  else
    VAR_37 = FUNC_2(VAR_20);

  if (VAR_23 == VAR_10 && (VAR_17 || !VAR_26))
    VAR_38 = VAR_37;
  else if (VAR_17)
    FUNC_0(FUNC_15(&VAR_38, VAR_11, VAR_12,
                                           VAR_20, VAR_20));
  else
    FUNC_0(FUNC_16(&VAR_38, VAR_11, VAR_12,
                                  VAR_20, VAR_20));

  FUNC_0(FUNC_10(&VAR_39, VAR_38, VAR_37, VAR_20));

  if (VAR_39->nelts || !VAR_27)
    {
      FUNC_0(VAR_15->file_changed(VAR_13,
                                      VAR_35,
                                      VAR_36,
                                      VAR_33,
                                      VAR_34,
                                      VAR_37,
                                      VAR_38,
                                      ! VAR_27,
                                      VAR_39,
                                      VAR_21,
                                      VAR_15,
                                      VAR_20));
    }
  else
    {
      FUNC_0(VAR_15->file_closed(VAR_13,
                                     VAR_35,
                                     VAR_36,
                                     VAR_21,
                                     VAR_15,
                                     VAR_20));
    }

  return VAR_3;
}
