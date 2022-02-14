
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int fwver; } ;



int
FUNC_0(struct rtwn_softc *VAR_0)
{
 if (VAR_0->fwver == 0x19)
  return (1);

 return (0);
}
