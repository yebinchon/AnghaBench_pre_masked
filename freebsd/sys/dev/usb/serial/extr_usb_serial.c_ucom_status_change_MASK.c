
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {int sc_flag; TYPE_1__* sc_status_task; } ;
struct TYPE_2__ {int hdr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ucom_softc*,int ,int *,int *,int *) ;

void
FUNC_3(struct ucom_softc *VAR_4)
{
 FUNC_1(VAR_4, VAR_0);

 if (VAR_4->sc_flag & VAR_1)
  return;

 if (!(VAR_4->sc_flag & VAR_2)) {
  return;
 }
 FUNC_0("\n");

 FUNC_2(VAR_4, VAR_3, ((void*)0),
     &VAR_4->sc_status_task[0].hdr,
     &VAR_4->sc_status_task[1].hdr);
}
