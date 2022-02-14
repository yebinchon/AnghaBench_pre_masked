
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sbni_softc {int state; int csr1; scalar_t__ wait_frameno; scalar_t__ inppos; int timer_ticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sbni_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sbni_softc *VAR_8)
{
 VAR_8->timer_ticks = VAR_0;
 VAR_8->state &= ~(VAR_6 | VAR_4);
 VAR_8->state |= VAR_5;

 VAR_8->inppos = 0;
 VAR_8->wait_frameno = 0;

 FUNC_0(VAR_8, VAR_2, *(u_char *)&VAR_8->csr1 | VAR_7);
 FUNC_0(VAR_8, VAR_1, VAR_3);
}
