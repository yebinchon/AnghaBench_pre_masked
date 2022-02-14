
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* descr; } ;
struct TYPE_4__ {scalar_t__ gdbarch; scalar_t__ legacy_p; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,int,char*) ;

void
FUNC_3 (int VAR_2, char *VAR_3)
{
  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (VAR_1->descr->gdbarch == VAR_0);
  if (VAR_1->descr->legacy_p)
    {
      FUNC_1 (VAR_2, VAR_3);
      return;
    }
  FUNC_2 (VAR_1, VAR_2, VAR_3);
}
