
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; void** resp; } ;
struct dwmmc_softc {struct mmc_command* curcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct dwmmc_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(struct dwmmc_softc *VAR_6)
{
 struct mmc_command *VAR_7;

 VAR_7 = VAR_6->curcmd;
 if (VAR_7 == ((void*)0))
  return;

 if (VAR_7->flags & VAR_1) {
  if (VAR_7->flags & VAR_0) {
   VAR_7->resp[3] = FUNC_0(VAR_6, VAR_2);
   VAR_7->resp[2] = FUNC_0(VAR_6, VAR_3);
   VAR_7->resp[1] = FUNC_0(VAR_6, VAR_4);
   VAR_7->resp[0] = FUNC_0(VAR_6, VAR_5);
  } else {
   VAR_7->resp[3] = 0;
   VAR_7->resp[2] = 0;
   VAR_7->resp[1] = 0;
   VAR_7->resp[0] = FUNC_0(VAR_6, VAR_2);
  }
 }
}
