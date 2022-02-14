
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p2l_stream; int * l2p_stream; int * stream; int * file; int pool; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_fs_fs__revision_file_t *VAR_1)
{
  if (VAR_1->stream)
    FUNC_0(FUNC_2(VAR_1->stream));
  if (VAR_1->file)
    FUNC_0(FUNC_1(VAR_1->file, VAR_1->pool));

  VAR_1->file = ((void*)0);
  VAR_1->stream = ((void*)0);
  VAR_1->l2p_stream = ((void*)0);
  VAR_1->p2l_stream = ((void*)0);

  return VAR_0;
}
