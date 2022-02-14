
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int owner; TYPE_1__* fs; int svn_fs_open_; int fs_path; } ;
typedef TYPE_2__ svn_fs_x__id_context_t ;
struct TYPE_7__ {int svn_fs_open_; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
typedef int apr_status_t ;
struct TYPE_5__ {int path; TYPE_3__* fsap_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_2)
{
  svn_fs_x__id_context_t *VAR_3 = VAR_2;
  svn_fs_x__data_t *VAR_4 = VAR_3->fs->fsap_data;


  VAR_3->fs_path = FUNC_1(VAR_3->owner, VAR_3->fs->path);
  VAR_3->svn_fs_open_ = VAR_4->svn_fs_open_;
  VAR_3->fs = ((void*)0);




  FUNC_0(VAR_3->owner, VAR_3, VAR_1);

  return VAR_0;
}
