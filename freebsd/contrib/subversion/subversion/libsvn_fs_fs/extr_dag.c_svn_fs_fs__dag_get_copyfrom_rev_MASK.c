
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int copyfrom_rev; } ;
typedef TYPE_1__ node_revision_t ;
typedef int dag_node_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_1,
                                dag_node_t *VAR_2)
{
  node_revision_t *VAR_3;


  FUNC_0(FUNC_1(&VAR_3, VAR_2));

  *VAR_1 = VAR_3->copyfrom_rev;

  return VAR_0;
}
