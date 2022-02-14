
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_softc {scalar_t__ model; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pmu_softc*,int ,int ) ;
 struct pmu_softc* VAR_4 ;

int
FUNC_1(void)
{
 struct pmu_softc *VAR_5;

 VAR_5 = VAR_4;
 if (VAR_5 == ((void*)0))
  return (-1);




 FUNC_0(VAR_5, VAR_2, VAR_3);





 if (VAR_5->model == VAR_0)
  FUNC_0(VAR_5, VAR_1, VAR_3);

 return (0);
}
