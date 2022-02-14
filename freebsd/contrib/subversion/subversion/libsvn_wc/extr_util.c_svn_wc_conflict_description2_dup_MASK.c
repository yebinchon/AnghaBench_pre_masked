
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* prop_value_incoming_new; void* prop_value_incoming_old; void* prop_value_working; void* prop_value_base; void* their_abspath; void* prop_reject_abspath; void* src_right_version; void* src_left_version; void* merged_file; void* my_abspath; void* base_abspath; void* mime_type; void* property_name; void* local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;
 void* FUNC_3 (void*,int *) ;

svn_wc_conflict_description2_t *
FUNC_4(const svn_wc_conflict_description2_t *VAR_0,
                                  apr_pool_t *VAR_1)
{
  svn_wc_conflict_description2_t *VAR_2;

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;

  if (VAR_0->local_abspath)
    VAR_2->local_abspath = FUNC_1(VAR_1, VAR_0->local_abspath);
  if (VAR_0->property_name)
    VAR_2->property_name = FUNC_1(VAR_1, VAR_0->property_name);
  if (VAR_0->mime_type)
    VAR_2->mime_type = FUNC_1(VAR_1, VAR_0->mime_type);
  if (VAR_0->base_abspath)
    VAR_2->base_abspath = FUNC_1(VAR_1, VAR_0->base_abspath);
  if (VAR_0->their_abspath)
    VAR_2->their_abspath = FUNC_1(VAR_1, VAR_0->their_abspath);
  if (VAR_0->my_abspath)
    VAR_2->my_abspath = FUNC_1(VAR_1, VAR_0->my_abspath);
  if (VAR_0->merged_file)
    VAR_2->merged_file = FUNC_1(VAR_1, VAR_0->merged_file);
  if (VAR_0->src_left_version)
    VAR_2->src_left_version =
      FUNC_3(VAR_0->src_left_version, VAR_1);
  if (VAR_0->src_right_version)
    VAR_2->src_right_version =
      FUNC_3(VAR_0->src_right_version, VAR_1);



  if (VAR_0->prop_reject_abspath)
    VAR_2->prop_reject_abspath = VAR_2->their_abspath;

  if (VAR_0->prop_value_base)
    VAR_2->prop_value_base =
      FUNC_2(VAR_0->prop_value_base, VAR_1);
  if (VAR_0->prop_value_working)
    VAR_2->prop_value_working =
      FUNC_2(VAR_0->prop_value_working, VAR_1);
  if (VAR_0->prop_value_incoming_old)
    VAR_2->prop_value_incoming_old =
      FUNC_2(VAR_0->prop_value_incoming_old, VAR_1);
  if (VAR_0->prop_value_incoming_new)
    VAR_2->prop_value_incoming_new =
      FUNC_2(VAR_0->prop_value_incoming_new, VAR_1);

  return VAR_2;
}
