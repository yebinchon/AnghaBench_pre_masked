
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio {int dummy; } ;
struct TYPE_4__ {int queue; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int ips_command_t ;


 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int **,int ) ;
 int FUNC_3 (int *,struct bio*) ;

void FUNC_4(ips_softc_t *VAR_0)
{
 struct bio *VAR_1;
 ips_command_t *VAR_2;

 VAR_1 = FUNC_0(&VAR_0->queue);
 if(!VAR_1)
  return;

 if (FUNC_2(VAR_0, &VAR_2, 0))
  return;

 FUNC_1(&VAR_0->queue, VAR_1);
 FUNC_3(VAR_2, VAR_1);
 return;
}
