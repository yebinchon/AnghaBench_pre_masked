
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_21__ {int page; int is_packed; scalar_t__ revision; int member_0; } ;
typedef TYPE_1__ svn_fs_x__page_cache_key_t ;
struct TYPE_23__ {int l2p_page_cache; scalar_t__ block_size; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_24__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int l2p_page_table_entry_t ;
struct TYPE_25__ {int sub_items; int offsets; } ;
typedef TYPE_4__ l2p_page_t ;
struct TYPE_22__ {scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_26__ {int page_no; scalar_t__ first_revision; TYPE_20__ entry; int page_offset; void* item_index; scalar_t__ revision; } ;
typedef TYPE_5__ l2p_page_info_baton_t ;
struct TYPE_27__ {scalar_t__ sub_item; scalar_t__ offset; int page_offset; void* item_index; scalar_t__ revision; } ;
typedef TYPE_6__ l2p_page_baton_t ;
typedef void* apr_uint64_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_array_header_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__**,int *,TYPE_20__*,int *) ;
 int FUNC_5 (TYPE_5__*,int *,TYPE_3__*,int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*,int ,int ,int *) ;
 int FUNC_7 (scalar_t__*,TYPE_3__*,int *,scalar_t__,int *,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (void**,scalar_t__*,int ,TYPE_1__*,int ,TYPE_6__*,int *) ;
 int FUNC_9 (int ,TYPE_1__*,TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(apr_off_t *VAR_4,
                 apr_uint32_t *VAR_5,
                 svn_fs_t *VAR_6,
                 svn_fs_x__revision_file_t *VAR_7,
                 svn_revnum_t VAR_8,
                 apr_uint64_t VAR_9,
                 apr_pool_t *VAR_10)
{
  svn_fs_x__data_t *VAR_11 = VAR_6->fsap_data;
  l2p_page_info_baton_t VAR_12;
  l2p_page_baton_t VAR_13;
  l2p_page_t *VAR_14 = ((void*)0);
  svn_fs_x__page_cache_key_t VAR_15 = { 0 };
  svn_boolean_t VAR_16 = VAR_1;
  void *VAR_17 = ((void*)0);



  VAR_12.revision = VAR_8;
  VAR_12.item_index = VAR_9;
  FUNC_1(FUNC_5(&VAR_12, VAR_7, VAR_6, VAR_10));


  VAR_13.revision = VAR_8;
  VAR_13.item_index = VAR_9;
  VAR_13.page_offset = VAR_12.page_offset;

  FUNC_3(VAR_8 <= VAR_0);
  VAR_15.revision = (apr_uint32_t)VAR_8;
  VAR_15.is_packed = FUNC_10(VAR_6, VAR_8);
  VAR_15.page = VAR_12.page_no;

  FUNC_1(FUNC_8(&VAR_17, &VAR_16,
                                 VAR_11->l2p_page_cache, &VAR_15,
                                 VAR_3, &VAR_13,
                                 VAR_10));

  if (!VAR_16)
    {


      apr_array_header_t *VAR_18;
      svn_revnum_t VAR_19;
      svn_revnum_t VAR_20
        = VAR_12.first_revision
          + FUNC_11(VAR_6, VAR_12.first_revision);
      apr_pool_t *VAR_21 = FUNC_13(VAR_10);
      svn_boolean_t VAR_22;
      apr_off_t VAR_23
        = FUNC_0(VAR_12.entry.offset + VAR_12.entry.size,
                    VAR_11->block_size);
      apr_off_t VAR_24 = VAR_23 - VAR_11->block_size;


      FUNC_1(FUNC_4(&VAR_14, VAR_7, &VAR_12.entry, VAR_10));


      FUNC_1(FUNC_9(VAR_11->l2p_page_cache, &VAR_15, VAR_14, VAR_10));
      FUNC_1(FUNC_6(&VAR_13, VAR_14, VAR_14->offsets,
                                  VAR_14->sub_items, VAR_10));


      VAR_18 = FUNC_2(VAR_10, 16,
                             sizeof(l2p_page_table_entry_t));
      VAR_22 = VAR_1;
      for (VAR_19 = VAR_8;
           VAR_19 < VAR_20 && !VAR_22;
           ++VAR_19)
        {
          int VAR_25 = VAR_19 == VAR_8
                               ? VAR_12.page_no
                               : -1;
          FUNC_12(VAR_21);

          FUNC_1(FUNC_7(&VAR_22, VAR_6, VAR_7,
                                     VAR_19, VAR_18,
                                     VAR_25, VAR_24,
                                     VAR_23, VAR_21));
        }

      VAR_22 = VAR_1;
      for (VAR_19 = VAR_8-1;
           VAR_19 >= VAR_12.first_revision && !VAR_22;
           --VAR_19)
        {
          FUNC_12(VAR_21);

          FUNC_1(FUNC_7(&VAR_22, VAR_6, VAR_7,
                                     VAR_19, VAR_18, -1,
                                     VAR_24, VAR_23, VAR_21));
        }

      FUNC_14(VAR_21);
    }

  *VAR_4 = VAR_13.offset;
  *VAR_5 = VAR_13.sub_item;

  return VAR_2;
}
