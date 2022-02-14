
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ l2p_info; int * p2l_stream; int * l2p_stream; int * stream; int * file; scalar_t__ pool; } ;
typedef TYPE_2__ svn_fs_x__revision_file_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

svn_error_t *
FUNC_4(svn_fs_x__revision_file_t *VAR_1)
{

  if (VAR_1->stream)
    FUNC_0(FUNC_3(VAR_1->stream));
  if (VAR_1->file)
    FUNC_0(FUNC_1(VAR_1->file, VAR_1->pool));


  if (VAR_1->pool)
    FUNC_2(VAR_1->pool);


  VAR_1->file = ((void*)0);
  VAR_1->stream = ((void*)0);
  VAR_1->l2p_stream = ((void*)0);
  VAR_1->p2l_stream = ((void*)0);


  VAR_1->l2p_info.start = -1;
  return VAR_0;
}
