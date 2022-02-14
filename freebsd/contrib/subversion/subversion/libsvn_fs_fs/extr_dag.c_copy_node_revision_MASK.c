
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* created_path; int has_mergeinfo; int mergeinfo_count; void* prop_rep; void* data_rep; int copyroot_rev; void* copyroot_path; int copyfrom_rev; void* copyfrom_path; int predecessor_count; scalar_t__ predecessor_id; int kind; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 void* FUNC_3 (void*,int *) ;

__attribute__((used)) static node_revision_t *
FUNC_4(node_revision_t *VAR_0,
                   apr_pool_t *VAR_1)
{
  node_revision_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  VAR_2->kind = VAR_0->kind;
  if (VAR_0->predecessor_id)
    VAR_2->predecessor_id = FUNC_2(VAR_0->predecessor_id, VAR_1);
  VAR_2->predecessor_count = VAR_0->predecessor_count;
  if (VAR_0->copyfrom_path)
    VAR_2->copyfrom_path = FUNC_1(VAR_1, VAR_0->copyfrom_path);
  VAR_2->copyfrom_rev = VAR_0->copyfrom_rev;
  VAR_2->copyroot_path = FUNC_1(VAR_1, VAR_0->copyroot_path);
  VAR_2->copyroot_rev = VAR_0->copyroot_rev;
  VAR_2->data_rep = FUNC_3(VAR_0->data_rep, VAR_1);
  VAR_2->prop_rep = FUNC_3(VAR_0->prop_rep, VAR_1);
  VAR_2->mergeinfo_count = VAR_0->mergeinfo_count;
  VAR_2->has_mergeinfo = VAR_0->has_mergeinfo;

  if (VAR_0->created_path)
    VAR_2->created_path = FUNC_1(VAR_1, VAR_0->created_path);
  return VAR_2;
}
