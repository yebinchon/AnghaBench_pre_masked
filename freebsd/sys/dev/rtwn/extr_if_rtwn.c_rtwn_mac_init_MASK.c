
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_softc {int mac_size; TYPE_1__* mac_prog; } ;
struct TYPE_2__ {int val; int reg; } ;


 int FUNC_0 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct rtwn_softc *VAR_0)
{
 int VAR_1, VAR_2;


 for (VAR_1 = 0; VAR_1 < VAR_0->mac_size; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_0->mac_prog[VAR_1].reg,
      VAR_0->mac_prog[VAR_1].val);
  if (VAR_2 != 0)
   return (VAR_2);
 }

 return (0);
}
