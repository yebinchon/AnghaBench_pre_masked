
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; int readonly_p; } ;
struct TYPE_2__ {int nr_raw_registers; int * sizeof_register; scalar_t__ legacy_p; } ;


 struct regcache* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct regcache*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int) ;

void
FUNC_8 (struct regcache *VAR_3, int VAR_4, void *VAR_5)
{
  FUNC_0 (VAR_3 != ((void*)0) && VAR_5 != ((void*)0));
  FUNC_0 (VAR_4 >= 0 && VAR_4 < VAR_3->descr->nr_raw_registers);
  if (VAR_3->descr->legacy_p
      && !VAR_3->readonly_p)
    {
      FUNC_0 (VAR_3 == VAR_0);



      FUNC_1 (VAR_4, VAR_5);
      return;
    }




  if (!VAR_3->readonly_p)
    {
      FUNC_0 (VAR_3 == VAR_0);
      if (! FUNC_3 (VAR_2, VAR_1))
 {
   FUNC_6 ();
   VAR_2 = VAR_1;
 }
      if (!FUNC_5 (VAR_4))
 FUNC_7 (VAR_4);
    }

  FUNC_2 (VAR_5, FUNC_4 (VAR_3, VAR_4),
   VAR_3->descr->sizeof_register[VAR_4]);
}
