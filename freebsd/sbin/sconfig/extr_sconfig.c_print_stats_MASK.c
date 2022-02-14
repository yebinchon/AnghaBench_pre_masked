
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_statistics {unsigned long rintr; unsigned long ibytes; unsigned long ipkts; unsigned long ierrs; unsigned long tintr; unsigned long obytes; unsigned long opkts; unsigned long oerrs; unsigned long mintr; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int,int ,struct serial_statistics*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (int VAR_3, int VAR_4)
{
 struct serial_statistics VAR_5;
 unsigned long VAR_6 [9];
 int VAR_7;

 if (FUNC_1 (VAR_3, VAR_0, &VAR_5) < 0) {
  FUNC_2 ("getting statistics");
  return;
 }
 if (VAR_4) {
  if (VAR_2) {
   FUNC_3 ("        ------------Receive-----------      "
    "------------Transmit----------\n");
   FUNC_3 ("Channel Interrupts  Packets     Errors      "
    "Interrupts  Packets     Errors\n");
  }
  else {
   FUNC_3 ("        --------Receive---------------  "
    "--------Transmit--------------  Modem\n");
   FUNC_3 ("Channel Intrs   Bytes   Packets Errors  "
    "Intrs   Bytes   Packets Errors  Intrs\n");
  }
 }

 VAR_6 [0] = VAR_5.rintr;
 VAR_6 [1] = VAR_5.ibytes;
 VAR_6 [2] = VAR_5.ipkts;
 VAR_6 [3] = VAR_5.ierrs;
 VAR_6 [4] = VAR_5.tintr;
 VAR_6 [5] = VAR_5.obytes;
 VAR_6 [6] = VAR_5.opkts;
 VAR_6 [7] = VAR_5.oerrs;
 VAR_6 [8] = VAR_5.mintr;
 FUNC_3 ("%s", VAR_1);
 if (VAR_2) {
  FUNC_3 ("\t%-12lu%-12lu%-12lu%-12lu%-12lu%-12lu", VAR_6[0],
   VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[6], VAR_6[7]);
 } else {
  for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
   FUNC_3 ("\t%s", FUNC_0 (VAR_6 [VAR_7]));
  FUNC_3 ("\n");
 }
}
