
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int pool; int inner; int fs_path; int root; } ;
typedef TYPE_1__ presentation_stream_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(presentation_stream_baton_t *VAR_1)
{
  if (!VAR_1->inner)
    {
      svn_filesize_t VAR_2;
      svn_stream_t *VAR_3;
      svn_stringbuf_t *VAR_4;

      FUNC_0(FUNC_2(&VAR_2, VAR_1->root, VAR_1->fs_path, VAR_1->pool));
      FUNC_0(FUNC_1(&VAR_3, VAR_1->root, VAR_1->fs_path, VAR_1->pool));
      FUNC_0(FUNC_4(&VAR_4, VAR_3,
                                        (apr_size_t)VAR_2, VAR_1->pool));
      VAR_1->inner = FUNC_3(VAR_4, VAR_1->pool);
    }

  return VAR_0;
}
