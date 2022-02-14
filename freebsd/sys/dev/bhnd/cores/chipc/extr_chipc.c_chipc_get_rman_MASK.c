
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct chipc_softc {struct rman mem_rman; } ;





__attribute__((used)) static struct rman *
FUNC_0(struct chipc_softc *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return (&VAR_0->mem_rman);

 case 129:

  return (((void*)0));

 default:
  return (((void*)0));
 };
}
