
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdog_mode {int wc_count; char* wc_names; int wm_period; int wm_mode; int wm_name; } ;
struct wdog_conf {int wc_count; char* wc_names; int wm_period; int wm_mode; int wm_name; } ;
typedef int pid_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int ,...) ;
 int FUNC_11 (char*,int ) ;
 int VAR_8 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,int) ;
 int VAR_9 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int*) ;

__attribute__((used)) static int
FUNC_17(int VAR_10)
{
 char VAR_11[VAR_7];
 struct wdog_conf VAR_12;
 struct wdog_mode VAR_13;
 pid_t VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_12(VAR_1, VAR_8);

 switch ((VAR_14 = FUNC_5())) {
 case 0:
  break;
 case -1:
  FUNC_3("fork");
  break;
 default:
  VAR_15 = FUNC_16(&VAR_16);
  FUNC_0(VAR_14, VAR_15);
  FUNC_0(VAR_9, VAR_10);
  return VAR_16;
 }

 FUNC_9();

 VAR_17 = FUNC_11("/dev/watchdog", VAR_0);
 if (VAR_17 == -1)
  FUNC_4(1, "open watchdog");

 VAR_12.wc_count = 1;
 VAR_12.wc_names = VAR_11;

 if (FUNC_10(VAR_17, VAR_2, &VAR_12) == -1)
  FUNC_4(1, "can't fetch watchdog names");

 if (VAR_12.wc_count) {
  FUNC_2(VAR_12.wc_count == 1);

  FUNC_14(VAR_13.wm_name, VAR_12.wc_names, sizeof(VAR_13.wm_name));
  VAR_13.wm_mode = VAR_6;
  VAR_13.wm_period = 1;
  if (FUNC_10(VAR_17, VAR_3, &VAR_13) == -1)
   FUNC_3("failed to set tickle");

  FUNC_15(400000);
  if (VAR_10 == 1)
   FUNC_10(VAR_17, VAR_4);
  else {
   VAR_13.wm_mode = VAR_5;
   FUNC_10(VAR_17, VAR_3, &VAR_13);
  }
  FUNC_7(FUNC_6(), VAR_1);

  FUNC_13(2);
  FUNC_8("staying alive\n");
  FUNC_7(FUNC_6(), VAR_1);
  FUNC_1(2);
 }

 FUNC_8("no watchdog registered!\n");
 FUNC_1(1);
}
