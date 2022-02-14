
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int rx_delay_interrupts; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct rt_softc *VAR_1)
{

 FUNC_0(VAR_1, VAR_0, "Rx delay interrupt\n");
 VAR_1->rx_delay_interrupts++;
}
