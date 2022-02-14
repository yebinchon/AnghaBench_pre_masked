
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mpssas_target {scalar_t__ handle; } ;
struct mpssas_softc {int maxtargets; struct mpssas_target* targets; } ;



struct mpssas_target *
FUNC_0(struct mpssas_softc *VAR_0, int VAR_1, uint16_t VAR_2)
{
 struct mpssas_target *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0->maxtargets; VAR_4++) {
  VAR_3 = &VAR_0->targets[VAR_4];
  if (VAR_3->handle == VAR_2)
   return (VAR_3);
 }

 return (((void*)0));
}
