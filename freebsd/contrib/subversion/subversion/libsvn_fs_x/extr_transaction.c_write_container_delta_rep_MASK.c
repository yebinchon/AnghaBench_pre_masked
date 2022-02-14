
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ size; void* sha1_ctx; void* md5_ctx; int * stream; } ;
typedef TYPE_2__ write_container_baton_t ;
typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_28__ {int number; int change_set; } ;
struct TYPE_30__ {void* size; TYPE_1__ id; scalar_t__ expanded_size; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
struct TYPE_31__ {int type; void* base_length; int base_item_index; int base_revision; int member_0; } ;
typedef TYPE_4__ svn_fs_x__rep_header_t ;
struct TYPE_32__ {void* offset; int item_count; TYPE_6__* items; scalar_t__ type; void* size; int fnv1_checksum; } ;
typedef TYPE_5__ svn_fs_x__p2l_entry_t ;
typedef int svn_fs_x__noderev_t ;
struct TYPE_33__ {int number; int change_set; } ;
typedef TYPE_6__ svn_fs_x__id_t ;
struct TYPE_34__ {int delta_compression_level; } ;
typedef TYPE_7__ svn_fs_x__data_t ;
struct TYPE_35__ {TYPE_7__* fsap_data; } ;
typedef TYPE_8__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int (* collection_writer_t ) (int *,void*,int *) ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_8__*,int ,int *) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__**,TYPE_8__*,int *,int,int *) ;
 int FUNC_4 (TYPE_3__*,void*,void*,int *) ;
 int FUNC_5 (TYPE_3__**,TYPE_8__*,int ,TYPE_3__*,int *,void*,int *,int *,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_8__*,int ,void*,int ,int *) ;
 int FUNC_8 (TYPE_8__*,int ,TYPE_5__*,int *) ;
 int * FUNC_9 (int *,int ,int *) ;
 void* FUNC_10 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int **,TYPE_8__*,TYPE_3__*,int ,int *) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (TYPE_4__*,int *,int *) ;
 int FUNC_14 (void**,int *,int *) ;
 int FUNC_15 (int *,void*,int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int ,int *) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,int ) ;
 int * FUNC_22 (int ,void*,int *,int *) ;
 int FUNC_23 (int *,void**,int ,int,int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_24(svn_fs_x__representation_t *VAR_12,
                          apr_file_t *VAR_13,
                          void *VAR_14,
                          collection_writer_t VAR_15,
                          svn_fs_t *VAR_16,
                          svn_fs_x__txn_id_t VAR_17,
                          svn_fs_x__noderev_t *VAR_18,
                          apr_hash_t *VAR_19,
                          svn_boolean_t VAR_20,
                          apr_uint32_t VAR_21,
                          svn_revnum_t VAR_22,
                          apr_pool_t *VAR_23)
{
  svn_fs_x__data_t *VAR_24 = VAR_16->fsap_data;
  svn_txdelta_window_handler_t VAR_25;
  void *VAR_26;

  svn_stream_t *VAR_27;
  svn_stream_t *VAR_28;
  svn_fs_x__representation_t *VAR_29;
  svn_fs_x__representation_t *VAR_30 = ((void*)0);
  svn_fs_x__p2l_entry_t VAR_31;
  svn_stream_t *VAR_32;
  svn_fs_x__rep_header_t VAR_33 = { 0 };

  apr_off_t VAR_34 = 0;
  apr_off_t VAR_35 = 0;
  apr_off_t VAR_36 = 0;

  write_container_baton_t *VAR_37;
  int VAR_38 = 1;
  svn_boolean_t VAR_39 = (VAR_21 == VAR_4)
                        || (VAR_21 == VAR_2);


  FUNC_0(FUNC_3(&VAR_29, VAR_16, VAR_18, VAR_39, VAR_23));
  FUNC_0(FUNC_11(&VAR_32, VAR_16, VAR_29, VAR_0, VAR_23));

  FUNC_0(FUNC_14(&VAR_36, VAR_13, VAR_23));


  if (VAR_29)
    {
      VAR_33.base_revision = FUNC_12(VAR_29->id.change_set);
      VAR_33.base_item_index = VAR_29->id.number;
      VAR_33.base_length = VAR_29->size;
      VAR_33.type = VAR_9;
    }
  else
    {
      VAR_33.type = VAR_10;
    }

  VAR_27 = FUNC_9(
                                  &VAR_31.fnv1_checksum,
                                  FUNC_19(VAR_13, VAR_6,
                                                           VAR_23),
                                  VAR_23);
  FUNC_0(FUNC_13(&VAR_33, VAR_27, VAR_23));
  FUNC_0(FUNC_14(&VAR_35, VAR_13, VAR_23));


  FUNC_23(&VAR_25,
                          &VAR_26,
                          FUNC_18(VAR_27, VAR_23),
                          VAR_38,
                          VAR_24->delta_compression_level,
                          VAR_23);

  VAR_37 = FUNC_2(VAR_23, sizeof(*VAR_37));
  VAR_37->stream = FUNC_22(VAR_25, VAR_26, VAR_32,
                                        VAR_23);
  VAR_37->size = 0;
  VAR_37->md5_ctx = FUNC_10(VAR_7, VAR_23);
  if (VAR_21 != VAR_3)
    VAR_37->sha1_ctx = FUNC_10(VAR_8, VAR_23);


  VAR_28 = FUNC_17(VAR_37, VAR_23);
  FUNC_21(VAR_28, VAR_11);

  FUNC_0(VAR_15(VAR_28, VAR_14, VAR_23));
  FUNC_0(FUNC_16(VAR_37->stream));


  FUNC_0(FUNC_4(VAR_12, VAR_37->md5_ctx, VAR_37->sha1_ctx, VAR_23));


  FUNC_0(FUNC_14(&VAR_34, VAR_13, VAR_23));
  VAR_12->size = VAR_34 - VAR_35;
  VAR_12->expanded_size = VAR_37->size;



  if (VAR_20)
    FUNC_0(FUNC_5(&VAR_30, VAR_16, VAR_17, VAR_12, VAR_13, VAR_36, VAR_19,
                           VAR_23, VAR_23));

  if (VAR_30)
    {
      FUNC_0(FUNC_16(VAR_27));


      FUNC_0(FUNC_15(VAR_13, VAR_36, VAR_23));


      FUNC_6(VAR_12, VAR_30, sizeof (*VAR_12));
    }
  else
    {
      svn_fs_x__id_t VAR_40;


      FUNC_0(FUNC_20(VAR_27, "ENDREP\n"));
      FUNC_0(FUNC_16(VAR_27));

      FUNC_0(FUNC_1(&VAR_12->id.number, VAR_16, VAR_17,
                                  VAR_23));
      FUNC_0(FUNC_7(VAR_16, VAR_17, VAR_36, VAR_12->id.number,
                                    VAR_23));

      VAR_40.change_set = VAR_1;
      VAR_40.number = VAR_12->id.number;

      VAR_31.offset = VAR_36;
      FUNC_0(FUNC_14(&VAR_36, VAR_13, VAR_23));
      VAR_31.size = VAR_36 - VAR_31.offset;
      VAR_31.type = VAR_21;
      VAR_31.item_count = 1;
      VAR_31.items = &VAR_40;

      FUNC_0(FUNC_8(VAR_16, VAR_17, &VAR_31, VAR_23));


      VAR_12->size = VAR_34 - VAR_35;
    }

  return VAR_5;
}
