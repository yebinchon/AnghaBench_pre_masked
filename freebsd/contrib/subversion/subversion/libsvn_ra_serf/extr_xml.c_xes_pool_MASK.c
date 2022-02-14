
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * state_pool; struct TYPE_3__* prev; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;
typedef int apr_pool_t ;



__attribute__((used)) static apr_pool_t *
FUNC_0(const svn_ra_serf__xml_estate_t *VAR_0)
{


  while (VAR_0->state_pool == ((void*)0))
    VAR_0 = VAR_0->prev;
  return VAR_0->state_pool;
}
