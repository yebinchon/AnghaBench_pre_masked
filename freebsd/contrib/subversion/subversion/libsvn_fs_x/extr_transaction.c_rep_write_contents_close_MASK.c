
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int number; int change_set; } ;
struct TYPE_17__ {TYPE_2__ id; int expanded_size; void* size; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
struct TYPE_18__ {void* offset; int item_count; int fnv1_checksum; TYPE_5__* items; int type; void* size; } ;
typedef TYPE_4__ svn_fs_x__p2l_entry_t ;
struct TYPE_19__ {int number; int change_set; } ;
typedef TYPE_5__ svn_fs_x__id_t ;
typedef int svn_error_t ;
struct TYPE_20__ {void* delta_start; void* rep_offset; int local_pool; int lockcookie; int fs; TYPE_7__* noderev; int file; int fnv1a_checksum; int rep_stream; int result_pool; int sha1_checksum_ctx; int md5_checksum_ctx; int rep_size; int delta_stream; } ;
typedef TYPE_6__ rep_write_baton_t ;
typedef void* apr_off_t ;
typedef int apr_int64_t ;
struct TYPE_15__ {int change_set; } ;
struct TYPE_21__ {TYPE_3__* data_rep; TYPE_1__ noderev_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__**,int ,int ,TYPE_3__*,int ,void*,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,void*,int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_4__*,int ) ;
 int FUNC_8 (int ,TYPE_7__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_7__*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (void**,int ,int ) ;
 int FUNC_14 (int ,void*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_19(void *VAR_4)
{
  rep_write_baton_t *VAR_5 = VAR_4;
  svn_fs_x__representation_t *VAR_6;
  svn_fs_x__representation_t *VAR_7;
  apr_off_t VAR_8;
  apr_int64_t VAR_9;

  VAR_6 = FUNC_2(VAR_5->result_pool, sizeof(*VAR_6));



  FUNC_0(FUNC_16(VAR_5->delta_stream));


  FUNC_0(FUNC_13(&VAR_8, VAR_5->file, VAR_5->local_pool));
  VAR_6->size = VAR_8 - VAR_5->delta_start;


  VAR_6->expanded_size = VAR_5->rep_size;
  VAR_9 = FUNC_10(VAR_5->noderev->noderev_id.change_set);
  VAR_6->id.change_set = FUNC_9(VAR_9);


  FUNC_0(FUNC_4(VAR_6, VAR_5->md5_checksum_ctx, VAR_5->sha1_checksum_ctx,
                        VAR_5->result_pool));



  FUNC_0(FUNC_5(&VAR_7, VAR_5->fs, VAR_9, VAR_6, VAR_5->file, VAR_5->rep_offset,
                         ((void*)0), VAR_5->result_pool, VAR_5->local_pool));

  if (VAR_7)
    {

      FUNC_0(FUNC_14(VAR_5->file, VAR_5->rep_offset, VAR_5->local_pool));


      VAR_5->noderev->data_rep = VAR_7;
    }
  else
    {

      FUNC_0(FUNC_17(VAR_5->rep_stream, "ENDREP\n"));
      FUNC_0(FUNC_1(&VAR_6->id.number, VAR_5->fs, VAR_9,
                                  VAR_5->local_pool));
      FUNC_0(FUNC_6(VAR_5->fs, VAR_9, VAR_5->rep_offset,
                                    VAR_6->id.number, VAR_5->local_pool));

      VAR_5->noderev->data_rep = VAR_6;
    }

  FUNC_0(FUNC_16(VAR_5->rep_stream));


  FUNC_3(VAR_5->local_pool, VAR_5, VAR_3);


  FUNC_0(FUNC_11(VAR_5->fs, VAR_5->noderev, VAR_5->local_pool));
  if (!VAR_7)
    {
      svn_fs_x__p2l_entry_t VAR_10;
      svn_fs_x__id_t VAR_11;
      VAR_11.change_set = VAR_0;
      VAR_11.number = VAR_6->id.number;

      VAR_10.offset = VAR_5->rep_offset;
      FUNC_0(FUNC_13(&VAR_8, VAR_5->file, VAR_5->local_pool));
      VAR_10.size = VAR_8 - VAR_5->rep_offset;
      VAR_10.type = VAR_1;
      VAR_10.item_count = 1;
      VAR_10.items = &VAR_11;
      VAR_10.fnv1_checksum = VAR_5->fnv1a_checksum;

      FUNC_0(FUNC_7(VAR_5->fs, VAR_9, &VAR_10, VAR_5->local_pool));
    }

  FUNC_0(FUNC_12(VAR_5->file, VAR_5->local_pool));



  if (!VAR_7)
    FUNC_0(FUNC_8(VAR_5->fs, VAR_5->noderev, VAR_5->local_pool));

  FUNC_0(FUNC_18(VAR_5->fs, VAR_9, VAR_5->lockcookie, VAR_5->local_pool));
  FUNC_15(VAR_5->local_pool);

  return VAR_2;
}
