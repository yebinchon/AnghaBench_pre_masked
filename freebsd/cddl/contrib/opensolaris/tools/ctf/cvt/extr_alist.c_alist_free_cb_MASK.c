
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* al_valfree ) (int ) ;int (* al_namefree ) (int ) ;} ;
typedef TYPE_1__ alist_t ;
struct TYPE_5__ {int ale_name; } ;
typedef TYPE_2__ alist_el_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, void *VAR_1)
{
 alist_el_t *VAR_2 = VAR_0;
 alist_t *VAR_3 = VAR_1;
 if (VAR_3->al_namefree)
  VAR_3->al_namefree(VAR_2->ale_name);
 if (VAR_3->al_valfree)
  VAR_3->al_valfree(VAR_2->ale_name);
 FUNC_0(VAR_2);
}
