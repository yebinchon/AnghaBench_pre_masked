
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmif_reg {TYPE_1__* aif; } ;
struct TYPE_2__ {int notify; } ;


 int FUNC_0 (int *,struct atmif_reg*,int ) ;
 int FUNC_1 (struct atmif_reg*) ;
 int VAR_0 ;

void
FUNC_2(void *VAR_1)
{
 struct atmif_reg *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->aif->notify, VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
