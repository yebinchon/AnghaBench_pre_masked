
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ svn_client_conflict_t ;
struct TYPE_7__ {int node_kind; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

svn_node_kind_t
FUNC_3(svn_client_conflict_t *VAR_1)
{
  FUNC_0(FUNC_1(VAR_1, VAR_1->pool)
                           == VAR_0);

  return FUNC_2(VAR_1)->node_kind;
}
