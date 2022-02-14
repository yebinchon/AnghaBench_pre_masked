
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_15__ {scalar_t__ kind; scalar_t__ filesize; scalar_t__ mtime; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef scalar_t__ svn_filesize_t ;
struct TYPE_16__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (scalar_t__*,int *,char const*,scalar_t__,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__ const**,char const*,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_5 (int *,char const*,scalar_t__,scalar_t__,int *) ;
 TYPE_2__* FUNC_6 (int **,scalar_t__*,int *,char const*,int const*,int *,int *) ;
 TYPE_2__* FUNC_7 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* FUNC_8 (scalar_t__*,int *,char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_9(svn_boolean_t *VAR_8,
                                 svn_wc__db_t *VAR_9,
                                 const char *VAR_10,
                                 svn_boolean_t VAR_11,
                                 apr_pool_t *VAR_12)
{
  svn_stream_t *VAR_13;
  svn_filesize_t VAR_14;
  svn_wc__db_status_t VAR_15;
  svn_node_kind_t VAR_16;
  const svn_checksum_t *VAR_17;
  svn_filesize_t VAR_18;
  apr_time_t VAR_19;
  svn_boolean_t VAR_20;
  svn_boolean_t VAR_21;
  const svn_io_dirent2_t *VAR_22;


  FUNC_1(FUNC_7(&VAR_15, &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), &VAR_17, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               &VAR_18, &VAR_19,
                               ((void*)0), ((void*)0), ((void*)0), &VAR_20, &VAR_21,
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_9, VAR_10,
                               VAR_12, VAR_12));



  if (!VAR_17
      || (VAR_16 != VAR_5)
      || ((VAR_15 != VAR_7)
          && (VAR_15 != VAR_6)))
    {
      *VAR_8 = VAR_4;
      return VAR_3;
    }

  FUNC_1(FUNC_4(&VAR_22, VAR_10, VAR_0, VAR_4,
                              VAR_12, VAR_12));

  if (VAR_22->kind != VAR_5)
    {

      *VAR_8 = VAR_0;
      return VAR_3;
    }

  if (! VAR_11)
    {
      if (VAR_18 != VAR_2
          && VAR_22->filesize != VAR_18)
        goto compare_them;






      if (VAR_19 != VAR_22->mtime)
        goto compare_them;

      *VAR_8 = VAR_0;
      return VAR_3;
    }

 compare_them:
  FUNC_1(FUNC_6(&VAR_13, &VAR_14,
                                   VAR_9, VAR_10, VAR_17,
                                   VAR_12, VAR_12));


  {
    svn_error_t *VAR_23;
    VAR_23 = FUNC_2(VAR_8, VAR_9,
                             VAR_10, VAR_22->filesize,
                             VAR_13, VAR_14,
                             VAR_20, VAR_21,
                             VAR_11,
                             VAR_12);



    if (VAR_23 && FUNC_0(VAR_23->apr_err))
      return FUNC_3(VAR_1, VAR_23, ((void*)0));
    else
      FUNC_1(VAR_23);
  }

  if (!*VAR_8)
    {
      svn_boolean_t VAR_24;


      FUNC_1(FUNC_8(&VAR_24, VAR_9, VAR_10, VAR_0,
                                          VAR_12));
      if (VAR_24)
        FUNC_1(FUNC_5(VAR_9, VAR_10,
                                                  VAR_22->filesize,
                                                  VAR_22->mtime,
                                                  VAR_12));
    }

  return VAR_3;
}
