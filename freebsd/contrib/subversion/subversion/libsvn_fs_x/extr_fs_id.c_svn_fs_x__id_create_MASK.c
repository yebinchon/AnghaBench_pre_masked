
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_fs_x__id_t ;
struct TYPE_9__ {int * owner; } ;
typedef TYPE_2__ svn_fs_x__id_context_t ;
typedef int svn_fs_id_t ;
struct TYPE_8__ {TYPE_2__* fsap_data; int * vtable; } ;
struct TYPE_10__ {TYPE_1__ generic_id; int noderev_id; } ;
typedef TYPE_3__ fs_x__id_t ;
typedef int apr_pool_t ;


 TYPE_3__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int const*) ;

svn_fs_id_t *
FUNC_4(svn_fs_x__id_context_t *VAR_1,
                    const svn_fs_x__id_t *VAR_2,
                    apr_pool_t *VAR_3)
{
  fs_x__id_t *VAR_4;


  if (!FUNC_3(VAR_2))
    return ((void*)0);



  if (VAR_1->owner != VAR_3)
    VAR_1 = FUNC_2(FUNC_1(VAR_1), VAR_3);


  VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->noderev_id = *VAR_2;

  VAR_4->generic_id.vtable = &VAR_0;
  VAR_4->generic_id.fsap_data = VAR_1;

  return (svn_fs_id_t *)VAR_4;
}
