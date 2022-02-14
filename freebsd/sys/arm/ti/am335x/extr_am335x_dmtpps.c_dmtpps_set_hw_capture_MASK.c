
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ ppsparam; } ;
struct dmtpps_softc {int pps_curmode; int tclr; TYPE_2__ pps_state; } ;


 int FUNC_0 (struct dmtpps_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct dmtpps_softc *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_5)
  VAR_6 = 0;
 else
  VAR_6 = VAR_4->pps_state.ppsparam.mode & VAR_3;

 if (VAR_6 == VAR_4->pps_curmode)
  return;
 VAR_4->pps_curmode = VAR_6;

 if (VAR_6 == VAR_3)
  VAR_4->tclr |= VAR_1;
 else
  VAR_4->tclr &= ~VAR_2;
 FUNC_0(VAR_4, VAR_0, VAR_4->tclr);
}
