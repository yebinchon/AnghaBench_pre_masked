
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct frchain {int frch_subseg; struct frchain* frch_next; } ;
struct TYPE_13__ {struct frchain* frchainP; } ;
typedef TYPE_1__ segment_info_type ;
struct TYPE_14__ {struct TYPE_14__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_17__ {int * fr_next; scalar_t__ fr_fix; } ;
struct TYPE_16__ {TYPE_2__* sections; } ;
struct TYPE_15__ {unsigned int entsize; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct frchain*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ) ;
 TYPE_9__* VAR_1 ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 TYPE_5__* VAR_3 ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

void
FUNC_10 (void)
{
  struct frchain *VAR_4;
  asection *VAR_5;

  for (VAR_5 = VAR_3->sections; VAR_5; VAR_5 = VAR_5->next)
    {
      segment_info_type *VAR_6 = FUNC_7 (VAR_5);
      if (!VAR_6)
 continue;

      for (VAR_4 = VAR_6->frchainP;
    VAR_4 != ((void*)0);
    VAR_4 = VAR_4->frch_next)
 {
   int VAR_7 = 0;

   FUNC_8 (VAR_5, VAR_4->frch_subseg);




   if (!FUNC_5 ())
     {
       VAR_7 = FUNC_0 (VAR_2, VAR_4);
       if ((FUNC_1 (VAR_2->owner, VAR_2) & VAR_0)
    && VAR_2->entsize)
  {
    unsigned int VAR_8 = VAR_2->entsize;
    int VAR_9 = 0;

    while ((VAR_8 & 1) == 0)
      {
        ++VAR_9;
        VAR_8 >>= 1;
      }
    if (VAR_9 > VAR_7)
      VAR_7 = VAR_9;
  }
     }

   if (FUNC_9 (VAR_2))
     FUNC_3 (VAR_7, 0);
   else
     FUNC_2 (VAR_7, 0, 0);






   FUNC_4 (VAR_1);
   VAR_1->fr_fix = 0;
   FUNC_6 (VAR_1->fr_next == ((void*)0));
 }
    }
}
