
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct proto_softc {scalar_t__ sc_rescnt; struct proto_res* sc_res; } ;
struct TYPE_2__ {struct resource* res; } ;
struct proto_res {int r_type; int r_rid; TYPE_1__ r_d; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct proto_softc *VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 struct proto_res *VAR_8;

 if (VAR_5 == VAR_3)
  return (VAR_0);
 if (VAR_4->sc_rescnt == VAR_2)
  return (VAR_1);

 VAR_8 = VAR_4->sc_res + VAR_4->sc_rescnt++;
 VAR_8->r_type = VAR_5;
 VAR_8->r_rid = VAR_6;
 VAR_8->r_d.res = VAR_7;
 return (0);
}
