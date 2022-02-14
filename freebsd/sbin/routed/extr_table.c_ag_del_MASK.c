
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag_info {struct ag_info* ag_fine; TYPE_1__* ag_cors; } ;
struct TYPE_2__ {struct ag_info* ag_fine; } ;


 int FUNC_0 () ;
 struct ag_info* VAR_0 ;
 struct ag_info* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct ag_info *VAR_3)
{
 FUNC_0();

 if (VAR_3->ag_cors == ((void*)0))
  VAR_1 = VAR_3->ag_fine;
 else
  VAR_3->ag_cors->ag_fine = VAR_3->ag_fine;

 if (VAR_3->ag_fine == ((void*)0))
  VAR_2 = VAR_3->ag_cors;
 else
  VAR_3->ag_fine->ag_cors = VAR_3->ag_cors;

 VAR_3->ag_fine = VAR_0;
 VAR_0 = VAR_3;

 FUNC_0();
}
