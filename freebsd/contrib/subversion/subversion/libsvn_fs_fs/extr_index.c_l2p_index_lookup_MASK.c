
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
struct TYPE_21__ {TYPE_6__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_23__ {int page; scalar_t__ is_packed; scalar_t__ revision; int member_0; } ;
typedef TYPE_2__ svn_fs_fs__page_cache_key_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int l2p_page_table_entry_t ;
struct TYPE_24__ {int offsets; } ;
typedef TYPE_3__ l2p_page_t ;
struct TYPE_22__ {scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_25__ {int page_no; scalar_t__ first_revision; TYPE_20__ entry; int page_offset; void* item_index; scalar_t__ revision; } ;
typedef TYPE_4__ l2p_page_info_baton_t ;
struct TYPE_26__ {scalar_t__ offset; int page_offset; void* item_index; scalar_t__ revision; } ;
typedef TYPE_5__ l2p_entry_baton_t ;
struct TYPE_27__ {int max_files_per_dir; scalar_t__ use_block_read; int l2p_page_cache; scalar_t__ block_size; } ;
typedef TYPE_6__ fs_fs_data_t ;
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
 int FUNC_4 (TYPE_3__**,int *,TYPE_1__*,scalar_t__,TYPE_20__*,int *) ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int ,int *) ;
 int FUNC_7 (scalar_t__*,TYPE_1__*,int *,scalar_t__,scalar_t__,int *,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (void**,scalar_t__*,int ,TYPE_2__*,int ,TYPE_5__*,int *) ;
 int FUNC_9 (int ,TYPE_2__*,TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(apr_off_t *VAR_4,
                 svn_fs_t *VAR_5,
                 svn_fs_fs__revision_file_t *VAR_6,
                 svn_revnum_t VAR_7,
                 apr_uint64_t VAR_8,
                 apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_5->fsap_data;
  l2p_page_info_baton_t VAR_11;
  l2p_entry_baton_t VAR_12;
  l2p_page_t *VAR_13 = ((void*)0);
  svn_fs_fs__page_cache_key_t VAR_14 = { 0 };
  svn_boolean_t VAR_15 = VAR_1;
  void *VAR_16 = ((void*)0);



  VAR_11.revision = VAR_7;
  VAR_11.item_index = VAR_8;
  FUNC_1(FUNC_5(&VAR_11, VAR_6, VAR_5, VAR_9));


  VAR_12.revision = VAR_7;
  VAR_12.item_index = VAR_8;
  VAR_12.page_offset = VAR_11.page_offset;

  FUNC_3(VAR_7 <= VAR_0);
  VAR_14.revision = (apr_uint32_t)VAR_7;
  VAR_14.is_packed = FUNC_10(VAR_5, VAR_7);
  VAR_14.page = VAR_11.page_no;

  FUNC_1(FUNC_8(&VAR_16, &VAR_15,
                                 VAR_10->l2p_page_cache, &VAR_14,
                                 VAR_3, &VAR_12,
                                 VAR_9));

  if (!VAR_15)
    {


      apr_array_header_t *VAR_17;
      svn_revnum_t VAR_18;
      svn_revnum_t VAR_19
        = VAR_11.first_revision
          + (VAR_14.is_packed ? VAR_10->max_files_per_dir : 1);
      svn_boolean_t VAR_20;
      apr_off_t VAR_21
        = FUNC_0(VAR_11.entry.offset + VAR_11.entry.size,
                    VAR_10->block_size);
      apr_off_t VAR_22 = VAR_21 - VAR_10->block_size;


      FUNC_1(FUNC_4(&VAR_13, VAR_6, VAR_5, VAR_11.first_revision,
                           &VAR_11.entry, VAR_9));


      FUNC_1(FUNC_9(VAR_10->l2p_page_cache, &VAR_14, VAR_13, VAR_9));
      FUNC_1(FUNC_6(&VAR_12, VAR_13, VAR_13->offsets,
                                 VAR_9));

      if (VAR_10->use_block_read)
        {
          apr_pool_t *VAR_23 = FUNC_12(VAR_9);


          VAR_17 = FUNC_2(VAR_9, 16,
                                 sizeof(l2p_page_table_entry_t));
          VAR_20 = VAR_1;
          for (VAR_18 = VAR_7;
              VAR_18 < VAR_19 && !VAR_20;
              ++VAR_18)
            {
              int VAR_24 = VAR_18 == VAR_7
                                  ? VAR_11.page_no
                                  : -1;
              FUNC_11(VAR_23);

              FUNC_1(FUNC_7(&VAR_20, VAR_5, VAR_6,
                                        VAR_11.first_revision,
                                        VAR_18, VAR_17,
                                        VAR_24, VAR_22,
                                        VAR_21, VAR_23));
            }

          VAR_20 = VAR_1;
          for (VAR_18 = VAR_7-1;
              VAR_18 >= VAR_11.first_revision && !VAR_20;
              --VAR_18)
            {
              FUNC_11(VAR_23);

              FUNC_1(FUNC_7(&VAR_20, VAR_5, VAR_6,
                                        VAR_11.first_revision,
                                        VAR_18, VAR_17, -1,
                                        VAR_22, VAR_21, VAR_23));
            }

          FUNC_13(VAR_23);
        }
    }

  *VAR_4 = VAR_12.offset;

  return VAR_2;
}
