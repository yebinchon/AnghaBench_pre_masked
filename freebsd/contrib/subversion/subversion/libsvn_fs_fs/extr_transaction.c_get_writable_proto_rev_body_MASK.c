
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
struct get_writable_proto_rev_baton {void** lockcookie; int txn_id; } ;
struct TYPE_3__ {scalar_t__ being_written; } ;
typedef TYPE_1__ fs_fs_shared_txn_data_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int * FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 char* FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int **,char const*,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_t *VAR_8, const void *VAR_9, apr_pool_t *VAR_10)
{
  const struct get_writable_proto_rev_baton *VAR_11 = VAR_9;
  void **VAR_12 = VAR_11->lockcookie;
  fs_fs_shared_txn_data_t *VAR_13 = FUNC_4(VAR_8, &VAR_11->txn_id, VAR_7);



  if (VAR_13->being_written)
    return FUNC_7(VAR_5, ((void*)0),
                             FUNC_2("Cannot write to the prototype revision file "
                               "of transaction '%s' because a previous "
                               "representation is currently being written by "
                               "this process"),
                             FUNC_9(&VAR_11->txn_id, VAR_10));
  {
    apr_file_t *VAR_14;
    apr_status_t VAR_15;
    const char *VAR_16
      = FUNC_10(VAR_8, &VAR_11->txn_id, VAR_10);
    FUNC_1(FUNC_12(&VAR_14, VAR_16,
                             VAR_4 | VAR_0, VAR_3, VAR_10));

    VAR_15 = FUNC_3(VAR_14,
                            VAR_1 | VAR_2);
    if (VAR_15)
      {
        FUNC_6(FUNC_11(VAR_14, VAR_10));

        if (FUNC_0(VAR_15))
          return FUNC_7(VAR_5, ((void*)0),
                                   FUNC_2("Cannot write to the prototype revision "
                                     "file of transaction '%s' because a "
                                     "previous representation is currently "
                                     "being written by another process"),
                                   FUNC_9(&VAR_11->txn_id,
                                                             VAR_10));

        return FUNC_8(VAR_15,
                                  FUNC_2("Can't get exclusive lock on file '%s'"),
                                  FUNC_5(VAR_16, VAR_10));
      }

    *VAR_12 = VAR_14;
  }


  VAR_13->being_written = VAR_7;

  return VAR_6;
}
