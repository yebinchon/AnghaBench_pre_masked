
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct cache_page {int next; } ;
struct TYPE_4__ {struct cache_page* sentinel; } ;
typedef TYPE_1__ inprocess_cache_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct cache_page*) ;
 int FUNC_2 (struct cache_page*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(inprocess_cache_t *VAR_1,
                   struct cache_page *VAR_2)
{


  FUNC_0(VAR_2 != VAR_1->sentinel);

  if (! VAR_2->next)
    return VAR_0;

  FUNC_2(VAR_2);
  FUNC_1(VAR_1, VAR_2);

  return VAR_0;
}
