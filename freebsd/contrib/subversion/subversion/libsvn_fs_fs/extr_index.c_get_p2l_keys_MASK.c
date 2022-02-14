
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {int is_packed; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
struct TYPE_10__ {scalar_t__ page; int is_packed; scalar_t__ revision; int member_0; } ;
typedef TYPE_2__ svn_fs_fs__page_cache_key_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ page_count; scalar_t__ page_no; scalar_t__ first_revision; int revision; int offset; } ;
typedef TYPE_3__ p2l_page_info_baton_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int *,int *) ;
 int * FUNC_5 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(p2l_page_info_baton_t *VAR_3,
             svn_fs_fs__page_cache_key_t *VAR_4,
             svn_fs_fs__revision_file_t *VAR_5,
             svn_fs_t *VAR_6,
             svn_revnum_t VAR_7,
             apr_off_t VAR_8,
             apr_pool_t *VAR_9)
{
  p2l_page_info_baton_t VAR_10;



  VAR_10.offset = VAR_8;
  VAR_10.revision = VAR_7;
  FUNC_0(FUNC_4(&VAR_10, VAR_5, VAR_6, VAR_9));


  if (VAR_10.page_count <= VAR_10.page_no)
    return FUNC_5(VAR_1 , ((void*)0),
                              FUNC_1("Offset %s too large in revision %ld"),
                              FUNC_2(VAR_9, VAR_8), VAR_7);


  if (VAR_3)
    *VAR_3 = VAR_10;


  if (VAR_4)
    {
      svn_fs_fs__page_cache_key_t VAR_11 = { 0 };
      FUNC_3(VAR_10.first_revision <= VAR_0);
      VAR_11.revision = (apr_uint32_t)VAR_10.first_revision;
      VAR_11.is_packed = VAR_5->is_packed;
      VAR_11.page = VAR_10.page_no;

      *VAR_4 = VAR_11;
    }

  return VAR_2;
}
