
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_5__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_11__ {int is_packed; int start_revision; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_12__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_13__ {int * pages; int revision; } ;
typedef TYPE_4__ l2p_page_table_baton_t ;
struct TYPE_14__ {int l2p_header_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (void**,int *,int ,TYPE_3__*,int ,TYPE_4__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_array_header_t *VAR_3,
                   svn_fs_t *VAR_4,
                   svn_fs_fs__revision_file_t *VAR_5,
                   svn_revnum_t VAR_6,
                   apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_4->fsap_data;
  svn_boolean_t VAR_9 = VAR_0;
  l2p_page_table_baton_t VAR_10;

  pair_cache_key_t VAR_11;
  VAR_11.revision = VAR_5->start_revision;
  VAR_11.second = VAR_5->is_packed;

  FUNC_1(VAR_3);
  VAR_10.revision = VAR_6;
  VAR_10.pages = VAR_3;
  FUNC_0(FUNC_2((void**)&VAR_3, &VAR_9,
                                 VAR_8->l2p_header_cache, &VAR_11,
                                 VAR_2, &VAR_10,
                                 VAR_7));

  return VAR_1;
}
