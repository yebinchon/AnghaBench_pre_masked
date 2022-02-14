
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_16__ {TYPE_1__* min; TYPE_1__* root; } ;
struct TYPE_15__ {int degree; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,int) ;

__attribute__((used)) static void
FUNC_5 (fibheap_t VAR_0)
{
  fibnode_t VAR_1[1 + 8 * sizeof (long)];
  fibnode_t VAR_2;
  fibnode_t VAR_3;
  fibnode_t VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;

  VAR_7 = 1 + 8 * sizeof (long);

  FUNC_4 (VAR_1, 0, sizeof (fibnode_t) * VAR_7);

  while ((VAR_2 = VAR_0->root) != ((void*)0))
    {
      VAR_4 = VAR_2;
      FUNC_3 (VAR_0, VAR_2);
      VAR_6 = VAR_4->degree;
      while (VAR_1[VAR_6] != ((void*)0))
 {
   VAR_3 = VAR_1[VAR_6];
   if (FUNC_0 (VAR_0, VAR_4, VAR_3) > 0)
     {
       fibnode_t VAR_8;
       VAR_8 = VAR_4;
       VAR_4 = VAR_3;
       VAR_3 = VAR_8;
     }
   FUNC_2 (VAR_0, VAR_3, VAR_4);
   VAR_1[VAR_6] = ((void*)0);
   VAR_6++;
 }
      VAR_1[VAR_6] = VAR_4;
    }
  VAR_0->min = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    if (VAR_1[VAR_5] != ((void*)0))
      {
 FUNC_1 (VAR_0, VAR_1[VAR_5]);
 if (VAR_0->min == ((void*)0) || FUNC_0 (VAR_0, VAR_1[VAR_5], VAR_0->min) < 0)
   VAR_0->min = VAR_1[VAR_5];
      }
}
