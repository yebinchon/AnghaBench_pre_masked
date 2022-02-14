
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* compare_func ) (char*,char*) ;TYPE_1__* elements; } ;
typedef TYPE_2__ svn_priority_queue__t ;
typedef int apr_size_t ;
struct TYPE_4__ {char* elts; int elt_size; scalar_t__ nelts; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(svn_priority_queue__t *VAR_0,
             apr_size_t VAR_1,
             apr_size_t VAR_2)
{
  char *VAR_3 = VAR_0->elements->elts + VAR_1 * VAR_0->elements->elt_size;
  char *VAR_4 = VAR_0->elements->elts + VAR_2 * VAR_0->elements->elt_size;


  FUNC_0(VAR_1 < (apr_size_t)VAR_0->elements->nelts);
  FUNC_0(VAR_2 < (apr_size_t)VAR_0->elements->nelts);
  return VAR_0->compare_func(VAR_3, VAR_4) < 0;
}
