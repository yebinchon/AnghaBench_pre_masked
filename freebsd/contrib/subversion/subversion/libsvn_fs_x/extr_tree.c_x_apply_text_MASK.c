
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * stream; int result_checksum; int * pool; int path; int * root; } ;
typedef TYPE_1__ text_baton_t ;
typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_stream_t **VAR_1,
             svn_fs_root_t *VAR_2,
             const char *VAR_3,
             svn_checksum_t *VAR_4,
             apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_5(VAR_5);
  text_baton_t *VAR_7 = FUNC_2(VAR_5, sizeof(*VAR_7));

  VAR_7->root = VAR_2;
  VAR_7->path = FUNC_4(VAR_3, VAR_5);
  VAR_7->pool = VAR_5;
  VAR_7->result_checksum = FUNC_3(VAR_4, VAR_5);

  FUNC_0(FUNC_1(VAR_7, VAR_6));

  *VAR_1 = VAR_7->stream;

  FUNC_6(VAR_6);
  return VAR_0;
}
