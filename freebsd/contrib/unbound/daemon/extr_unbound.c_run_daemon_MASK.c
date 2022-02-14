
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daemon {scalar_t__ pidfile; int chroot; int need_to_exit; } ;
struct config_file {int chrootdir; int logfile; int use_syslog; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct daemon*,struct config_file*,int,int,char const*) ;
 int FUNC_1 (int) ;
 struct config_file* FUNC_2 () ;
 int FUNC_3 (struct config_file*) ;
 int FUNC_4 (struct config_file*) ;
 int FUNC_5 (struct config_file*,char const*,int ) ;
 int FUNC_6 (struct daemon*) ;
 int FUNC_7 (struct daemon*) ;
 int FUNC_8 (struct daemon*) ;
 struct daemon* FUNC_9 () ;
 int FUNC_10 (struct daemon*) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (scalar_t__,int,int) ;
 int FUNC_15 (struct daemon*,struct config_file*,int,char const**,int) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_18(const char* VAR_7, int VAR_8, int VAR_9, const char* VAR_10, int VAR_11)
{
 struct config_file* VAR_12 = ((void*)0);
 struct daemon* VAR_13 = ((void*)0);
 int VAR_14 = 0;

 if(!(VAR_13 = FUNC_9()))
  FUNC_11("alloc failure");
 while(!VAR_13->need_to_exit) {
  if(VAR_14)
   FUNC_17(VAR_5, "Restart of %s.", VAR_3);
  else FUNC_17(VAR_5, "Start of %s.", VAR_3);


  if(!(VAR_12 = FUNC_2()))
   FUNC_11("Could not alloc config defaults");
  if(!FUNC_5(VAR_12, VAR_7, VAR_13->chroot)) {
   if(VAR_6 != VAR_0)
    FUNC_11("Could not read config file: %s."
     " Maybe try unbound -dd, it stays on "
     "the commandline to see more errors, "
     "or unbound-checkconf", VAR_7);
   FUNC_13("Continuing with default config settings");
  }
  FUNC_0(VAR_13, VAR_12, VAR_8, VAR_9, VAR_10);
  if(!VAR_14)
   FUNC_4(VAR_12);


  if(!FUNC_10(VAR_13))
   FUNC_11("could not open ports");
  if(!VAR_14) {
   FUNC_15(VAR_13, VAR_12, VAR_9, &VAR_7, VAR_11);
   VAR_14 = 1;
  } else {

   if(!VAR_12->use_syslog)
    FUNC_12(VAR_12->logfile, 0, VAR_12->chrootdir);
  }

  FUNC_8(VAR_13);


  FUNC_17(VAR_4, "cleanup.");
  FUNC_6(VAR_13);
  FUNC_3(VAR_12);
 }
 FUNC_17(VAR_4, "Exit cleanup.");


 if(VAR_13->pidfile) {
  int VAR_15;

  VAR_15 = FUNC_14(VAR_13->pidfile, VAR_2 | VAR_1, 0644);
  if(VAR_15 != -1)
   FUNC_1(VAR_15);

  FUNC_16(VAR_13->pidfile);
 }
 FUNC_7(VAR_13);
}
