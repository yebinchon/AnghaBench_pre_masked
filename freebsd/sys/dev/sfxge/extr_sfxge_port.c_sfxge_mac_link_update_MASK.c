
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_port {size_t link_mode; } ;
struct sfxge_softc {TYPE_1__* ifnet; struct sfxge_port port; } ;
typedef size_t efx_link_mode_t ;
struct TYPE_2__ {int if_baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * VAR_2 ;

void
FUNC_2(struct sfxge_softc *VAR_3, efx_link_mode_t VAR_4)
{
 struct sfxge_port *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_3->port;

 if (VAR_5->link_mode == VAR_4)
  return;

 VAR_5->link_mode = VAR_4;


 VAR_6 = (FUNC_0(VAR_3) ? VAR_1 : VAR_0);
 VAR_3->ifnet->if_baudrate = VAR_2[VAR_5->link_mode];
 FUNC_1(VAR_3->ifnet, VAR_6);
}
