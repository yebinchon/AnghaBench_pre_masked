
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_22__ {int number; int change_set; } ;
struct TYPE_23__ {int size; TYPE_2__ id; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
struct TYPE_24__ {int type; int base_length; int base_item_index; int base_revision; int member_0; } ;
typedef TYPE_4__ svn_fs_x__rep_header_t ;
struct TYPE_21__ {int change_set; } ;
struct TYPE_25__ {TYPE_1__ noderev_id; } ;
typedef TYPE_5__ svn_fs_x__noderev_t ;
struct TYPE_26__ {int delta_compression_level; } ;
typedef TYPE_6__ svn_fs_x__data_t ;
struct TYPE_27__ {TYPE_6__* fsap_data; } ;
typedef TYPE_7__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_28__ {int * result_pool; int delta_stream; int rep_stream; int local_pool; int delta_start; int rep_offset; int fnv1a_checksum; int * file; int lockcookie; TYPE_5__* noderev; scalar_t__ rep_size; TYPE_7__* fs; void* md5_checksum_ctx; void* sha1_checksum_ctx; } ;
typedef TYPE_8__ rep_write_baton_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_8__*,int ,int ) ;
 int FUNC_3 (TYPE_3__**,TYPE_7__*,TYPE_5__*,int ,int ) ;
 int FUNC_4 (int **,int *,TYPE_7__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int ) ;
 void* FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int **,TYPE_7__*,TYPE_3__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int ,void*,int *,int *) ;
 int FUNC_16 (int *,void**,int ,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(rep_write_baton_t **VAR_9,
                    svn_fs_t *VAR_10,
                    svn_fs_x__noderev_t *VAR_11,
                    apr_pool_t *VAR_12)
{
  svn_fs_x__data_t *VAR_13 = VAR_10->fsap_data;
  rep_write_baton_t *VAR_14;
  apr_file_t *VAR_15;
  svn_fs_x__representation_t *VAR_16;
  svn_stream_t *VAR_17;
  svn_txdelta_window_handler_t VAR_18;
  void *VAR_19;
  int VAR_20 = 1;
  svn_fs_x__rep_header_t VAR_21 = { 0 };
  svn_fs_x__txn_id_t VAR_22
    = FUNC_9(VAR_11->noderev_id.change_set);

  VAR_14 = FUNC_1(VAR_12, sizeof(*VAR_14));

  VAR_14->sha1_checksum_ctx = FUNC_6(VAR_6,
                                                 VAR_12);
  VAR_14->md5_checksum_ctx = FUNC_6(VAR_5,
                                                VAR_12);

  VAR_14->fs = VAR_10;
  VAR_14->result_pool = VAR_12;
  VAR_14->local_pool = FUNC_12(VAR_12);
  VAR_14->rep_size = 0;
  VAR_14->noderev = VAR_11;


  FUNC_0(FUNC_4(&VAR_15, &VAR_14->lockcookie, VAR_10, VAR_22,
                                 VAR_14->local_pool));

  VAR_14->file = VAR_15;
  VAR_14->rep_stream = FUNC_5(
                              &VAR_14->fnv1a_checksum,
                              FUNC_14(VAR_15, VAR_2,
                                                       VAR_14->local_pool),
                              VAR_14->local_pool);

  FUNC_0(FUNC_11(&VAR_14->rep_offset, VAR_15, VAR_14->local_pool));


  FUNC_0(FUNC_3(&VAR_16, VAR_10, VAR_11, VAR_0, VAR_14->local_pool));
  FUNC_0(FUNC_7(&VAR_17, VAR_10, VAR_16, VAR_2,
                                 VAR_14->local_pool));


  if (VAR_16)
    {
      VAR_21.base_revision = FUNC_8(VAR_16->id.change_set);
      VAR_21.base_item_index = VAR_16->id.number;
      VAR_21.base_length = VAR_16->size;
      VAR_21.type = VAR_7;
    }
  else
    {
      VAR_21.type = VAR_8;
    }
  FUNC_0(FUNC_10(&VAR_21, VAR_14->rep_stream,
                                     VAR_14->local_pool));


  FUNC_0(FUNC_11(&VAR_14->delta_start, VAR_15, VAR_14->local_pool));


  FUNC_2(VAR_14->local_pool, VAR_14, VAR_4,
                            VAR_3);


  FUNC_16(&VAR_18,
                          &VAR_19,
                          FUNC_13(VAR_14->rep_stream, VAR_14->result_pool),
                          VAR_20,
                          VAR_13->delta_compression_level,
                          VAR_12);

  VAR_14->delta_stream = FUNC_15(VAR_18, VAR_19, VAR_17,
                                            VAR_14->result_pool);

  *VAR_9 = VAR_14;

  return VAR_1;
}
