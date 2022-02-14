
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_2__ {int items_per_page; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_size_t ;


 int VAR_0 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(void *VAR_1, apr_size_t VAR_2)
{





  inprocess_cache_t *VAR_3 = VAR_1;
  return VAR_2 < VAR_0 / VAR_3->items_per_page;
}
