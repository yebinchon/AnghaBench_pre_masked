
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start; } ;
struct TYPE_6__ {TYPE_1__ l2p_info; } ;
typedef TYPE_2__ svn_fs_x__revision_file_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

svn_error_t *
FUNC_2(svn_filesize_t *VAR_1,
                             svn_fs_x__revision_file_t *VAR_2)
{
  FUNC_0(FUNC_1(VAR_2));
  *VAR_1 = VAR_2->l2p_info.start;

  return VAR_0;
}
