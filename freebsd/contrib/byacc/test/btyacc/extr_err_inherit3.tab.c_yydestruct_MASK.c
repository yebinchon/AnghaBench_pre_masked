
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* s; struct TYPE_4__* next; } ;
typedef TYPE_1__ namelist ;
struct TYPE_5__ {TYPE_1__* nlist; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_1()
{
    switch (VAR_0)
    {
 case 263:
 {
    namelist *VAR_2 = (*VAR_1).nlist;
    while (VAR_2 != ((void*)0))
    { namelist *VAR_3 = VAR_2;
      VAR_2 = VAR_2->next;
      FUNC_0(VAR_3->s); FUNC_0(VAR_3);
    }
  }
 break;
 case 264:
 {
    namelist *VAR_4 = (*VAR_1).nlist;
    while (VAR_4 != ((void*)0))
    { namelist *VAR_5 = VAR_4;
      VAR_4 = VAR_4->next;
      FUNC_0(VAR_5->s); FUNC_0(VAR_5);
    }
  }
 break;
 case 265:
 {
    namelist *VAR_6 = (*VAR_1).nlist;
    while (VAR_6 != ((void*)0))
    { namelist *VAR_7 = VAR_6;
      VAR_6 = VAR_6->next;
      FUNC_0(VAR_7->s); FUNC_0(VAR_7);
    }
  }
 break;
 }
}
