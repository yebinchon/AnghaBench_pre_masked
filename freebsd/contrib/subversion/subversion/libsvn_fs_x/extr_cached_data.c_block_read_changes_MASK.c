
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_20__ {scalar_t__ second; int revision; } ;
typedef TYPE_2__ svn_fs_x__pair_cache_key_t ;
struct TYPE_21__ {int item_count; scalar_t__ offset; scalar_t__ size; TYPE_1__* items; } ;
typedef TYPE_3__ svn_fs_x__p2l_entry_t ;
struct TYPE_22__ {int changes_cache; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_23__ {scalar_t__ end_offset; scalar_t__ count; int eol; int ** changes; scalar_t__ start_offset; } ;
typedef TYPE_5__ svn_fs_x__changes_list_t ;
struct TYPE_24__ {scalar_t__ next; scalar_t__ next_offset; int eol; } ;
typedef TYPE_6__ svn_fs_x__changes_context_t ;
typedef int svn_fs_x__change_t ;
struct TYPE_25__ {TYPE_4__* fsap_data; } ;
typedef TYPE_7__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_26__ {scalar_t__ nelts; scalar_t__ elts; } ;
typedef TYPE_8__ apr_array_header_t ;
struct TYPE_19__ {int change_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int **,TYPE_7__*,int *,TYPE_3__*,int *) ;
 int FUNC_3 (scalar_t__*,int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,TYPE_2__*,TYPE_5__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_8__**,int *,scalar_t__,int *,int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 int FUNC_9 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_array_header_t **VAR_3,
                   svn_fs_t *VAR_4,
                   svn_fs_x__revision_file_t *VAR_5,
                   svn_fs_x__p2l_entry_t* VAR_6,
                   svn_fs_x__changes_context_t *VAR_7,
                   svn_boolean_t VAR_8,
                   apr_pool_t *VAR_9,
                   apr_pool_t *VAR_10)
{
  svn_fs_x__data_t *VAR_11 = VAR_4->fsap_data;
  svn_stream_t *VAR_12;
  svn_fs_x__pair_cache_key_t VAR_13;
  svn_fs_x__changes_list_t VAR_14;




  apr_size_t VAR_15 = VAR_8 ? VAR_7->next : 0;
  apr_size_t VAR_16 = VAR_8 ? VAR_7->next_offset : 0;


  FUNC_1(VAR_6->item_count == 1);


  VAR_13.revision = FUNC_5(VAR_6->items[0].change_set);
  VAR_13.second = VAR_15;


  if (!VAR_8)
    {
      svn_boolean_t VAR_17 = VAR_0;
      FUNC_0(FUNC_3(&VAR_17, VAR_11->changes_cache, &VAR_13,
                                 VAR_10));
      if (VAR_17)
        return VAR_2;
    }


  if (!VAR_8 || VAR_15 == 0)
    FUNC_0(FUNC_2(&VAR_12, VAR_4, VAR_5, VAR_6, VAR_10));


  FUNC_0(FUNC_8(VAR_5, ((void*)0),
                                  VAR_6->offset + VAR_16));
  FUNC_0(FUNC_9(&VAR_12, VAR_5));


  FUNC_0(FUNC_6(VAR_3, VAR_12, VAR_1,
                                 VAR_9, VAR_10));

  FUNC_0(FUNC_7(&VAR_14.end_offset, VAR_5));
  VAR_14.end_offset -= VAR_6->offset;
  VAR_14.start_offset = VAR_16;
  VAR_14.count = (*VAR_3)->nelts;
  VAR_14.changes = (svn_fs_x__change_t **)(*VAR_3)->elts;
  VAR_14.eol = (VAR_14.count < VAR_1)
                     || (VAR_14.end_offset + 1 >= VAR_6->size);



  FUNC_0(FUNC_4(VAR_11->changes_cache, &VAR_13, &VAR_14,
                         VAR_10));



  if (VAR_8)
    {
      VAR_7->next_offset = VAR_14.end_offset;
      VAR_7->eol = VAR_14.eol;
    }

  return VAR_2;
}
