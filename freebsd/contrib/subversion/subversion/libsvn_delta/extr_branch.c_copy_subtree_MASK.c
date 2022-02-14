
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_element__tree_t ;
typedef int svn_branch__state_t ;
struct TYPE_6__ {int eid; TYPE_3__* branch; } ;
typedef TYPE_2__ svn_branch__el_rev_id_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int is_flat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int,int ,char const*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int **,int *) ;
 int * FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const svn_branch__el_rev_id_t *VAR_1,
             svn_branch__state_t *VAR_2,
             svn_branch__eid_t VAR_3,
             const char *VAR_4,
             apr_pool_t *VAR_5)
{
  svn_element__tree_t *VAR_6;

  FUNC_1(VAR_1->branch->priv->is_flat);

  FUNC_0(FUNC_3(VAR_1->branch, &VAR_6,
                                         VAR_5));
  VAR_6 = FUNC_4(VAR_6,
                                                     VAR_1->eid,
                                                     VAR_5);


  FUNC_0(FUNC_2(VAR_2, -1 ,
                                      VAR_3, VAR_4,
                                      VAR_6,
                                      VAR_5));

  return VAR_0;
}
