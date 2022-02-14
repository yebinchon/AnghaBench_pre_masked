
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int * access; int operation; void* merged_file; void* my_file; void* their_file; void* base_file; void* mime_type; int is_binary; void* property_name; void* src_right_version; void* src_left_version; int reason; int action; int node_kind; void* path; } ;
typedef TYPE_1__ svn_wc_conflict_description_t ;
struct TYPE_7__ {int kind; int operation; int merged_file; int my_abspath; int their_abspath; int base_abspath; int mime_type; int is_binary; int property_name; scalar_t__ src_right_version; scalar_t__ src_left_version; int reason; int action; int node_kind; int local_abspath; } ;
typedef TYPE_2__ svn_wc_conflict_description2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int ) ;



 void* FUNC_2 (scalar_t__,int *) ;

svn_wc_conflict_description_t *
FUNC_3(const svn_wc_conflict_description2_t *VAR_0,
                  apr_pool_t *VAR_1)
{
  svn_wc_conflict_description_t *VAR_2;

  if (VAR_0 == ((void*)0))
    return ((void*)0);

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->path = FUNC_1(VAR_1, VAR_0->local_abspath);
  VAR_2->node_kind = VAR_0->node_kind;
  VAR_2->kind = VAR_0->kind;
  VAR_2->action = VAR_0->action;
  VAR_2->reason = VAR_0->reason;
  if (VAR_0->src_left_version)
    VAR_2->src_left_version =
          FUNC_2(VAR_0->src_left_version, VAR_1);
  if (VAR_0->src_right_version)
    VAR_2->src_right_version =
          FUNC_2(VAR_0->src_right_version, VAR_1);

  switch (VAR_0->kind)
    {

      case 130:
        VAR_2->property_name = FUNC_1(VAR_1,
                                                  VAR_0->property_name);


      case 129:
        VAR_2->is_binary = VAR_0->is_binary;
        if (VAR_0->mime_type)
          VAR_2->mime_type = FUNC_1(VAR_1,
                                                VAR_0->mime_type);
        if (VAR_0->base_abspath)
          VAR_2->base_file = FUNC_1(VAR_1,
                                                VAR_0->base_abspath);
        if (VAR_0->their_abspath)
          VAR_2->their_file = FUNC_1(VAR_1,
                                                 VAR_0->their_abspath);
        if (VAR_0->my_abspath)
          VAR_2->my_file = FUNC_1(VAR_1,
                                              VAR_0->my_abspath);
        if (VAR_0->merged_file)
          VAR_2->merged_file = FUNC_1(VAR_1,
                                                  VAR_0->merged_file);
        break;

      case 128:
        VAR_2->operation = VAR_0->operation;
        break;
    }


  VAR_2->access = ((void*)0);

  return VAR_2;
}
