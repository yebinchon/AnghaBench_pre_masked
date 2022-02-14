
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_12__ {int stream; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_2__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
struct TYPE_14__ {void* kind; int digest; } ;
typedef TYPE_3__ svn_checksum_t ;
struct TYPE_15__ {int expanded_size; int size; int item_index; int revision; int sha1_digest; scalar_t__ has_sha1; int md5_digest; int txn_id; } ;
typedef TYPE_4__ representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,int *,int ,int ,int *) ;
 TYPE_3__* FUNC_3 (void*,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__**,int ,int *,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_4,
                               representation_t *VAR_5,
                               apr_pool_t *VAR_6)
{
  svn_checksum_t VAR_7;
  svn_checksum_t *VAR_8;
  svn_fs_fs__revision_file_t *VAR_9;
  svn_fs_fs__rep_header_t *VAR_10;





  if (!VAR_5 || VAR_5->expanded_size != 0 || VAR_5->size == 0)
    return VAR_0;


  FUNC_1(!FUNC_6(&VAR_5->txn_id));
  VAR_8 = FUNC_3(VAR_1, VAR_6);

  VAR_7.digest = VAR_5->md5_digest;
  VAR_7.kind = VAR_1;
  if (!FUNC_4(VAR_8, &VAR_7))
    {
      VAR_5->expanded_size = VAR_5->size;
      return VAR_0;
    }



  if (VAR_5->has_sha1)
    {
      svn_checksum_t *VAR_11
        = FUNC_3(VAR_2, VAR_6);

      VAR_7.digest = VAR_5->sha1_digest;
      VAR_7.kind = VAR_2;
      if (!FUNC_4(VAR_11, &VAR_7))
        {
          VAR_5->expanded_size = VAR_5->size;
          return VAR_0;
        }
    }
  if (VAR_5->size == 4)
    {

      return VAR_0;
    }




  FUNC_0(FUNC_2(&VAR_9, VAR_4, VAR_5->revision,
                                 VAR_5->item_index, VAR_6));
  FUNC_0(FUNC_7(&VAR_10, VAR_9->stream,
                                     VAR_6, VAR_6));
  FUNC_0(FUNC_5(VAR_9));


  if (VAR_10->type == VAR_3)
    VAR_5->expanded_size = VAR_5->size;

  return VAR_0;
}
