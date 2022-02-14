
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_checksum_kind_t ;
struct TYPE_5__ {int data_key; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_6__ {scalar_t__ kind; int fs; int id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int **,int **,int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__**,int ,int ,int *,int *) ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_6(svn_checksum_t **VAR_6,
                               svn_checksum_kind_t VAR_7,
                               dag_node_t *VAR_8,
                               trail_t *VAR_9,
                               apr_pool_t *VAR_10)
{
  node_revision_t *VAR_11;

  if (VAR_8->kind != VAR_5)
    return FUNC_3
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to get checksum of a *non*-file node"));

  FUNC_0(FUNC_5(&VAR_11, VAR_8->fs, VAR_8->id,
                                        VAR_9, VAR_10));
  if (! VAR_11->data_key)
    {
      *VAR_6 = ((void*)0);
      return VAR_2;
    }

  if (VAR_7 == VAR_3)
    return FUNC_4(VAR_6, ((void*)0), VAR_8->fs,
                                               VAR_11->data_key,
                                               VAR_9, VAR_10);
  else if (VAR_7 == VAR_4)
    return FUNC_4(((void*)0), VAR_6, VAR_8->fs,
                                               VAR_11->data_key,
                                               VAR_9, VAR_10);
  else
    return FUNC_2(VAR_0, ((void*)0), ((void*)0));
}
