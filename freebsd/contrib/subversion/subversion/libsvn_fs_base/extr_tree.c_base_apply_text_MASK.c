
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct text_baton_t {char const* path; int * stream; int result_checksum; int * pool; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct text_baton_t* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,struct text_baton_t*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t **VAR_3,
                svn_fs_root_t *VAR_4,
                const char *VAR_5,
                svn_checksum_t *VAR_6,
                apr_pool_t *VAR_7)
{
  struct text_baton_t *VAR_8 = FUNC_1(VAR_7, sizeof(*VAR_8));

  VAR_8->root = VAR_4;
  VAR_8->path = VAR_5;
  VAR_8->pool = VAR_7;
  VAR_8->result_checksum = FUNC_2(VAR_6, VAR_7);

  FUNC_0(FUNC_3(VAR_4->fs, VAR_2, VAR_8,
                                 VAR_0, VAR_7));

  *VAR_3 = VAR_8->stream;
  return VAR_1;
}
