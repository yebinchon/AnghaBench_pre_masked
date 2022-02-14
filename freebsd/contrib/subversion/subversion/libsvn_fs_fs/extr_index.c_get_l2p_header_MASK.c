
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_11__ {int is_packed; int start_revision; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
typedef int l2p_header_t ;
struct TYPE_13__ {int l2p_header_cache; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,TYPE_2__*,TYPE_1__*,int ,int *,int *) ;
 int FUNC_2 (void**,scalar_t__*,int ,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(l2p_header_t **VAR_2,
               svn_fs_fs__revision_file_t *VAR_3,
               svn_fs_t *VAR_4,
               svn_revnum_t VAR_5,
               apr_pool_t *VAR_6,
               apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_4->fsap_data;
  svn_boolean_t VAR_9 = VAR_0;


  pair_cache_key_t VAR_10;
  VAR_10.revision = VAR_3->start_revision;
  VAR_10.second = VAR_3->is_packed;
  FUNC_0(FUNC_2((void**)VAR_2, &VAR_9, VAR_8->l2p_header_cache,
                         &VAR_10, VAR_6));
  if (VAR_9)
    return VAR_1;


  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                              VAR_7));

  return VAR_1;
}
