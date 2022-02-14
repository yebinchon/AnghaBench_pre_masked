
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {int second; int revision; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_11__ {int l2p_header_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_12__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {int * pages; int revision; } ;
typedef TYPE_4__ l2p_page_table_baton_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (void**,int *,int ,TYPE_1__*,int ,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_array_header_t *VAR_3,
                   svn_fs_t *VAR_4,
                   svn_revnum_t VAR_5,
                   apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_4->fsap_data;
  svn_boolean_t VAR_8 = VAR_0;
  l2p_page_table_baton_t VAR_9;

  svn_fs_x__pair_cache_key_t VAR_10;
  VAR_10.revision = FUNC_2(VAR_4, VAR_5);
  VAR_10.second = FUNC_4(VAR_4, VAR_5);

  FUNC_1(VAR_3);
  VAR_9.revision = VAR_5;
  VAR_9.pages = VAR_3;
  FUNC_0(FUNC_3((void**)&VAR_3, &VAR_8,
                                 VAR_7->l2p_header_cache, &VAR_10,
                                 VAR_2, &VAR_9,
                                 VAR_6));

  return VAR_1;
}
