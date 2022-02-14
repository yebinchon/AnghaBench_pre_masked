
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_11__ {int number; int revision; } ;
struct TYPE_12__ {void* offset; int fnv1_checksum; TYPE_1__ item; scalar_t__ type; void* size; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef int svn_checksum_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
struct write_container_baton {int stream; scalar_t__ size; void* sha1_ctx; void* md5_ctx; } ;
struct TYPE_13__ {int txn_id; int item_index; scalar_t__ size; scalar_t__ expanded_size; } ;
typedef TYPE_3__ representation_t ;
typedef int (* collection_writer_t ) (int *,void*,int *) ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *,void*,int *) ;
 struct write_container_baton* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,void*,void*,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (TYPE_3__**,int *,TYPE_3__*,int *,void*,int *,int *,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_8 (int *,int *,TYPE_2__*,int *) ;
 void* FUNC_9 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (void**,int *,int *) ;
 int FUNC_12 (int *,void*,int *) ;
 int * FUNC_13 (struct write_container_baton*,int *) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_17(representation_t *VAR_7,
                    apr_file_t *VAR_8,
                    void *VAR_9,
                    collection_writer_t VAR_10,
                    svn_fs_t *VAR_11,
                    apr_hash_t *VAR_12,
                    svn_boolean_t VAR_13,
                    apr_uint32_t VAR_14,
                    apr_pool_t *VAR_15)
{
  svn_stream_t *VAR_16;
  struct write_container_baton *VAR_17;
  svn_checksum_ctx_t *VAR_18;
  apr_off_t VAR_19 = 0;

  FUNC_0(FUNC_11(&VAR_19, VAR_8, VAR_15));

  VAR_17 = FUNC_2(VAR_15, sizeof(*VAR_17));

  VAR_17->stream = FUNC_14(VAR_8, VAR_3, VAR_15);
  if (FUNC_10(VAR_11))
    VAR_17->stream = FUNC_5(&VAR_18, VAR_17->stream,
                                    VAR_15);
  else
    VAR_18 = ((void*)0);
  VAR_17->size = 0;
  VAR_17->md5_ctx = FUNC_9(VAR_4, VAR_15);
  if (VAR_14 != VAR_0)
    VAR_17->sha1_ctx = FUNC_9(VAR_5, VAR_15);

  VAR_16 = FUNC_13(VAR_17, VAR_15);
  FUNC_16(VAR_16, VAR_6);

  FUNC_0(FUNC_15(VAR_17->stream, "PLAIN\n"));

  FUNC_0(VAR_10(VAR_16, VAR_9, VAR_15));


  FUNC_0(FUNC_3(VAR_7, VAR_17->md5_ctx, VAR_17->sha1_ctx, VAR_15));


  VAR_7->expanded_size = VAR_17->size;
  VAR_7->size = VAR_17->size;



  if (VAR_13)
    {
      representation_t *VAR_20;
      FUNC_0(FUNC_6(&VAR_20, VAR_11, VAR_7, VAR_8, VAR_19, VAR_12,
                             VAR_15, VAR_15));

      if (VAR_20)
        {

          FUNC_0(FUNC_12(VAR_8, VAR_19, VAR_15));


          FUNC_7(VAR_7, VAR_20, sizeof (*VAR_7));
          return VAR_2;
        }
    }


  FUNC_0(FUNC_15(VAR_17->stream, "ENDREP\n"));

  FUNC_0(FUNC_1(&VAR_7->item_index, VAR_11, &VAR_7->txn_id,
                              VAR_19, VAR_15));

  if (FUNC_10(VAR_11))
    {
      svn_fs_fs__p2l_entry_t VAR_21;

      VAR_21.offset = VAR_19;
      FUNC_0(FUNC_11(&VAR_19, VAR_8, VAR_15));
      VAR_21.size = VAR_19 - VAR_21.offset;
      VAR_21.type = VAR_14;
      VAR_21.item.revision = VAR_1;
      VAR_21.item.number = VAR_7->item_index;
      FUNC_0(FUNC_4(&VAR_21.fnv1_checksum,
                                      VAR_18,
                                      VAR_15));

      FUNC_0(FUNC_8(VAR_11, &VAR_7->txn_id, &VAR_21, VAR_15));
    }

  return VAR_2;
}
