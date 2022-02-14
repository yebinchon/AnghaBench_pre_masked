
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
struct TYPE_4__ {TYPE_2__* node_revision; } ;
typedef TYPE_1__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ kind; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*) ;
 int * FUNC_1 (int **,TYPE_2__*,int ,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_2(svn_checksum_t **VAR_2,
                            dag_node_t *VAR_3,
                            svn_checksum_kind_t VAR_4,
                            apr_pool_t *VAR_5)
{
  if (VAR_3->node_revision->kind != VAR_1)
    return FUNC_0
      (VAR_0, ((void*)0),
       "Attempted to get checksum of a *non*-file node");

  return FUNC_1(VAR_2, VAR_3->node_revision, VAR_4,
                                 VAR_5);
}
