
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ancestral; void* loc2; void* loc1; } ;
typedef TYPE_1__ merge_source_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (void*,int *) ;

__attribute__((used)) static merge_source_t *
FUNC_2(const merge_source_t *VAR_0,
                 apr_pool_t *VAR_1)
{
  merge_source_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->loc1 = FUNC_1(VAR_0->loc1, VAR_1);
  VAR_2->loc2 = FUNC_1(VAR_0->loc2, VAR_1);
  VAR_2->ancestral = VAR_0->ancestral;
  return VAR_2;
}
