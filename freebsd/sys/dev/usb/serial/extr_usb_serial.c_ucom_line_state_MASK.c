
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ucom_softc {int sc_flag; TYPE_1__* sc_line_state_task; int sc_pls_clr; int sc_pls_set; int sc_pls_curr; } ;
struct TYPE_2__ {int hdr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ucom_softc*,int ,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_3,
    uint8_t VAR_4, uint8_t VAR_5)
{
 FUNC_1(VAR_3, VAR_0);

 if (!(VAR_3->sc_flag & VAR_1)) {
  return;
 }

 FUNC_0("on=0x%02x, off=0x%02x\n", VAR_4, VAR_5);


 VAR_3->sc_pls_curr |= VAR_4;
 VAR_3->sc_pls_curr &= ~VAR_5;
 VAR_3->sc_pls_set |= VAR_4;
 VAR_3->sc_pls_clr |= VAR_5;


 FUNC_2(VAR_3, VAR_2, ((void*)0),
     &VAR_3->sc_line_state_task[0].hdr,
     &VAR_3->sc_line_state_task[1].hdr);
}
