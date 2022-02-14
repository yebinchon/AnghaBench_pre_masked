
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fs; } ;
typedef TYPE_2__ svn_fs_x__id_context_t ;
typedef int apr_status_t ;
struct TYPE_4__ {int pool; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t
FUNC_1(void *VAR_2)
{
  svn_fs_x__id_context_t *VAR_3 = VAR_2;



  FUNC_0(VAR_3->fs->pool, VAR_3, VAR_1);

  return VAR_0;
}
