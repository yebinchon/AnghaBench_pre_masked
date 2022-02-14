
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mac_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_19 ;
 int FUNC_2 (int) ;
 int VAR_20 ;
 int FUNC_3 () ;
 int VAR_21 ;
 char* VAR_22 ;
 int VAR_23 ;
 char* VAR_24 ;
 int VAR_25 ;

void
FUNC_4(int VAR_26, char **VAR_27)
{
 int VAR_28;

 if (VAR_2)
  FUNC_1("Connected to %s.\n", VAR_7);
 else
  FUNC_1("Not connected.\n");
 if (!VAR_19) {
  FUNC_2(1);
  if (VAR_2) {
   FUNC_1("Connected for proxy commands to %s.\n", VAR_7);
  }
  else {
   FUNC_1("No proxy connection.\n");
  }
  FUNC_2(0);
 }
 FUNC_3();
 FUNC_1("Mode: %s; Type: %s; Form: %s; Structure: %s\n",
  VAR_15, VAR_24, VAR_5, VAR_22);
 FUNC_1("Verbose: %s; Bell: %s; Prompting: %s; Globbing: %s\n",
  FUNC_0(VAR_25), FUNC_0(VAR_0), FUNC_0(VAR_8),
  FUNC_0(VAR_4));
 FUNC_1("Store unique: %s; Receive unique: %s\n", FUNC_0(VAR_23),
  FUNC_0(VAR_20));
 FUNC_1("Case: %s; CR stripping: %s\n",FUNC_0(VAR_14),FUNC_0(VAR_3));
 if (VAR_16) {
  FUNC_1("Ntrans: (in) %s (out) %s\n", VAR_17,VAR_18);
 }
 else {
  FUNC_1("Ntrans: off\n");
 }
 if (VAR_11) {
  FUNC_1("Nmap: (in) %s (out) %s\n", VAR_12, VAR_13);
 }
 else {
  FUNC_1("Nmap: off\n");
 }
 FUNC_1("Hash mark printing: %s; Use of PORT cmds: %s\n",
  FUNC_0(VAR_6), FUNC_0(VAR_21));
 if (VAR_9 > 0) {
  FUNC_1("Macros:\n");
  for (VAR_28=0; VAR_28<VAR_9; VAR_28++) {
   FUNC_1("\t%s\n",VAR_10[VAR_28].mac_name);
  }
 }
 VAR_1 = 0;
}
