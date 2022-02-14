
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; int register_valid_p; int registers; } ;
struct TYPE_2__ {scalar_t__ gdbarch; int sizeof_raw_register_valid_p; int sizeof_raw_registers; } ;


 struct regcache* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2 (struct regcache *VAR_1, struct regcache *VAR_2)
{
  int VAR_3;
  FUNC_0 (VAR_2 != ((void*)0) && VAR_1 != ((void*)0));
  FUNC_0 (VAR_2->descr->gdbarch == VAR_1->descr->gdbarch);



  FUNC_0 (VAR_1 != VAR_0);
  FUNC_1 (VAR_1->registers, VAR_2->registers, VAR_1->descr->sizeof_raw_registers);
  FUNC_1 (VAR_1->register_valid_p, VAR_2->register_valid_p,
   VAR_1->descr->sizeof_raw_register_valid_p);
}
