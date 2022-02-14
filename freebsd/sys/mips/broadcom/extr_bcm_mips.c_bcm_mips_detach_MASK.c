
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct bcm_mips_softc {size_t num_cpuirqs; int * cpuirqs; TYPE_1__* isrcs; } ;
typedef int device_t ;
struct TYPE_2__ {int isrc; } ;


 int FUNC_0 (struct bcm_mips_softc*,int *) ;
 struct bcm_mips_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (TYPE_1__*) ;

int
FUNC_5(device_t VAR_0)
{
 struct bcm_mips_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);


 FUNC_3(VAR_0, 0);


 for (size_t VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->isrcs); VAR_2++)
  FUNC_2(&VAR_1->isrcs[VAR_2].isrc);


 for (u_int VAR_3 = 0; VAR_3 < VAR_1->num_cpuirqs; VAR_3++)
  FUNC_0(VAR_1, &VAR_1->cpuirqs[VAR_3]);

 return (0);
}
