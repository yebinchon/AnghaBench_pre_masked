
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_temp_serializer__context_t ;
struct TYPE_3__ {int created_path; int copyroot_path; int copyfrom_path; int data_rep; int prop_rep; int predecessor_id; int id; } ;
typedef TYPE_1__ node_revision_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void const* const*,int) ;

void
FUNC_5(svn_temp_serializer__context_t *VAR_0,
                             node_revision_t * const *VAR_1)
{
  const node_revision_t *VAR_2 = *VAR_1;
  if (VAR_2 == ((void*)0))
    return;


  FUNC_4(VAR_0,
                            (const void * const *)VAR_1,
                            sizeof(*VAR_2));


  FUNC_1(VAR_0, &VAR_2->id);
  FUNC_1(VAR_0, &VAR_2->predecessor_id);
  FUNC_0(VAR_0, &VAR_2->prop_rep);
  FUNC_0(VAR_0, &VAR_2->data_rep);

  FUNC_2(VAR_0, &VAR_2->copyfrom_path);
  FUNC_2(VAR_0, &VAR_2->copyroot_path);
  FUNC_2(VAR_0, &VAR_2->created_path);


  FUNC_3(VAR_0);
}
