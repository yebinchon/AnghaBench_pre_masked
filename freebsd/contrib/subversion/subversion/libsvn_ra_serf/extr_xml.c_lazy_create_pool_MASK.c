
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * state_pool; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static apr_pool_t *
FUNC_1(void *VAR_0)
{
  svn_ra_serf__xml_estate_t *VAR_1 = VAR_0;

  FUNC_0(VAR_1);
  return VAR_1->state_pool;
}
