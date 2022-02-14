
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ blocked; } ;
struct bearer {TYPE_1__ publ; } ;
struct TYPE_4__ {struct bearer bearer; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bearer*) ;

void FUNC_3(void)
{
 struct bearer *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = &VAR_1->bearer;
 if (VAR_2->publ.blocked) {
  VAR_2->publ.blocked = 0;
  FUNC_2(VAR_2);
 }
 FUNC_1(&VAR_0);
}
