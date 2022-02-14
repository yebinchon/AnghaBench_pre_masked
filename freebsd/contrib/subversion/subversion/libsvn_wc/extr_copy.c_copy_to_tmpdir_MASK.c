
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_io_file_del_t ;
struct TYPE_3__ {scalar_t__ kind; scalar_t__ filesize; scalar_t__ mtime; scalar_t__ special; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (char const*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,char const*,int ,int ,int ,void*,int *) ;
 int FUNC_7 (char const*,char const*,int ,int *) ;
 int FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,char const**,char const*,int ,int *,int *) ;
 int FUNC_11 (char const*,scalar_t__,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (scalar_t__*,int *,char const*,scalar_t__,int *) ;
 int FUNC_13 (int **,int *,char const*,int *,int *) ;
 int FUNC_14 (int **,int *,char const*,int *,scalar_t__,int ,int *,int *) ;
 int FUNC_15 (int **,int *,char const*,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_skel_t **VAR_12,
               svn_node_kind_t *VAR_13,
               svn_wc__db_t *VAR_14,
               const char *VAR_15,
               const char *VAR_16,
               const char *VAR_17,
               svn_boolean_t VAR_18,
               svn_boolean_t VAR_19,
               const svn_io_dirent2_t *VAR_20,
               svn_filesize_t VAR_21,
               apr_time_t VAR_22,
               svn_cancel_func_t VAR_23,
               void *VAR_24,
               apr_pool_t *VAR_25,
               apr_pool_t *VAR_26)
{
  svn_boolean_t VAR_27;
  svn_io_file_del_t VAR_28;
  const char *VAR_29;
  svn_node_kind_t VAR_30;
  if (!VAR_13)
    VAR_13 = &VAR_30;

  *VAR_12 = ((void*)0);

  if (VAR_20)
    {
      *VAR_13 = VAR_20->kind;
      VAR_27 = VAR_20->special;
    }
  else
    FUNC_0(FUNC_5(VAR_15, VAR_13, &VAR_27,
                                      VAR_26));
  if (*VAR_13 == VAR_10)
    {
      return VAR_4;
    }
  else if (*VAR_13 == VAR_11)
    {
      return FUNC_4(VAR_2, ((void*)0),
                               FUNC_1("Source '%s' is unexpected kind"),
                               FUNC_3(VAR_15,
                                                      VAR_26));
    }
  else if (*VAR_13 == VAR_8 || VAR_27)
    VAR_28 = VAR_7;
  else
    VAR_28 = VAR_6;






  if (VAR_18 && !VAR_19)
    {
      svn_boolean_t VAR_31;





      if (VAR_20
          && VAR_20->kind == VAR_9
          && VAR_21 != VAR_3
          && VAR_21 == VAR_20->filesize
          && VAR_22 == VAR_20->mtime)
        {
          VAR_31 = VAR_1;
        }
      else
        {
          FUNC_0(FUNC_12(&VAR_31, VAR_14, VAR_15,
                                                   VAR_1, VAR_26));
        }

      if (!VAR_31)
        {

          FUNC_0(FUNC_14(VAR_12,
                                                VAR_14, VAR_16, ((void*)0), VAR_1,
                                                VAR_5,
                                                VAR_25, VAR_26));
          return VAR_4;
        }
    }
  else if (*VAR_13 == VAR_8 && !VAR_18)
    {

      FUNC_0(FUNC_13(VAR_12,
                                           VAR_14, VAR_16,
                                           VAR_25, VAR_26));

      return VAR_4;
    }





  FUNC_0(FUNC_10(((void*)0), &VAR_29, VAR_17,
                                   VAR_28, VAR_26, VAR_26));

  if (*VAR_13 == VAR_8)
    {
      if (VAR_18)
        FUNC_0(FUNC_6(
                           VAR_15,
                           VAR_17,
                           FUNC_2(VAR_29, VAR_26),
                           VAR_5,
                           VAR_23, VAR_24,
                           VAR_26));
      else
        FUNC_0(FUNC_9(VAR_29, VAR_0, VAR_26));
    }
  else if (!VAR_27)
    FUNC_0(FUNC_7(VAR_15, VAR_29,
                             VAR_5 ,
                             VAR_26));
  else
    FUNC_0(FUNC_8(VAR_15, VAR_29, VAR_26));

  if (VAR_18)
    {

      FUNC_0(FUNC_11(VAR_29,
                                         VAR_1, VAR_26));
    }

  FUNC_0(FUNC_15(VAR_12, VAR_14, VAR_16,
                                     VAR_29, VAR_16,
                                     VAR_25, VAR_26));

  return VAR_4;
}
