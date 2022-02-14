
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * predecessor_id; scalar_t__ edit_key; scalar_t__ data_key; scalar_t__ prop_key; } ;
typedef TYPE_1__ node_revision_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int **,int *,int const*,int *,int *) ;
 int * FUNC_5 (int *,int const*,int ,int *,int *) ;
 int FUNC_6 (int *,scalar_t__,char const*,int *,int *) ;
 int FUNC_7 (TYPE_1__**,int *,int const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_1,
                             const svn_fs_id_t *VAR_2,
                             const char *VAR_3,
                             trail_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6;
  node_revision_t *VAR_7;


  FUNC_0(FUNC_4(&VAR_6, VAR_1, VAR_2, VAR_4, VAR_5));


  if (! FUNC_3(VAR_6, VAR_3))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_1("Attempted removal of immutable node"));


  FUNC_0(FUNC_7(&VAR_7, VAR_1, VAR_2, VAR_4, VAR_5));


  if (VAR_7->prop_key)
    FUNC_0(FUNC_6(VAR_1, VAR_7->prop_key,
                                               VAR_3, VAR_4, VAR_5));


  if (VAR_7->data_key)
    FUNC_0(FUNC_6(VAR_1, VAR_7->data_key,
                                               VAR_3, VAR_4, VAR_5));


  if (VAR_7->edit_key)
    FUNC_0(FUNC_6(VAR_1, VAR_7->edit_key,
                                               VAR_3, VAR_4, VAR_5));


  return FUNC_5(VAR_1, VAR_2,
                                           VAR_7->predecessor_id == ((void*)0),
                                           VAR_4, VAR_5);
}
