
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct thunder_pem_softc {struct rman mem_rman; struct rman io_rman; } ;





__attribute__((used)) static struct rman *
FUNC_0(struct thunder_pem_softc *VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 129:
  return (&VAR_0->io_rman);
 case 128:
  return (&VAR_0->mem_rman);
 default:
  break;
 }

 return (((void*)0));
}
