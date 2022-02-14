
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {int type; int base_length; int base_item_index; int base_revision; int member_0; } ;
typedef TYPE_1__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
struct rep_write_baton {int scratch_pool; int delta_stream; int rep_stream; int delta_start; int rep_offset; int fnv1a_checksum_ctx; int * file; int lockcookie; TYPE_3__* noderev; scalar_t__ rep_size; int * result_pool; int * fs; void* md5_checksum_ctx; void* sha1_checksum_ctx; } ;
struct TYPE_10__ {int size; int item_index; int revision; } ;
typedef TYPE_2__ representation_t ;
struct TYPE_11__ {int id; } ;
typedef TYPE_3__ node_revision_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct rep_write_baton* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct rep_write_baton*,int ,int ) ;
 int FUNC_3 (TYPE_2__**,int *,TYPE_3__*,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int **,int *,int *,int ,int ) ;
 int VAR_4 ;
 void* FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int **,int *,TYPE_2__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int ,void*,int *,int ) ;
 int FUNC_15 (int *,void**,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(struct rep_write_baton **VAR_9,
                    svn_fs_t *VAR_10,
                    node_revision_t *VAR_11,
                    apr_pool_t *VAR_12)
{
  struct rep_write_baton *VAR_13;
  apr_file_t *VAR_14;
  representation_t *VAR_15;
  svn_stream_t *VAR_16;
  svn_txdelta_window_handler_t VAR_17;
  void *VAR_18;
  svn_fs_fs__rep_header_t VAR_19 = { 0 };

  VAR_13 = FUNC_1(VAR_12, sizeof(*VAR_13));

  VAR_13->sha1_checksum_ctx = FUNC_6(VAR_6, VAR_12);
  VAR_13->md5_checksum_ctx = FUNC_6(VAR_5, VAR_12);

  VAR_13->fs = VAR_10;
  VAR_13->result_pool = VAR_12;
  VAR_13->scratch_pool = FUNC_12(VAR_12);
  VAR_13->rep_size = 0;
  VAR_13->noderev = VAR_11;


  FUNC_0(FUNC_5(&VAR_14, &VAR_13->lockcookie,
                                 VAR_10, FUNC_8(VAR_11->id),
                                 VAR_13->scratch_pool));

  VAR_13->file = VAR_14;
  VAR_13->rep_stream = FUNC_13(VAR_14, VAR_2, VAR_13->scratch_pool);
  if (FUNC_9(VAR_10))
    VAR_13->rep_stream = FUNC_4(&VAR_13->fnv1a_checksum_ctx, VAR_13->rep_stream,
                                      VAR_13->scratch_pool);

  FUNC_0(FUNC_11(&VAR_13->rep_offset, VAR_14, VAR_13->scratch_pool));


  FUNC_0(FUNC_3(&VAR_15, VAR_10, VAR_11, VAR_0, VAR_13->scratch_pool));
  FUNC_0(FUNC_7(&VAR_16, VAR_10, VAR_15, VAR_2,
                                  VAR_13->scratch_pool));


  if (VAR_15)
    {
      VAR_19.base_revision = VAR_15->revision;
      VAR_19.base_item_index = VAR_15->item_index;
      VAR_19.base_length = VAR_15->size;
      VAR_19.type = VAR_7;
    }
  else
    {
      VAR_19.type = VAR_8;
    }
  FUNC_0(FUNC_10(&VAR_19, VAR_13->rep_stream,
                                      VAR_13->scratch_pool));


  FUNC_0(FUNC_11(&VAR_13->delta_start, VAR_14,
                                 VAR_13->scratch_pool));


  FUNC_2(VAR_13->scratch_pool, VAR_13, VAR_4,
                            VAR_3);


  FUNC_15(&VAR_17, &VAR_18, VAR_13->rep_stream, VAR_10, VAR_12);

  VAR_13->delta_stream = FUNC_14(VAR_17, VAR_18, VAR_16,
                                            VAR_13->scratch_pool);

  *VAR_9 = VAR_13;

  return VAR_1;
}
