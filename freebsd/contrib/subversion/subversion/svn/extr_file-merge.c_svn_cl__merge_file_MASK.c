
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_cancel_func_t ;
typedef void* svn_boolean_t ;
struct file_merge_baton {char const* editor_cmd; void* remains_in_conflict; void* abort_merge; int * scratch_pool; int * config; int * merged_file; scalar_t__ current_line_latest; scalar_t__ current_line_modified; scalar_t__ current_line_original; int * latest_file; int * modified_file; int * original_file; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char const*,char*,char const*) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 (int **,char const*,char const*,char const*,int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,struct file_merge_baton*,int *,int ,void*) ;
 char* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,char const*,void*,int *) ;
 int FUNC_11 (int *,int *) ;
 int VAR_7 ;
 int FUNC_12 (int **,char const*,int,int ,int *) ;
 int FUNC_13 (void**,char const*,int *) ;
 int FUNC_14 (int **,char const**,int *,int ,int *,int *) ;
 int FUNC_15 (char const*,void*,int *) ;
 int FUNC_16 (char const*,void*,void*,int *) ;

svn_error_t *
FUNC_17(svn_boolean_t *VAR_8,
                   const char *VAR_9,
                   const char *VAR_10,
                   const char *VAR_11,
                   const char *VAR_12,
                   const char *VAR_13,
                   const char *VAR_14,
                   const char *VAR_15,
                   apr_hash_t *VAR_16,
                   svn_cancel_func_t VAR_17,
                   void *VAR_18,
                   apr_pool_t *VAR_19)
{
  svn_diff_t *VAR_20;
  svn_diff_file_options_t *VAR_21;
  apr_file_t *VAR_22;
  apr_file_t *VAR_23;
  apr_file_t *VAR_24;
  apr_file_t *VAR_25;
  const char *VAR_26;
  struct file_merge_baton VAR_27;
  svn_boolean_t VAR_28;
  const char *VAR_29;
  const char *VAR_30;
  const char *VAR_31;
  const char *VAR_32 = FUNC_9(VAR_14, VAR_13);



  if (VAR_32)
    VAR_31 = FUNC_8(VAR_32, VAR_19);
  else
    VAR_31 = FUNC_8(VAR_13, VAR_19);

  FUNC_0(FUNC_4(VAR_19, FUNC_2("Merging '%s'.\n"),
                             VAR_31));

  FUNC_0(FUNC_12(&VAR_22, VAR_9,
                           VAR_2 | VAR_0,
                           VAR_1, VAR_19));
  FUNC_0(FUNC_12(&VAR_23, VAR_10,
                           VAR_2 | VAR_0,
                           VAR_1, VAR_19));
  FUNC_0(FUNC_12(&VAR_24, VAR_11,
                           VAR_2 | VAR_0,
                           VAR_1, VAR_19));
  FUNC_0(FUNC_14(&VAR_25, &VAR_26,
                                   ((void*)0), VAR_7,
                                   VAR_19, VAR_19));

  VAR_21 = FUNC_6(VAR_19);
  FUNC_0(FUNC_5(&VAR_20, VAR_9, VAR_10, VAR_11,
                                VAR_21, VAR_19));

  VAR_27.original_file = VAR_22;
  VAR_27.modified_file = VAR_23;
  VAR_27.latest_file = VAR_24;
  VAR_27.current_line_original = 0;
  VAR_27.current_line_modified = 0;
  VAR_27.current_line_latest = 0;
  VAR_27.merged_file = VAR_25;
  VAR_27.remains_in_conflict = VAR_3;
  VAR_27.editor_cmd = VAR_15;
  VAR_27.config = VAR_16;
  VAR_27.abort_merge = VAR_3;
  VAR_27.scratch_pool = VAR_19;

  FUNC_0(FUNC_7(VAR_20, &VAR_27, &VAR_6,
                           VAR_17, VAR_18));

  FUNC_0(FUNC_11(VAR_22, VAR_19));
  FUNC_0(FUNC_11(VAR_23, VAR_19));
  FUNC_0(FUNC_11(VAR_24, VAR_19));
  FUNC_0(FUNC_11(VAR_25, VAR_19));


  if (VAR_8)
    *VAR_8 = VAR_5;

  if (VAR_27.abort_merge)
    {
      FUNC_0(FUNC_15(VAR_26, VAR_5, VAR_19));
      FUNC_0(FUNC_4(VAR_19, FUNC_2("Merge of '%s' aborted.\n"),
                                 VAR_31));
      return VAR_4;
    }

  FUNC_0(FUNC_13(&VAR_28, VAR_12, VAR_19));

  VAR_30 = FUNC_9(VAR_14, VAR_12);
  if (VAR_30)
    VAR_29 = FUNC_8(VAR_30,
                                                     VAR_19);
  else
    VAR_29 = FUNC_8(VAR_12,
                                                     VAR_19);

  FUNC_1(FUNC_10(VAR_26, VAR_12, VAR_3,
                             VAR_19),
            FUNC_3(VAR_19,
                         FUNC_2("Could not write merged result to '%s', saved "
                           "instead at '%s'.\n'%s' remains in conflict.\n"),
                         VAR_29,
                         FUNC_8(VAR_26,
                                                VAR_19),
                         VAR_31));
  FUNC_0(FUNC_16(VAR_12, VAR_28, VAR_3,
                                     VAR_19));
  FUNC_0(FUNC_15(VAR_26, VAR_5, VAR_19));



  if (VAR_8)
    *VAR_8 = VAR_27.remains_in_conflict;

  if (VAR_27.remains_in_conflict)
    FUNC_0(FUNC_4(
              VAR_19,
              FUNC_2("Merge of '%s' completed (remains in conflict).\n"),
              VAR_31));
  else
    FUNC_0(FUNC_4(
              VAR_19, FUNC_2("Merge of '%s' completed.\n"),
              VAR_31));

  return VAR_4;
}
