
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,char*,char*,char*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (int ) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_7(void)
{
 char *VAR_18[] = { ((void*)0) };

 FUNC_5(VAR_1, "%s by %s: %s",
     VAR_12 ? "reboot" : VAR_10 ? "halt" : VAR_11 ? "power-down" :
     VAR_9 ? "power-cycle" : "shutdown", VAR_17, VAR_14);

 (void)FUNC_4("\r\nSystem shutdown time has arrived\007\007\r\n");
 if (VAR_13) {
  (void)FUNC_4("\rbut you'll have to do it yourself\r\n");
  FUNC_1(0);
 }
 if (!VAR_16) {
  (void)FUNC_3(1, VAR_12 ? VAR_2 :
         VAR_10 ? VAR_4 :
         VAR_11 ? VAR_5 :
         VAR_9 ? VAR_6 :
         VAR_3);
 } else {
  if (VAR_12) {
   FUNC_0(VAR_8, "reboot", "-l", VAR_15,
    (char *)((void*)0), VAR_18);
   FUNC_5(VAR_0, "shutdown: can't exec %s: %m.",
    VAR_8);
   FUNC_6(VAR_8);
  }
  else if (VAR_10) {
   FUNC_0(VAR_7, "halt", "-l", VAR_15,
    (char *)((void*)0), VAR_18);
   FUNC_5(VAR_0, "shutdown: can't exec %s: %m.",
    VAR_7);
   FUNC_6(VAR_7);
  }
  else if (VAR_11) {
   FUNC_0(VAR_7, "halt", "-l", "-p", VAR_15,
    (char *)((void*)0), VAR_18);
   FUNC_5(VAR_0, "shutdown: can't exec %s: %m.",
    VAR_7);
   FUNC_6(VAR_7);
  }
  else if (VAR_9) {
   FUNC_0(VAR_7, "halt", "-l", "-c", VAR_15,
    (char *)((void*)0), VAR_18);
   FUNC_5(VAR_0, "shutdown: can't exec %s: %m.",
    VAR_7);
   FUNC_6(VAR_7);
  }
  (void)FUNC_3(1, VAR_3);
 }

 FUNC_2(0);
}
