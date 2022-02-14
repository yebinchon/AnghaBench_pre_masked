
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * offsets; void* last_matches; void* prefixes; int * pool; } ;
typedef TYPE_1__ hash_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(hash_t *VAR_1,
                      apr_size_t VAR_2,
                      apr_pool_t *VAR_3)
{
  apr_size_t VAR_4;

  VAR_1->pool = VAR_3;
  VAR_1->size = VAR_2;

  VAR_1->prefixes = FUNC_1(VAR_3, VAR_2);
  VAR_1->last_matches = FUNC_1(VAR_3,
                                   sizeof(*VAR_1->last_matches) * VAR_2);
  VAR_1->offsets = FUNC_0(VAR_3, sizeof(*VAR_1->offsets) * VAR_2);

  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    VAR_1->offsets[VAR_4] = VAR_0;
}
