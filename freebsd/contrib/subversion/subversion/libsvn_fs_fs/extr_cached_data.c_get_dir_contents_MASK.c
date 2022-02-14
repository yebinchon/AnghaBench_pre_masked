
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_6__ {int entries; int txn_filesize; } ;
typedef TYPE_1__ svn_fs_fs__dir_data_t ;
typedef int svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int id; TYPE_3__* data_rep; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_8__ {int expanded_size; int txn_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int ,int ,int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int **,char const*,int,int ,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int **,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_fs__dir_data_t *VAR_7,
                 svn_fs_t *VAR_8,
                 node_revision_t *VAR_9,
                 apr_pool_t *VAR_10,
                 apr_pool_t *VAR_11)
{
  svn_stream_t *VAR_12;


  VAR_7->txn_filesize = VAR_4;


  if (VAR_9->data_rep && FUNC_4(&VAR_9->data_rep->txn_id))
    {

      const char *VAR_13;
      apr_file_t *VAR_14;

      VAR_13 = FUNC_5(VAR_8, VAR_9->id,
                                                   VAR_11);




      FUNC_0(FUNC_6(&VAR_14, VAR_13, VAR_2 | VAR_0,
                               VAR_1, VAR_11));


      FUNC_0(FUNC_7(&VAR_7->txn_filesize, VAR_14, VAR_11));

      VAR_12 = FUNC_9(VAR_14, VAR_3, VAR_11);
      FUNC_0(FUNC_2(&VAR_7->entries, VAR_12, VAR_6, VAR_9->id,
                               VAR_10, VAR_11));
      FUNC_0(FUNC_8(VAR_12));
    }
  else if (VAR_9->data_rep)
    {



      apr_size_t VAR_15 = VAR_9->data_rep->expanded_size;
      svn_stringbuf_t *VAR_16;


      FUNC_0(FUNC_3(&VAR_12, VAR_8, VAR_9->data_rep,
                                      VAR_3, VAR_11));
      FUNC_0(FUNC_11(&VAR_16, VAR_12, VAR_15, VAR_11));
      FUNC_0(FUNC_8(VAR_12));


      VAR_12 = FUNC_10(VAR_16, VAR_11);
      FUNC_0(FUNC_2(&VAR_7->entries, VAR_12, VAR_3, VAR_9->id,
                               VAR_10, VAR_11));
    }
  else
    {
       VAR_7->entries = FUNC_1(VAR_10, 0, sizeof(svn_fs_dirent_t *));
    }

  return VAR_5;
}
