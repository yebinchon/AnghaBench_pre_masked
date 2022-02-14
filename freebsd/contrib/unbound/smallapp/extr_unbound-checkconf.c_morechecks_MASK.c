
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {scalar_t__ verbosity; int num_threads; scalar_t__ edns_buffer_size; scalar_t__ msg_buffer_size; char* chrootdir; char* directory; char* pidfile; char* logfile; char* module_conf; char* username; char* control_key_file; char* control_cert_file; int server_cert_file; int server_key_file; scalar_t__ control_use_cert; scalar_t__ remote_control_enable; int ipsecmod_hook; scalar_t__ ipsecmod_enabled; int dlv_anchor_file; int trusted_keys_file_list; int auto_trust_anchor_file_list; int trust_anchor_file_list; int root_hints; int do_tcp; int do_udp; scalar_t__ prefer_ip6; int do_ip6; int do_ip4; int forwards; int stubs; } ;


 int FUNC_0 (struct config_file*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,struct config_file*) ;
 int FUNC_3 (char*,int ,char*,struct config_file*) ;
 int FUNC_4 (char*,int *,char*,struct config_file*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct config_file*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (char*,struct config_file*,int) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (struct config_file*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct config_file*) ;
 scalar_t__ FUNC_16 (struct config_file*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 char* FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (struct config_file*) ;
 int FUNC_22 (struct config_file*) ;
 int FUNC_23 (struct config_file*) ;
 int FUNC_24 (char*,int ) ;

__attribute__((used)) static void
FUNC_25(struct config_file* VAR_0)
{
 FUNC_24("stub-host", VAR_0->stubs);
 FUNC_24("forward-host", VAR_0->forwards);
 FUNC_12(VAR_0);
 FUNC_0(VAR_0);
 FUNC_21(VAR_0);

 if(VAR_0->verbosity < 0)
  FUNC_8("verbosity value < 0");
 if(VAR_0->num_threads <= 0 || VAR_0->num_threads > 10000)
  FUNC_8("num_threads value weird");
 if(!VAR_0->do_ip4 && !VAR_0->do_ip6)
  FUNC_8("ip4 and ip6 are both disabled, pointless");
 if(!VAR_0->do_ip6 && VAR_0->prefer_ip6)
  FUNC_8("cannot prefer and disable ip6, pointless");
 if(!VAR_0->do_udp && !VAR_0->do_tcp)
  FUNC_8("udp and tcp are both disabled, pointless");
 if(VAR_0->edns_buffer_size > VAR_0->msg_buffer_size)
  FUNC_8("edns-buffer-size larger than msg-buffer-size, "
   "answers will not fit in processing buffer");



 if(VAR_0->chrootdir && VAR_0->chrootdir[0] &&
  VAR_0->chrootdir[FUNC_19(VAR_0->chrootdir)-1] == '/')
  FUNC_8("chootdir %s has trailing slash '/' please remove.",
   VAR_0->chrootdir);
 if(VAR_0->chrootdir && VAR_0->chrootdir[0] &&
  !FUNC_13(VAR_0->chrootdir)) {
  FUNC_8("bad chroot directory");
 }
 if(VAR_0->directory && VAR_0->directory[0]) {
  char* VAR_1 = FUNC_9(VAR_0->directory, VAR_0, 0);
  if(!VAR_1) FUNC_8("out of memory");
  if(!FUNC_13(VAR_1)) FUNC_8("bad chdir directory");
  FUNC_10(VAR_1);
 }
 if( (VAR_0->chrootdir && VAR_0->chrootdir[0]) ||
     (VAR_0->directory && VAR_0->directory[0])) {
  if(VAR_0->pidfile && VAR_0->pidfile[0]) {
   char* VAR_2 = (VAR_0->pidfile[0]=='/')?FUNC_18(VAR_0->pidfile):
    FUNC_9(VAR_0->pidfile, VAR_0, 1);
   char* VAR_3 = FUNC_1(VAR_2);
   if(VAR_3 && !FUNC_13(VAR_3))
    FUNC_8("pidfile directory does not exist");
   FUNC_10(VAR_2);
  }
  if(VAR_0->logfile && VAR_0->logfile[0]) {
   char* VAR_4 = FUNC_9(VAR_0->logfile, VAR_0, 1);
   char* VAR_5 = FUNC_1(VAR_4);
   if(VAR_5 && !FUNC_13(VAR_5))
    FUNC_8("logfile directory does not exist");
   FUNC_10(VAR_4);
  }
 }

 FUNC_2("file with root-hints",
  VAR_0->root_hints, VAR_0->chrootdir, VAR_0);
 FUNC_2("trust-anchor-file",
  VAR_0->trust_anchor_file_list, VAR_0->chrootdir, VAR_0);
 FUNC_2("auto-trust-anchor-file",
  VAR_0->auto_trust_anchor_file_list, VAR_0->chrootdir, VAR_0);
 FUNC_3("trusted-keys-file",
  VAR_0->trusted_keys_file_list, VAR_0->chrootdir, VAR_0);
 FUNC_4("dlv-anchor-file", &VAR_0->dlv_anchor_file,
  VAR_0->chrootdir, VAR_0);
 FUNC_10(VAR_0->chrootdir);
 VAR_0->chrootdir = ((void*)0);


 FUNC_5(VAR_0->module_conf);





 if(FUNC_17(VAR_0->module_conf, "iterator") != 0
  && FUNC_17(VAR_0->module_conf, "validator iterator") != 0
  && FUNC_17(VAR_0->module_conf, "dns64 validator iterator") != 0
  && FUNC_17(VAR_0->module_conf, "dns64 iterator") != 0
  && FUNC_17(VAR_0->module_conf, "respip iterator") != 0
  && FUNC_17(VAR_0->module_conf, "respip validator iterator") != 0
  ) {
  FUNC_8("module conf '%s' is not known to work",
   VAR_0->module_conf);
 }
 if(VAR_0->remote_control_enable && FUNC_16(VAR_0)
  && VAR_0->control_use_cert) {
  FUNC_4("server-key-file", &VAR_0->server_key_file,
   VAR_0->chrootdir, VAR_0);
  FUNC_4("server-cert-file", &VAR_0->server_cert_file,
   VAR_0->chrootdir, VAR_0);
  if(!FUNC_14(VAR_0->control_key_file))
   FUNC_8("control-key-file: \"%s\" does not exist",
    VAR_0->control_key_file);
  if(!FUNC_14(VAR_0->control_cert_file))
   FUNC_8("control-cert-file: \"%s\" does not exist",
    VAR_0->control_cert_file);
 }

 FUNC_15(VAR_0);
 FUNC_22(VAR_0);



}
