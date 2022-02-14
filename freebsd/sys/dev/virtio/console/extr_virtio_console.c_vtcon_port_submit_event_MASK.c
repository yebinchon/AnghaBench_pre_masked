
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vtcon_softc {int dummy; } ;
struct vtcon_port {int vtcport_id; struct vtcon_softc* vtcport_sc; } ;


 int FUNC_0 (struct vtcon_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtcon_port *VAR_0, uint16_t VAR_1,
    uint16_t VAR_2)
{
 struct vtcon_softc *VAR_3;

 VAR_3 = VAR_0->vtcport_sc;

 FUNC_0(VAR_3, VAR_0->vtcport_id, VAR_1, VAR_2);
}
