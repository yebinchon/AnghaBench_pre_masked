
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daemon {int dummy; } ;
struct config_file {scalar_t__ do_daemonize; scalar_t__ use_systemd; int * logfile; scalar_t__ use_syslog; scalar_t__ verbosity; } ;


 int FUNC_0 (struct config_file*) ;
 int FUNC_1 (struct daemon*,struct config_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct config_file*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct daemon* VAR_1, struct config_file* VAR_2,
 int VAR_3, int VAR_4, const char* VAR_5)
{

 VAR_0 = VAR_3 + VAR_2->verbosity;
 if (VAR_4 > 1) {
  VAR_2->use_syslog = 0;
  FUNC_2(VAR_2->logfile);
  VAR_2->logfile = ((void*)0);
 }
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_2);

 if (VAR_2->use_systemd && VAR_2->do_daemonize) {
  FUNC_4("use-systemd and do-daemonize should not be enabled at the same time");
 }

 FUNC_3(VAR_2, VAR_5);
}
