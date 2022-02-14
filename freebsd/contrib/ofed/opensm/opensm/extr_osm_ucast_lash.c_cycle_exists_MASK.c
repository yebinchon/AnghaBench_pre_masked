
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int visiting_number; int seen; scalar_t__ to; scalar_t__ from; int num_deps; struct TYPE_7__* next; TYPE_1__* deps; } ;
typedef TYPE_2__ cdg_vertex_t ;
struct TYPE_6__ {TYPE_2__* v; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(cdg_vertex_t * VAR_0, cdg_vertex_t * VAR_1,
   cdg_vertex_t * VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 if (VAR_1 != ((void*)0) && VAR_1->visiting_number > 0) {
  if (VAR_3 > VAR_1->visiting_number && VAR_1->seen == 0) {
   VAR_6 = 1;
  }
 } else {
  if (VAR_1 == ((void*)0)) {
   VAR_1 = VAR_0;
   FUNC_0(VAR_2 == ((void*)0));
  }

  VAR_1->visiting_number = VAR_3;

  if (VAR_2 != ((void*)0)) {
   VAR_2->next = VAR_1;
   FUNC_0(VAR_2->to == VAR_1->from);
   FUNC_0(VAR_2->visiting_number > 0);
  }

  VAR_5 = VAR_3 + 1;

  for (VAR_4 = 0; VAR_4 < VAR_1->num_deps; VAR_4++) {
   VAR_6 =
       FUNC_1(VAR_0, VAR_1->deps[VAR_4].v, VAR_1,
      VAR_5);
   if (VAR_6 == 1)
    VAR_4 = VAR_1->num_deps;
  }

  VAR_1->seen = 1;
  if (VAR_2 != ((void*)0))
   VAR_2->next = ((void*)0);
 }

 return VAR_6;
}
