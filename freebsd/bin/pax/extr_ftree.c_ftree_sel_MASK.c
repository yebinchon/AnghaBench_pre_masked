
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int refcnt; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ ARCHD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_1(ARCHD *VAR_8)
{





 if (VAR_3 != ((void*)0))
  VAR_3->refcnt = 1;







 if (VAR_7)
  VAR_5 = 1;

 if (!VAR_2 || (VAR_8->type != VAR_1))
  return;

 if (VAR_4 != ((void*)0))
  (void)FUNC_0(VAR_6, VAR_4, VAR_0);
}
