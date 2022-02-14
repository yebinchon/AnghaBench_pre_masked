
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct passwd {int dummy; } ;
struct daemon {char* pidfile; void* chroot; int connect_sslctx; int listen_sslctx; int rc; } ;
struct TYPE_3__ {TYPE_2__* first; } ;
struct config_file {char* username; char* chrootdir; char* pidfile; char* directory; scalar_t__ use_syslog; int logfile; scalar_t__ do_daemonize; int tls_win_cert; int tls_cert_bundle; TYPE_1__ tls_session_ticket_keys; scalar_t__* tls_ciphersuites; scalar_t__* tls_ciphers; int ssl_service_pem; scalar_t__* ssl_service_key; } ;
struct TYPE_4__ {scalar_t__* str; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (struct config_file*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (char*,struct config_file*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 struct passwd* FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (scalar_t__*,int ,int *) ;
 int FUNC_17 (int ,TYPE_2__*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,scalar_t__,char*) ;
 int FUNC_20 (char*,char*,int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (int *,struct passwd*,scalar_t__,unsigned int) ;
 void* FUNC_28 (char*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (char*) ;
 scalar_t__ FUNC_31 (char const*,char*,int) ;
 int FUNC_32 (int ,char*,...) ;
 int FUNC_33 (struct config_file*) ;
 int FUNC_34 (char*,int ) ;

__attribute__((used)) static void
FUNC_35(struct daemon* VAR_7, struct config_file* VAR_8, int VAR_9,
 const char** VAR_10, int VAR_11)
{
 if(VAR_8->use_syslog) {
  FUNC_19(VAR_8->logfile, VAR_8->use_syslog, VAR_8->chrootdir);
 }
 if(!VAR_9 && VAR_8->do_daemonize) {
  FUNC_8();
 }
 (void)VAR_7;
 (void)VAR_11;
 (void)VAR_10;


 if(VAR_8->directory && VAR_8->directory[0]) {
  char* VAR_12 = VAR_8->directory;
  if(VAR_8->chrootdir && VAR_8->chrootdir[0] &&
   FUNC_31(VAR_12, VAR_8->chrootdir,
   FUNC_30(VAR_8->chrootdir)) == 0)
   VAR_12 += FUNC_30(VAR_8->chrootdir);
  if(VAR_12[0]) {
   if(FUNC_2(VAR_12)) {
    FUNC_10("Could not chdir to %s: %s",
     VAR_12, FUNC_29(VAR_6));
   }
   FUNC_32(VAR_3, "chdir to %s", VAR_12);
  }
 }
 if(!VAR_8->use_syslog)
  FUNC_19(VAR_8->logfile, VAR_8->use_syslog, VAR_8->chrootdir);
}
