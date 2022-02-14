
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int number; void* revision; } ;
struct TYPE_13__ {void* offset; int fnv1_checksum; TYPE_1__ item; int type; void* size; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
struct rep_write_baton {void* delta_start; void* rep_offset; int scratch_pool; int lockcookie; int fs; TYPE_4__* noderev; int file; int fnv1a_checksum_ctx; int rep_stream; int result_pool; int sha1_checksum_ctx; int md5_checksum_ctx; int rep_size; scalar_t__ delta_stream; } ;
struct TYPE_14__ {int txn_id; int item_index; void* revision; int expanded_size; void* size; } ;
typedef TYPE_3__ representation_t ;
typedef void* apr_off_t ;
struct TYPE_15__ {int id; TYPE_3__* data_rep; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int ,int *,void*,int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct rep_write_baton*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_3__**,int ,TYPE_3__*,int ,void*,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,TYPE_3__*,int ) ;
 int FUNC_8 (int ,int *,TYPE_2__*,int ) ;
 int FUNC_9 (int ,TYPE_4__*,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (void**,int ,int ) ;
 int FUNC_15 (int ,void*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_20(void *VAR_5)
{
  struct rep_write_baton *VAR_6 = VAR_5;
  representation_t *VAR_7;
  representation_t *VAR_8;
  apr_off_t VAR_9;

  VAR_7 = FUNC_2(VAR_6->result_pool, sizeof(*VAR_7));



  if (VAR_6->delta_stream)
    FUNC_0(FUNC_17(VAR_6->delta_stream));


  FUNC_0(FUNC_14(&VAR_9, VAR_6->file, VAR_6->scratch_pool));
  VAR_7->size = VAR_9 - VAR_6->delta_start;


  VAR_7->expanded_size = VAR_6->rep_size;
  VAR_7->txn_id = *FUNC_10(VAR_6->noderev->id);
  FUNC_0(FUNC_7(VAR_6->fs, VAR_7, VAR_6->scratch_pool));
  VAR_7->revision = VAR_2;


  FUNC_0(FUNC_4(VAR_7, VAR_6->md5_checksum_ctx, VAR_6->sha1_checksum_ctx,
                        VAR_6->result_pool));



  FUNC_0(FUNC_6(&VAR_8, VAR_6->fs, VAR_7, VAR_6->file, VAR_6->rep_offset, ((void*)0),
                         VAR_6->result_pool, VAR_6->scratch_pool));

  if (VAR_8)
    {

      FUNC_0(FUNC_15(VAR_6->file, VAR_6->rep_offset, VAR_6->scratch_pool));


      VAR_6->noderev->data_rep = VAR_8;
    }
  else
    {

      FUNC_0(FUNC_18(VAR_6->rep_stream, "ENDREP\n"));
      FUNC_0(FUNC_1(&VAR_7->item_index, VAR_6->fs, &VAR_7->txn_id,
                                  VAR_6->rep_offset, VAR_6->scratch_pool));

      VAR_6->noderev->data_rep = VAR_7;
    }


  FUNC_3(VAR_6->scratch_pool, VAR_6, VAR_4);


  FUNC_0(FUNC_11(VAR_6->fs, VAR_6->noderev->id, VAR_6->noderev,
                                       VAR_0, VAR_6->scratch_pool));
  if (!VAR_8 && FUNC_12(VAR_6->fs))
    {
      svn_fs_fs__p2l_entry_t VAR_10;

      VAR_10.offset = VAR_6->rep_offset;
      FUNC_0(FUNC_14(&VAR_9, VAR_6->file, VAR_6->scratch_pool));
      VAR_10.size = VAR_9 - VAR_6->rep_offset;
      VAR_10.type = VAR_1;
      VAR_10.item.revision = VAR_2;
      VAR_10.item.number = VAR_7->item_index;
      FUNC_0(FUNC_5(&VAR_10.fnv1_checksum,
                                      VAR_6->fnv1a_checksum_ctx,
                                      VAR_6->scratch_pool));

      FUNC_0(FUNC_8(VAR_6->fs, &VAR_7->txn_id, &VAR_10,
                                    VAR_6->scratch_pool));
    }

  FUNC_0(FUNC_13(VAR_6->file, VAR_6->scratch_pool));



  if (!VAR_8)
    FUNC_0(FUNC_9(VAR_6->fs, VAR_6->noderev, VAR_6->scratch_pool));

  FUNC_0(FUNC_19(VAR_6->fs, &VAR_7->txn_id, VAR_6->lockcookie,
                           VAR_6->scratch_pool));
  FUNC_16(VAR_6->scratch_pool);

  return VAR_3;
}
