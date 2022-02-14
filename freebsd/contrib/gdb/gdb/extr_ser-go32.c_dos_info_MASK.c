
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dos_ttystate {long base; char* irq; int oflo; int perr; int ferr; int baudrate; scalar_t__ fifo; scalar_t__ intrupt; } ;


 int VAR_0 ;
 long* VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 struct dos_ttystate* VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_5, int VAR_6)
{
  struct dos_ttystate *VAR_7;




  for (VAR_7 = VAR_4; VAR_7 < &VAR_4[4]; VAR_7++)
    {
      if (VAR_7->baudrate == 0)
 continue;
      FUNC_0 ("Port:\tCOM%ld (%sactive)\n", (long)(VAR_7 - VAR_4) + 1,
         VAR_7->intrupt ? "" : "not ");
      FUNC_0 ("Addr:\t0x%03x (irq %d)\n", VAR_7->base, VAR_7->irq);
      FUNC_0 ("16550:\t%s\n", VAR_7->fifo ? "yes" : "no");
      FUNC_0 ("Speed:\t%d baud\n", VAR_7->baudrate);
      FUNC_0 ("Errs:\tframing %d parity %d overflow %d\n\n",
         VAR_7->ferr, VAR_7->perr, VAR_7->oflo);
    }







}
