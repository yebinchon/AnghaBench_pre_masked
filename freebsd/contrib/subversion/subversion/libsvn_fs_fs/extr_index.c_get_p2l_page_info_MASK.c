
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_6__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_18__ {int is_packed; int start_revision; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_19__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_20__ {int revision; } ;
typedef TYPE_4__ p2l_page_info_baton_t ;
struct TYPE_21__ {int offsets; } ;
typedef TYPE_5__ p2l_header_t ;
struct TYPE_22__ {int p2l_header_cache; } ;
typedef TYPE_6__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_5__**,TYPE_2__*,TYPE_1__*,int ,int *,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (void**,scalar_t__*,int ,TYPE_3__*,int ,TYPE_4__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(p2l_page_info_baton_t *VAR_3,
                  svn_fs_fs__revision_file_t *VAR_4,
                  svn_fs_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_5->fsap_data;
  p2l_header_t *VAR_8;
  svn_boolean_t VAR_9 = VAR_0;
  void *VAR_10 = ((void*)0);


  pair_cache_key_t VAR_11;
  VAR_11.revision = VAR_4->start_revision;
  VAR_11.second = VAR_4->is_packed;

  FUNC_0(FUNC_3(&VAR_10, &VAR_9, VAR_7->p2l_header_cache,
                                 &VAR_11, VAR_2, VAR_3,
                                 VAR_6));
  if (VAR_9)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_8, VAR_4, VAR_5, VAR_3->revision,
                         VAR_6, VAR_6));


  FUNC_2(VAR_3, VAR_8, VAR_8->offsets);

  return VAR_1;
}
