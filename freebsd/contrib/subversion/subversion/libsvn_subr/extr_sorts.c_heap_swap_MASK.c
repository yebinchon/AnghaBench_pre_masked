
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* elements; } ;
typedef TYPE_2__ svn_priority_queue__t ;
typedef int apr_size_t ;
struct TYPE_4__ {char* elts; int elt_size; } ;



__attribute__((used)) static void
FUNC_0(svn_priority_queue__t *VAR_0,
          apr_size_t VAR_1,
          apr_size_t VAR_2)
{
  int VAR_3;
  char *VAR_4 = VAR_0->elements->elts + VAR_1 * VAR_0->elements->elt_size;
  char *VAR_5 = VAR_0->elements->elts + VAR_2 * VAR_0->elements->elt_size;

  for (VAR_3 = 0; VAR_3 < VAR_0->elements->elt_size; ++VAR_3)
    {
      char VAR_6 = VAR_4[VAR_3];
      VAR_4[VAR_3] = VAR_5[VAR_3];
      VAR_5[VAR_3] = VAR_6;
    }
}
