
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_port {scalar_t__ init_state; } ;
struct sfxge_softc {struct sfxge_port port; } ;


 int FUNC_0 (struct sfxge_port*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sfxge_port*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sfxge_softc*) ;

int
FUNC_4(struct sfxge_softc *VAR_1)
{
 struct sfxge_port *VAR_2 = &VAR_1->port;
 int VAR_3;

 FUNC_0(VAR_2);
 if (FUNC_2(VAR_2->init_state == VAR_0))
  VAR_3 = FUNC_3(VAR_1);
 else
  VAR_3 = 0;
 FUNC_1(VAR_2);
 return (VAR_3);
}
