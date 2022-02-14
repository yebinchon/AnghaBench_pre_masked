
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_6__ {int len; void* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int created_path; int const* fresh_root_predecessor_id; int id; int node_pool; scalar_t__ node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int const**) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_2__*,int,scalar_t__,int *) ;
 int FUNC_6 (int *,void const* const*) ;

svn_error_t *
FUNC_7(void **VAR_2,
                         apr_size_t *VAR_3,
                         void *VAR_4,
                         apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6 = VAR_4;
  svn_stringbuf_t *VAR_7;


  svn_temp_serializer__context_t *VAR_8 =
      FUNC_5(VAR_6,
                                sizeof(*VAR_6),
                                1024 - VAR_1,
                                VAR_5);


  if (VAR_6->node_revision && !FUNC_0(VAR_6))
    FUNC_2(VAR_8, &VAR_6->node_revision);
  else
    FUNC_6(VAR_8,
                                  (const void * const *)&VAR_6->node_revision);


  FUNC_6(VAR_8,
                                (const void * const *)&VAR_6->node_pool);


  FUNC_1(VAR_8, (const svn_fs_id_t **)&VAR_6->id);
  FUNC_1(VAR_8, &VAR_6->fresh_root_predecessor_id);
  FUNC_3(VAR_8, &VAR_6->created_path);


  VAR_7 = FUNC_4(VAR_8);
  *VAR_2 = VAR_7->data;
  *VAR_3 = VAR_7->len;

  return VAR_0;
}
