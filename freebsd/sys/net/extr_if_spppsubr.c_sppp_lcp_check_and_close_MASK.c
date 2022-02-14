
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sppp {scalar_t__ pp_phase; } ;
struct TYPE_2__ {int (* Close ) (struct sppp*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sppp*) ;
 int FUNC_1 (struct sppp*) ;

__attribute__((used)) static void
FUNC_2(struct sppp *VAR_2)
{

 if (VAR_2->pp_phase < VAR_0)

  return;

 if (FUNC_0(VAR_2))
  return;

 VAR_1.Close(VAR_2);
}
