
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_8__ {TYPE_4__* data_rep; int noderev_id; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_x__dirent_t ;
struct TYPE_9__ {int entries; scalar_t__ txn_filesize; } ;
typedef TYPE_3__ svn_fs_x__dir_data_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_7__ {int change_set; } ;
struct TYPE_10__ {scalar_t__ expanded_size; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int ,int const*,int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_4__*,int ,int *) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int *,int const*,int *,int *) ;
 int FUNC_6 (int **,char const*,int,int ,int *) ;
 int FUNC_7 (scalar_t__*,int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int **,int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_fs_x__dir_data_t *VAR_7,
                 svn_fs_t *VAR_8,
                 svn_fs_x__noderev_t *VAR_9,
                 apr_pool_t *VAR_10,
                 apr_pool_t *VAR_11)
{
  svn_stream_t *VAR_12;
  const svn_fs_x__id_t *VAR_13 = &VAR_9->noderev_id;
  apr_size_t VAR_14;
  svn_stringbuf_t *VAR_15;
  svn_boolean_t VAR_16;


  VAR_7->txn_filesize = VAR_4;


  if (VAR_9->data_rep
      && ! FUNC_4(VAR_9->data_rep->id.change_set))
    {

      const char *VAR_17;
      apr_file_t *VAR_18;

      VAR_17 = FUNC_5(VAR_8, VAR_13, VAR_11,
                                                  VAR_11);




      FUNC_0(FUNC_6(&VAR_18, VAR_17, VAR_2 | VAR_0,
                               VAR_1, VAR_11));


      FUNC_0(FUNC_7(&VAR_7->txn_filesize, VAR_18, VAR_11));
      VAR_14 = (apr_size_t)VAR_7->txn_filesize;


      VAR_12 = FUNC_9(VAR_18, VAR_3, VAR_11);
      VAR_16 = VAR_6;
    }
  else if (VAR_9->data_rep)
    {

      VAR_14 = VAR_9->data_rep->expanded_size;
      FUNC_0(FUNC_3(&VAR_12, VAR_8, VAR_9->data_rep,
                                     VAR_3, VAR_11));
      VAR_16 = VAR_3;
    }
  else
    {

      VAR_7->entries = FUNC_1(VAR_10, 0,
                                    sizeof(svn_fs_x__dirent_t *));
      return VAR_5;
    }







  FUNC_0(FUNC_10(&VAR_15, VAR_12, VAR_14, VAR_10));
  FUNC_0(FUNC_8(VAR_12));


  FUNC_0(FUNC_2(&VAR_7->entries, VAR_15, VAR_16, VAR_13,
                            VAR_10, VAR_11));

  return VAR_5;
}
