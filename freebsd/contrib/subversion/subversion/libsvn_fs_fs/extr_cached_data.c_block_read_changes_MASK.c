
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_17__ {TYPE_6__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_16__ {int revision; } ;
struct TYPE_18__ {int size; TYPE_1__ item; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
struct TYPE_19__ {scalar_t__ count; int eol; int ** changes; scalar_t__ start_offset; int end_offset; } ;
typedef TYPE_4__ svn_fs_fs__changes_list_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_20__ {scalar_t__ second; int revision; } ;
typedef TYPE_5__ pair_cache_key_t ;
struct TYPE_21__ {scalar_t__ changes_cache; } ;
typedef TYPE_6__ fs_fs_data_t ;
typedef int change_t ;
typedef int apr_pool_t ;
struct TYPE_22__ {scalar_t__ nelts; scalar_t__ elts; } ;
typedef TYPE_7__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,TYPE_2__*,int *,TYPE_3__*,int *) ;
 int FUNC_2 (scalar_t__*,scalar_t__,TYPE_5__*,int *) ;
 int FUNC_3 (scalar_t__,TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_7__**,int *,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_3,
                   svn_fs_fs__revision_file_t *VAR_4,
                   svn_fs_fs__p2l_entry_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_3->fsap_data;
  svn_stream_t *VAR_8;
  apr_array_header_t *VAR_9;

  pair_cache_key_t VAR_10;
  VAR_10.revision = VAR_5->item.revision;
  VAR_10.second = 0;

  if (!VAR_7->changes_cache)
    return VAR_1;


  if (VAR_7->changes_cache)
    {
      svn_boolean_t VAR_11;
      FUNC_0(FUNC_2(&VAR_11, VAR_7->changes_cache, &VAR_10,
                                 VAR_6));
      if (VAR_11)
        return VAR_1;
    }

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_5, VAR_6));







  FUNC_0(FUNC_4(&VAR_9, VAR_8,
                                  VAR_0 + 1,
                                  VAR_6, VAR_6));



  if (VAR_9->nelts <= VAR_0)
    {
      svn_fs_fs__changes_list_t VAR_12;


      VAR_12.end_offset = VAR_5->size;
      VAR_12.start_offset = 0;
      VAR_12.count = VAR_9->nelts;
      VAR_12.changes = (change_t **)VAR_9->elts;
      VAR_12.eol = VAR_2;

      FUNC_0(FUNC_3(VAR_7->changes_cache, &VAR_10, &VAR_12,
                             VAR_6));
    }

  return VAR_1;
}
