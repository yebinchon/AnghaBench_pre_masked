
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * node; int * next; } ;
typedef TYPE_1__ sorted_pattern_t ;
typedef int node_t ;
typedef int authz_rule_segment_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 TYPE_2__* FUNC_0 (int *,int,int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *,int*,int ) ;

__attribute__((used)) static node_t *
FUNC_4(apr_array_header_t **VAR_1,
                     authz_rule_segment_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  int VAR_4;
  sorted_pattern_t VAR_5;
  sorted_pattern_t *VAR_6;


  if (!*VAR_1)
    *VAR_1 = FUNC_0(VAR_3, 4, sizeof(sorted_pattern_t));




  VAR_4 = (*VAR_1)->nelts;
  VAR_6 = FUNC_3(*VAR_1, VAR_2, &VAR_4,
                                     VAR_0);
  if (VAR_6)
    return VAR_6->node;



  VAR_5.node = FUNC_1(VAR_2, VAR_3);
  VAR_5.next = ((void*)0);
  FUNC_2(*VAR_1, &VAR_5, VAR_4);

  return VAR_5.node;
}
