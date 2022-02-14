
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ segment_count; } ;
typedef TYPE_1__ svn_membuffer_t ;
struct TYPE_9__ {char* id; } ;
typedef TYPE_2__ svn_cache__info_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

svn_cache__info_t *
FUNC_4(apr_pool_t *VAR_0)
{
  apr_uint32_t VAR_1;

  svn_membuffer_t *VAR_2 = FUNC_1();
  svn_cache__info_t *VAR_3 = FUNC_0(VAR_0, sizeof(*VAR_3));



  VAR_3->id = "membuffer globals";



  for (VAR_1 = 0; VAR_1 < VAR_2->segment_count; ++VAR_1)
    FUNC_2(FUNC_3(VAR_2 + VAR_1,
                                                          VAR_3));

  return VAR_3;
}
