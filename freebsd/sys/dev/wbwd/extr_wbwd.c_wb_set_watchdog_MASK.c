
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_softc {unsigned int timeout_override; int reg_timeout; int reg_1; int reg_2; scalar_t__ debug_verbose; int time_reg; int dev; int ctl_reg; int csr_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct wb_softc*,char*) ;

__attribute__((used)) static int
FUNC_3(struct wb_softc *VAR_3, unsigned int VAR_4)
{

 if (VAR_4 != 0) {




  if (VAR_3->timeout_override > 0)
   VAR_4 = VAR_3->timeout_override;


  if (VAR_4 > 255 * 60)
   return (VAR_0);
 }

 if (VAR_3->debug_verbose)
  FUNC_2(VAR_3, "Before watchdog counter (re)load");

 if (VAR_4 == 0) {

  VAR_3->reg_timeout = 0;
  FUNC_1(VAR_3->dev, VAR_3->time_reg, VAR_3->reg_timeout);

 } else {

  VAR_3->reg_1 = FUNC_0(VAR_3->dev, VAR_3->ctl_reg);

  if (VAR_4 > 255) {

   VAR_3->reg_1 |= VAR_1;
   VAR_3->reg_timeout = (VAR_4 / 60);
   if (VAR_4 % 60)
    VAR_3->reg_timeout++;
  } else {

   VAR_3->reg_1 &= ~VAR_1;
   VAR_3->reg_timeout = VAR_4;
  }


  VAR_3->reg_2 = FUNC_0(VAR_3->dev, VAR_3->csr_reg);
  if (VAR_3->reg_2 & VAR_2) {
   VAR_3->reg_2 &= ~VAR_2;
   FUNC_1(VAR_3->dev, VAR_3->csr_reg, VAR_3->reg_2);
  }


  FUNC_1(VAR_3->dev, VAR_3->ctl_reg, VAR_3->reg_1);


  FUNC_1(VAR_3->dev, VAR_3->time_reg, VAR_3->reg_timeout);
 }

 if (VAR_3->debug_verbose)
  FUNC_2(VAR_3, "After watchdog counter (re)load");
 return (0);
}
