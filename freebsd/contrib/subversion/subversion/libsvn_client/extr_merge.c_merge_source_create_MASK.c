
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int ancestral; void* loc2; void* loc1; } ;
typedef TYPE_1__ merge_source_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int const*,int *) ;

__attribute__((used)) static merge_source_t *
FUNC_2(const svn_client__pathrev_t *VAR_0,
                    const svn_client__pathrev_t *VAR_1,
                    svn_boolean_t VAR_2,
                    apr_pool_t *VAR_3)
{
  merge_source_t *VAR_4
    = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->loc1 = FUNC_1(VAR_0, VAR_3);
  VAR_4->loc2 = FUNC_1(VAR_1, VAR_3);
  VAR_4->ancestral = VAR_2;
  return VAR_4;
}
