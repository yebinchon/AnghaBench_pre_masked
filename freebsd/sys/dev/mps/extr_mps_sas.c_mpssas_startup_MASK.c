
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int wait_for_port_enable; } ;


 int FUNC_0 (struct mps_softc*) ;

int
FUNC_1(struct mps_softc *VAR_0)
{






 VAR_0->wait_for_port_enable = 1;
 FUNC_0(VAR_0);
 return (0);
}
