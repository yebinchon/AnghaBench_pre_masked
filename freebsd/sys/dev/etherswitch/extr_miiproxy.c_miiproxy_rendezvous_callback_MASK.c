
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int device; } ;
struct rendezvous_entry {TYPE_2__ target; TYPE_1__ proxy; } ;
struct miiproxy_softc {int * mdio; } ;
typedef enum rendezvous_op { ____Placeholder_rendezvous_op } rendezvous_op ;




 int * FUNC_0 (int ) ;
 struct miiproxy_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(enum rendezvous_op VAR_0, struct rendezvous_entry *VAR_1)
{
 struct miiproxy_softc *VAR_2 = FUNC_1(VAR_1->proxy.device);

 switch (VAR_0) {
 case 129:
  VAR_2->mdio = FUNC_0(VAR_1->target.device);
  break;
 case 128:
  VAR_2->mdio = ((void*)0);
  break;
 }
 return (0);
}
