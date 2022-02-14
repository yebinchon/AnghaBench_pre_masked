
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rman {int dummy; } ;
struct bhndb_softc {TYPE_1__* bus_res; } ;
typedef int device_t ;
struct TYPE_2__ {struct rman br_irq_rman; struct rman br_mem_rman; struct rman ht_mem_rman; } ;






 int FUNC_0 (struct bhndb_softc*,int ) ;

__attribute__((used)) static struct rman *
FUNC_1(struct bhndb_softc *VAR_0, device_t VAR_1, int VAR_2)
{
 switch (FUNC_0(VAR_0, VAR_1)) {
 case 130:
  switch (VAR_2) {
  case 128:
   return (&VAR_0->bus_res->ht_mem_rman);
  case 129:
   return (((void*)0));
  default:
   return (((void*)0));
  }

 case 131:
  switch (VAR_2) {
  case 128:
   return (&VAR_0->bus_res->br_mem_rman);
  case 129:
   return (&VAR_0->bus_res->br_irq_rman);
  default:
   return (((void*)0));
  }
 }


 return (((void*)0));
}
