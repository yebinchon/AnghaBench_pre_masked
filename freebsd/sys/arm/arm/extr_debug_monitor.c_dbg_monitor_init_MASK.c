
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 () ;

void
FUNC_10(void)
{
 int VAR_11;


 VAR_8 = FUNC_5();

 if (!FUNC_3()) {
  FUNC_2("ARM Debug Architecture not supported\n");
  return;
 }

 if (VAR_4) {
  FUNC_2("ARM Debug Architecture %s\n",
      (VAR_8 == VAR_0) ? "v6" :
      (VAR_8 == VAR_1) ? "v6.1" :
      (VAR_8 == VAR_2) ? "v7" :
      (VAR_8 == VAR_3) ? "v7.1" : "unknown");
 }


 VAR_9 = FUNC_6();


 VAR_10 = FUNC_7();
 VAR_6 = FUNC_9();

 if (VAR_4) {
  FUNC_2("%d watchpoints and %d breakpoints supported\n",
      VAR_10, VAR_6);
 }

 VAR_11 = FUNC_8();
 if (VAR_11 == 0) {
  VAR_11 = FUNC_4();
  if (VAR_11 == 0) {
   FUNC_1(&VAR_7, 1);
   return;
  }
 }

 FUNC_2("HW Breakpoints/Watchpoints not enabled on CPU%d\n",
     FUNC_0(VAR_5));
}
