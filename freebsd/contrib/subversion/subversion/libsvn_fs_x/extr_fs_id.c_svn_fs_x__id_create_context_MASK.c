
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * owner; TYPE_2__* fs; } ;
typedef TYPE_1__ svn_fs_x__id_context_t ;
struct TYPE_8__ {int * pool; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

svn_fs_x__id_context_t *
FUNC_2(svn_fs_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  svn_fs_x__id_context_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->fs = VAR_3;
  VAR_5->owner = VAR_4;




  if (VAR_4 != VAR_3->pool)
    {


      FUNC_1(VAR_4,
                                VAR_5,
                                VAR_2,
                                VAR_0);




      FUNC_1(VAR_3->pool,
                                VAR_5,
                                VAR_1,
                                VAR_0);
    }

  return VAR_5;
}
