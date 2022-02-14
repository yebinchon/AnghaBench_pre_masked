
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_x__packed_number_stream_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ offset; int entry_count; scalar_t__ size; } ;
typedef TYPE_1__ l2p_page_table_entry_t ;
struct TYPE_6__ {int entry_count; int* offsets; int* sub_items; } ;
typedef TYPE_2__ l2p_page_t ;
typedef int apr_uint64_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(l2p_page_t **VAR_2,
             svn_fs_x__revision_file_t *VAR_3,
             l2p_page_table_entry_t *VAR_4,
             apr_pool_t *VAR_5)
{
  apr_uint64_t VAR_6, VAR_7 = 0;
  apr_uint32_t VAR_8;
  l2p_page_t *VAR_9 = FUNC_2(VAR_5, sizeof(*VAR_9));
  apr_uint64_t VAR_10;
  apr_off_t *VAR_11;
  svn_fs_x__packed_number_stream_t *VAR_12;


  FUNC_0(FUNC_7(&VAR_12, VAR_3));
  FUNC_5(VAR_12, VAR_4->offset);


  VAR_9->entry_count = VAR_4->entry_count;
  VAR_9->offsets = FUNC_2(VAR_5, VAR_9->entry_count
                                           * sizeof(*VAR_9->offsets));
  VAR_9->sub_items = FUNC_2(VAR_5, VAR_9->entry_count
                                             * sizeof(*VAR_9->sub_items));



  FUNC_0(FUNC_3(&VAR_10, VAR_12));
  VAR_11 = FUNC_2(VAR_5,
                                  VAR_10 * sizeof(*VAR_9));
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8)
    {
      FUNC_0(FUNC_3(&VAR_6, VAR_12));
      VAR_7 += VAR_6;
      VAR_11[VAR_8] = (apr_off_t)VAR_7 - 1;

    }


  for (VAR_8 = 0; VAR_8 < VAR_9->entry_count; ++VAR_8)
    {
      FUNC_0(FUNC_3(&VAR_6, VAR_12));
      if (VAR_6 == 0)
        {
          VAR_9->offsets[VAR_8] = -1;
          VAR_9->sub_items[VAR_8] = 0;
        }
      else if (VAR_6 <= VAR_10)
        {
          VAR_9->offsets[VAR_8] = VAR_11[VAR_6 - 1];
          FUNC_0(FUNC_3(&VAR_6, VAR_12));
          VAR_9->sub_items[VAR_8] = (apr_uint32_t)VAR_6;
        }
      else
        {
          VAR_9->offsets[VAR_8] = (apr_off_t)(VAR_6 - 1 - VAR_10);
          VAR_9->sub_items[VAR_8] = 0;
        }
    }



  if ( FUNC_4(VAR_12)
      != VAR_4->offset + VAR_4->size)
    return FUNC_6(VAR_0, ((void*)0),
                FUNC_1("L2P actual page size does not match page table value."));

  *VAR_2 = VAR_9;

  return VAR_1;
}
