
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* src_right_version; void* src_left_version; void* merged_file; void* my_file; void* their_file; void* base_file; void* mime_type; void* property_name; void* path; } ;
typedef TYPE_1__ svn_wc_conflict_description_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;

__attribute__((used)) static svn_wc_conflict_description_t *
FUNC_3(const svn_wc_conflict_description_t *VAR_0,
                         apr_pool_t *VAR_1)
{
  svn_wc_conflict_description_t *VAR_2;

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;

  if (VAR_0->path)
    VAR_2->path = FUNC_1(VAR_1, VAR_0->path);
  if (VAR_0->property_name)
    VAR_2->property_name = FUNC_1(VAR_1, VAR_0->property_name);
  if (VAR_0->mime_type)
    VAR_2->mime_type = FUNC_1(VAR_1, VAR_0->mime_type);

  if (VAR_0->base_file)
    VAR_2->base_file = FUNC_1(VAR_1, VAR_0->base_file);
  if (VAR_0->their_file)
    VAR_2->their_file = FUNC_1(VAR_1, VAR_0->their_file);
  if (VAR_0->my_file)
    VAR_2->my_file = FUNC_1(VAR_1, VAR_0->my_file);
  if (VAR_0->merged_file)
    VAR_2->merged_file = FUNC_1(VAR_1, VAR_0->merged_file);
  if (VAR_0->src_left_version)
    VAR_2->src_left_version =
      FUNC_2(VAR_0->src_left_version, VAR_1);
  if (VAR_0->src_right_version)
    VAR_2->src_right_version =
      FUNC_2(VAR_0->src_right_version, VAR_1);

  return VAR_2;
}
