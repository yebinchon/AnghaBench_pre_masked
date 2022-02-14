
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {int* register_valid_p; TYPE_1__* descr; int readonly_p; } ;
struct TYPE_2__ {int nr_raw_registers; size_t* sizeof_register; } ;


 struct regcache* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct regcache*,int) ;
 int FUNC_5 () ;
 int VAR_2 ;

void
FUNC_6 (struct regcache *VAR_3, int VAR_4, const void *VAR_5)
{
  void *VAR_6;
  size_t VAR_7;

  FUNC_0 (VAR_3 != ((void*)0));
  FUNC_0 (VAR_4 >= 0 && VAR_4 < VAR_3->descr->nr_raw_registers);
  FUNC_0 (!VAR_3->readonly_p);



  if (VAR_3 == VAR_0
      && !FUNC_3 (VAR_2, VAR_1))
    {
      FUNC_5 ();
      VAR_2 = VAR_1;
    }

  VAR_6 = FUNC_4 (VAR_3, VAR_4);
  VAR_7 = VAR_3->descr->sizeof_register[VAR_4];

  if (VAR_5)
    FUNC_1 (VAR_6, VAR_5, VAR_7);
  else
    FUNC_2 (VAR_6, 0, VAR_7);


  VAR_3->register_valid_p[VAR_4] = 1;
}
