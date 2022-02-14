
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_16__ {int second; int revision; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_17__ {int l2p_header_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_18__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_19__ {int revision; } ;
typedef TYPE_4__ l2p_page_info_baton_t ;
struct TYPE_20__ {int page_table_index; int page_table; } ;
typedef TYPE_5__ l2p_header_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_5__**,int *,TYPE_3__*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int ,int ,int *) ;
 int FUNC_4 (void**,scalar_t__*,int ,TYPE_1__*,int ,TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(l2p_page_info_baton_t *VAR_3,
                  svn_fs_x__revision_file_t *VAR_4,
                  svn_fs_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_5->fsap_data;
  l2p_header_t *VAR_8;
  svn_boolean_t VAR_9 = VAR_0;
  void *VAR_10 = ((void*)0);


  svn_fs_x__pair_cache_key_t VAR_11;
  VAR_11.revision = FUNC_1(VAR_5, VAR_3->revision);
  VAR_11.second = FUNC_5(VAR_5, VAR_3->revision);
  FUNC_0(FUNC_4((void**)&VAR_10, &VAR_9,
                                 VAR_7->l2p_header_cache, &VAR_11,
                                 VAR_2, VAR_3,
                                 VAR_6));
  if (VAR_9)
    return VAR_1;


  FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_5, VAR_3->revision,
                              VAR_6, VAR_6));
  FUNC_0(FUNC_3(VAR_3, VAR_8, VAR_8->page_table,
                          VAR_8->page_table_index, VAR_6));

  return VAR_1;
}
