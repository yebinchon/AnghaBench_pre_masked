
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_18__ {int p2l_stream; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
struct TYPE_19__ {int page; int is_packed; scalar_t__ revision; int member_0; } ;
typedef TYPE_3__ svn_fs_fs__page_cache_key_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_20__ {int page_size; int page_start; int next_offset; int start_offset; scalar_t__ first_revision; int page_no; scalar_t__ revision; } ;
typedef TYPE_4__ p2l_page_info_baton_t ;
struct TYPE_21__ {int p2l_page_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,TYPE_2__*,TYPE_1__*,scalar_t__,int ,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_4 (scalar_t__*,int ,TYPE_3__*,int *) ;
 int FUNC_5 (int ,TYPE_3__*,int *,int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_boolean_t *VAR_4,
                  int *VAR_5,
                  svn_fs_t *VAR_6,
                  svn_fs_fs__revision_file_t *VAR_7,
                  p2l_page_info_baton_t *VAR_8,
                  apr_off_t VAR_9,
                  apr_pool_t *VAR_10)
{
  fs_fs_data_t *VAR_11 = VAR_6->fsap_data;
  svn_boolean_t VAR_12;
  apr_array_header_t *VAR_13;
  svn_fs_fs__page_cache_key_t VAR_14 = { 0 };


  *VAR_4 = VAR_1;
  VAR_8->revision = VAR_8->first_revision;
  FUNC_0(FUNC_3(VAR_8, VAR_7, VAR_6, VAR_10));
  if (VAR_8->start_offset < VAR_9 || !VAR_7->p2l_stream)
    {

      *VAR_4 = VAR_3;
      return VAR_2;
    }


  FUNC_1(VAR_8->first_revision <= VAR_0);
  VAR_14.revision = (apr_uint32_t)VAR_8->first_revision;
  VAR_14.is_packed = FUNC_6(VAR_6, VAR_8->first_revision);
  VAR_14.page = VAR_8->page_no;
  FUNC_0(FUNC_4(&VAR_12, VAR_11->p2l_page_cache,
                             &VAR_14, VAR_10));


  if (VAR_12)
    {

      if (!--*VAR_5)
        *VAR_4 = VAR_3;

      return VAR_2;
    }

  ++*VAR_5;


  FUNC_0(FUNC_2(&VAR_13, VAR_7, VAR_6,
                       VAR_8->first_revision,
                       VAR_8->start_offset,
                       VAR_8->next_offset,
                       VAR_8->page_start,
                       VAR_8->page_size,
                       VAR_10));


  FUNC_0(FUNC_5(VAR_11->p2l_page_cache, &VAR_14, VAR_13, VAR_10));

  return VAR_2;
}
