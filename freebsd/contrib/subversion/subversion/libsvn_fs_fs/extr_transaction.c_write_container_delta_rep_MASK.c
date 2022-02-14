
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_16__ {int type; void* base_length; int base_item_index; int base_revision; int member_0; } ;
typedef TYPE_2__ svn_fs_fs__rep_header_t ;
struct TYPE_15__ {int number; int revision; } ;
struct TYPE_17__ {void* offset; int fnv1_checksum; TYPE_1__ item; scalar_t__ type; void* size; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef int svn_checksum_ctx_t ;
typedef int svn_boolean_t ;
struct write_container_baton {scalar_t__ size; void* sha1_ctx; void* md5_ctx; int stream; } ;
struct TYPE_18__ {int txn_id; int item_index; scalar_t__ expanded_size; void* size; int revision; } ;
typedef TYPE_4__ representation_t ;
typedef int node_revision_t ;
typedef int (* collection_writer_t ) (int *,void*,int *) ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int *,void*,int *) ;
 struct write_container_baton* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_4__**,int *,int *,int,int *) ;
 int FUNC_4 (TYPE_4__*,void*,void*,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (TYPE_4__**,int *,TYPE_4__*,int *,void*,int *,int *,int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_9 (int *,int *,TYPE_3__*,int *) ;
 void* FUNC_10 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int **,int *,TYPE_4__*,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int *,int *) ;
 int FUNC_14 (void**,int *,int *) ;
 int FUNC_15 (int *,void*,int *) ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (struct write_container_baton*,int *) ;
 int * FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int ,void*,int *,int *) ;
 int FUNC_22 (int *,void**,int *,int *,int *) ;
 int VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_23(representation_t *VAR_12,
                          apr_file_t *VAR_13,
                          void *VAR_14,
                          collection_writer_t VAR_15,
                          svn_fs_t *VAR_16,
                          node_revision_t *VAR_17,
                          apr_hash_t *VAR_18,
                          svn_boolean_t VAR_19,
                          apr_uint32_t VAR_20,
                          apr_pool_t *VAR_21)
{
  svn_txdelta_window_handler_t VAR_22;
  void *VAR_23;

  svn_stream_t *VAR_24;
  svn_stream_t *VAR_25;
  representation_t *VAR_26;
  svn_checksum_ctx_t *VAR_27;
  svn_stream_t *VAR_28;
  svn_fs_fs__rep_header_t VAR_29 = { 0 };

  apr_off_t VAR_30 = 0;
  apr_off_t VAR_31 = 0;
  apr_off_t VAR_32 = 0;

  struct write_container_baton *VAR_33;
  svn_boolean_t VAR_34 = (VAR_20 == VAR_3)
                        || (VAR_20 == VAR_1);


  FUNC_0(FUNC_3(&VAR_26, VAR_16, VAR_17, VAR_34, VAR_21));
  FUNC_0(FUNC_11(&VAR_28, VAR_16, VAR_26, VAR_0, VAR_21));

  FUNC_0(FUNC_14(&VAR_32, VAR_13, VAR_21));


  if (VAR_26)
    {
      VAR_29.base_revision = VAR_26->revision;
      VAR_29.base_item_index = VAR_26->item_index;
      VAR_29.base_length = VAR_26->size;
      VAR_29.type = VAR_9;
    }
  else
    {
      VAR_29.type = VAR_10;
    }

  VAR_24 = FUNC_18(VAR_13, VAR_6, VAR_21);
  if (FUNC_12(VAR_16))
    VAR_24 = FUNC_6(&VAR_27, VAR_24,
                                    VAR_21);
  else
    VAR_27 = ((void*)0);
  FUNC_0(FUNC_13(&VAR_29, VAR_24, VAR_21));
  FUNC_0(FUNC_14(&VAR_31, VAR_13, VAR_21));


  FUNC_22(&VAR_22, &VAR_23, VAR_24, VAR_16, VAR_21);

  VAR_33 = FUNC_2(VAR_21, sizeof(*VAR_33));
  VAR_33->stream = FUNC_21(VAR_22, VAR_23, VAR_28,
                                        VAR_21);
  VAR_33->size = 0;
  VAR_33->md5_ctx = FUNC_10(VAR_7, VAR_21);
  if (VAR_20 != VAR_2)
    VAR_33->sha1_ctx = FUNC_10(VAR_8, VAR_21);


  VAR_25 = FUNC_17(VAR_33, VAR_21);
  FUNC_20(VAR_25, VAR_11);

  FUNC_0(VAR_15(VAR_25, VAR_14, VAR_21));
  FUNC_0(FUNC_16(VAR_33->stream));


  FUNC_0(FUNC_4(VAR_12, VAR_33->md5_ctx, VAR_33->sha1_ctx, VAR_21));


  FUNC_0(FUNC_14(&VAR_30, VAR_13, VAR_21));
  VAR_12->size = VAR_30 - VAR_31;
  VAR_12->expanded_size = VAR_33->size;



  if (VAR_19)
    {
      representation_t *VAR_35;
      FUNC_0(FUNC_7(&VAR_35, VAR_16, VAR_12, VAR_13, VAR_32, VAR_18,
                             VAR_21, VAR_21));

      if (VAR_35)
        {

          FUNC_0(FUNC_15(VAR_13, VAR_32, VAR_21));


          FUNC_8(VAR_12, VAR_35, sizeof (*VAR_12));
          return VAR_5;
        }
    }


  FUNC_0(FUNC_19(VAR_24, "ENDREP\n"));

  FUNC_0(FUNC_1(&VAR_12->item_index, VAR_16, &VAR_12->txn_id,
                              VAR_32, VAR_21));

  if (FUNC_12(VAR_16))
    {
      svn_fs_fs__p2l_entry_t VAR_36;

      VAR_36.offset = VAR_32;
      FUNC_0(FUNC_14(&VAR_32, VAR_13, VAR_21));
      VAR_36.size = VAR_32 - VAR_36.offset;
      VAR_36.type = VAR_20;
      VAR_36.item.revision = VAR_4;
      VAR_36.item.number = VAR_12->item_index;
      FUNC_0(FUNC_5(&VAR_36.fnv1_checksum,
                                      VAR_27,
                                      VAR_21));

      FUNC_0(FUNC_9(VAR_16, &VAR_12->txn_id, &VAR_36, VAR_21));
    }

  return VAR_5;
}
