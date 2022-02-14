
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_nb {int snb_len; } ;
struct sockaddr {int dummy; } ;
struct smbioc_ossn {scalar_t__* ioc_srvname; scalar_t__* ioc_localcs; scalar_t__* ioc_servercs; scalar_t__* ioc_password; int ioc_svlen; int ioc_lolen; struct sockaddr* ioc_local; struct sockaddr* ioc_server; int ioc_user; } ;
struct smbioc_oshare {scalar_t__* ioc_share; } ;
struct smb_ctx {int ct_flags; scalar_t__ ct_minlevel; scalar_t__* ct_locname; TYPE_1__* ct_nb; int ct_smbtcpport; scalar_t__ ct_srvaddr; struct smbioc_oshare ct_sh; struct smbioc_ossn ct_ssn; } ;
struct nb_name {int nn_scope; int nn_type; int nn_name; } ;
struct TYPE_3__ {int nb_scope; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__,struct sockaddr**,int ) ;
 int FUNC_6 (struct sockaddr*) ;
 int FUNC_7 (struct sockaddr*,struct nb_name*,struct sockaddr_nb**) ;
 int FUNC_8 (scalar_t__*,TYPE_1__*,struct sockaddr**) ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__*,scalar_t__*) ;
 int VAR_9 ;
 int FUNC_10 (char*,scalar_t__*,int ) ;
 int FUNC_11 (struct smb_ctx*,char*) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (scalar_t__*,char*) ;
 int FUNC_14 (int ,scalar_t__*,int) ;
 int FUNC_15 (scalar_t__*) ;

int
FUNC_16(struct smb_ctx *VAR_10)
{
 struct smbioc_ossn *VAR_11 = &VAR_10->ct_ssn;
 struct smbioc_oshare *VAR_12 = &VAR_10->ct_sh;
 struct nb_name VAR_13;
 struct sockaddr *VAR_14;
 struct sockaddr_nb *VAR_15, *VAR_16;
 char *VAR_17;
 int VAR_18 = 0;

 VAR_10->ct_flags &= ~VAR_6;
 if (VAR_11->ioc_srvname[0] == 0) {
  FUNC_12("no server name specified", 0);
  return VAR_0;
 }
 if (VAR_10->ct_minlevel >= VAR_7 && VAR_12->ioc_share[0] == 0) {
  FUNC_12("no share name specified for %s@%s",
      0, VAR_11->ioc_user, VAR_11->ioc_srvname);
  return VAR_0;
 }
 VAR_18 = FUNC_3(VAR_10->ct_nb);
 if (VAR_18)
  return VAR_18;
 if (VAR_11->ioc_localcs[0] == 0)
  FUNC_13(VAR_11->ioc_localcs, "ISO8859-1");
 VAR_18 = FUNC_10("tolower", VAR_11->ioc_localcs, VAR_8);
 if (VAR_18)
  return VAR_18;
 VAR_18 = FUNC_10("toupper", VAR_11->ioc_localcs, VAR_9);
 if (VAR_18)
  return VAR_18;
 if (VAR_11->ioc_servercs[0] != 0) {
  VAR_18 = FUNC_2
   (VAR_11->ioc_servercs, VAR_11->ioc_localcs);
  if (VAR_18) return VAR_18;
 }
 if (VAR_10->ct_srvaddr) {
  VAR_18 = FUNC_5(VAR_10->ct_srvaddr, &VAR_14, VAR_10->ct_smbtcpport);
 } else {
  VAR_18 = FUNC_8(VAR_11->ioc_srvname, VAR_10->ct_nb, &VAR_14);
 }
 if (VAR_18) {
  FUNC_12("can't get server address", VAR_18);
  return VAR_18;
 }
 VAR_13.nn_scope = VAR_10->ct_nb->nb_scope;
 VAR_13.nn_type = VAR_2;
 if (FUNC_15(VAR_11->ioc_srvname) > VAR_4)
  return FUNC_0(VAR_1);
 FUNC_14(VAR_13.nn_name, VAR_11->ioc_srvname, sizeof(VAR_13.nn_name));
 VAR_18 = FUNC_7(VAR_14, &VAR_13, &VAR_16);
 FUNC_6(VAR_14);
 if (VAR_18) {
  FUNC_12("can't allocate server address", VAR_18);
  return VAR_18;
 }
 VAR_11->ioc_server = (struct sockaddr*)VAR_16;
 if (VAR_10->ct_locname[0] == 0) {
  VAR_18 = FUNC_4(VAR_10->ct_locname);
  if (VAR_18) {
   FUNC_12("can't get local name", VAR_18);
   return VAR_18;
  }
  FUNC_9(VAR_10->ct_locname, VAR_10->ct_locname);
 }




 FUNC_14(VAR_13.nn_name, VAR_10->ct_locname, VAR_4);
 VAR_13.nn_type = VAR_3;
 VAR_13.nn_scope = VAR_10->ct_nb->nb_scope;
 VAR_18 = FUNC_7(((void*)0), &VAR_13, &VAR_15);
 if (VAR_18) {
  FUNC_6((struct sockaddr*)VAR_16);
  FUNC_12("can't allocate local address", VAR_18);
  return VAR_18;
 }
 VAR_11->ioc_local = (struct sockaddr*)VAR_15;
 VAR_11->ioc_lolen = VAR_15->snb_len;
 VAR_11->ioc_svlen = VAR_16->snb_len;
 if (VAR_11->ioc_password[0] == 0 && (VAR_10->ct_flags & VAR_5) == 0) {
  VAR_17 = FUNC_1("Password:");
  VAR_18 = FUNC_11(VAR_10, VAR_17);
  if (VAR_18)
   return VAR_18;
 }
 VAR_10->ct_flags |= VAR_6;
 return 0;
}
