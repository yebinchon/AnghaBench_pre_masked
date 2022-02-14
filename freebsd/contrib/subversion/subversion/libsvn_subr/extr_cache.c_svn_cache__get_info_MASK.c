
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ failures; scalar_t__ writes; scalar_t__ hits; scalar_t__ reads; int cache_internal; TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_cache__t ;
struct TYPE_10__ {scalar_t__ failures; scalar_t__ sets; scalar_t__ hits; scalar_t__ gets; } ;
typedef TYPE_3__ svn_cache__info_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int (* get_info ) (int ,TYPE_3__*,scalar_t__,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,TYPE_3__*,scalar_t__,int *) ;

svn_error_t *
FUNC_3(svn_cache__t *VAR_1,
                    svn_cache__info_t *VAR_2,
                    svn_boolean_t VAR_3,
                    apr_pool_t *VAR_4)
{


  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->gets = VAR_1->reads;
  VAR_2->hits = VAR_1->hits;
  VAR_2->sets = VAR_1->writes;
  VAR_2->failures = VAR_1->failures;





  FUNC_0((VAR_1->vtable->get_info)(VAR_1->cache_internal,
                                    VAR_2,
                                    VAR_3,
                                    VAR_4));



  if (VAR_3)
    {
      VAR_1->reads = 0;
      VAR_1->hits = 0;
      VAR_1->writes = 0;
      VAR_1->failures = 0;
    }

  return VAR_0;
}
