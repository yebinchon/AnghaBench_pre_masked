
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_1__ svn_fs_x__page_cache_key_t ;
struct TYPE_14__ {scalar_t__ item_count; scalar_t__ items; } ;
typedef TYPE_2__ svn_fs_x__p2l_entry_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_15__ {int p2l_page_cache; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
struct TYPE_16__ {TYPE_3__* fsap_data; } ;
typedef TYPE_4__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int p2l_page_info_baton_t ;
struct TYPE_17__ {scalar_t__ sub_item; int offset; } ;
typedef TYPE_5__ p2l_item_lookup_baton_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,TYPE_1__*,int *,TYPE_4__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__**,int *,TYPE_4__*,int ,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (void**,int *,int ,TYPE_1__*,int ,TYPE_5__*,int *) ;

svn_error_t *
FUNC_5(svn_fs_x__id_t **VAR_3,
                          svn_fs_t *VAR_4,
                          svn_fs_x__revision_file_t *VAR_5,
                          svn_revnum_t VAR_6,
                          apr_off_t VAR_7,
                          apr_uint32_t VAR_8,
                          apr_pool_t *VAR_9,
                          apr_pool_t *VAR_10)
{
  svn_fs_x__data_t *VAR_11 = VAR_4->fsap_data;
  svn_fs_x__page_cache_key_t VAR_12 = { 0 };
  svn_boolean_t VAR_13 = VAR_0;
  p2l_page_info_baton_t VAR_14;
  p2l_item_lookup_baton_t VAR_15;

  *VAR_3 = ((void*)0);


  FUNC_0(FUNC_2(&VAR_14, &VAR_12, VAR_5, VAR_4, VAR_6, VAR_7,
                       VAR_10));
  VAR_15.offset = VAR_7;
  VAR_15.sub_item = VAR_8;
  FUNC_0(FUNC_4((void**)VAR_3, &VAR_13,
                                 VAR_11->p2l_page_cache, &VAR_12,
                                 VAR_2, &VAR_15, VAR_9));
  if (!VAR_13)
    {


      svn_fs_x__p2l_entry_t *VAR_16;
      FUNC_0(FUNC_3(&VAR_16, VAR_5, VAR_4, VAR_6, VAR_7,
                               VAR_9, VAR_10));


      if (VAR_16 && VAR_16->item_count > VAR_8)
        *VAR_3 = FUNC_1(VAR_9, VAR_16->items + VAR_8,
                            sizeof(**VAR_3));
    }

  return VAR_1;
}
