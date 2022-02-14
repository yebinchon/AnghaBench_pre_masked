
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_9__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_2__ svn_fs_fs__page_cache_key_t ;
typedef int svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int p2l_page_info_baton_t ;
struct TYPE_11__ {int p2l_page_cache; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*,int *,TYPE_1__*,int ,scalar_t__,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,TYPE_1__*,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (void**,int *,int ,TYPE_2__*,int ,scalar_t__*,int *) ;
 int * FUNC_5 (int *,scalar_t__*,int *,int (*) (void const*,void const*)) ;

svn_error_t *
FUNC_6(svn_fs_fs__p2l_entry_t **VAR_4,
                            svn_fs_t *VAR_5,
                            svn_fs_fs__revision_file_t *VAR_6,
                            svn_revnum_t VAR_7,
                            apr_off_t VAR_8,
                            apr_pool_t *VAR_9,
                            apr_pool_t *VAR_10)
{
  fs_fs_data_t *VAR_11 = VAR_5->fsap_data;
  svn_fs_fs__page_cache_key_t VAR_12 = { 0 };
  svn_boolean_t VAR_13 = VAR_0;
  p2l_page_info_baton_t VAR_14;

  *VAR_4 = ((void*)0);


  FUNC_0(FUNC_2(&VAR_14, &VAR_12, VAR_6, VAR_5, VAR_7, VAR_8,
                       VAR_10));
  FUNC_0(FUNC_4((void**)VAR_4, &VAR_13,
                                 VAR_11->p2l_page_cache, &VAR_12,
                                 VAR_3, &VAR_8,
                                 VAR_9));
  if (!VAR_13)
    {


      apr_array_header_t *VAR_15 = FUNC_1(VAR_9, 1,
                                                   sizeof(**VAR_4));
      FUNC_0(FUNC_3(VAR_15, VAR_6, VAR_5, VAR_7, VAR_8,
                               VAR_8 + 1, VAR_10));


      *VAR_4 = FUNC_5(VAR_15, &VAR_8, ((void*)0),
          (int (*)(const void *, const void *))VAR_2);
    }

  return VAR_1;
}
