
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_6__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_7__ {char const* path; int * file_stream; int * pool; TYPE_1__* root; } ;
typedef TYPE_2__ file_contents_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t **VAR_3,
                   svn_fs_root_t *VAR_4,
                   const char *VAR_5,
                   apr_pool_t *VAR_6)
{
  file_contents_baton_t *VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));
  VAR_7->root = VAR_4;
  VAR_7->path = VAR_5;
  VAR_7->pool = VAR_6;


  FUNC_0(FUNC_2(VAR_4->fs, VAR_2, VAR_7,
                                 VAR_0, VAR_6));

  *VAR_3 = VAR_7->file_stream;
  return VAR_1;
}
