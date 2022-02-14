
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct proto_conn {int dummy; } ;
struct adist_host {scalar_t__ adh_role; char* adh_localaddr; int adh_conn; int adh_remoteaddr; int adh_fingerprint; int adh_name; } ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,int ,int,struct proto_conn**) ;
 scalar_t__ FUNC_4 (int ,struct proto_conn*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct adist_host *VAR_3)
{
 struct proto_conn *VAR_4;
 int16_t VAR_5 = 0;

 FUNC_2("[%s] (%s) ", VAR_3->adh_name,
     FUNC_8(VAR_3->adh_role));

 FUNC_0(VAR_3->adh_role == VAR_0);

 if (FUNC_5(VAR_3->adh_conn, &VAR_5, sizeof(VAR_5)) < 0) {
  FUNC_1(VAR_1,
      "Unable to receive connection command");
  return;
 }
 if (FUNC_7("tls:fingerprint", VAR_3->adh_fingerprint) == -1) {
  VAR_5 = VAR_2;
  FUNC_1(VAR_1, "Unable to set fingerprint");
  goto out;
 }
 if (FUNC_3(VAR_3->adh_localaddr[0] != '\0' ?
     VAR_3->adh_localaddr : ((void*)0),
     VAR_3->adh_remoteaddr, -1, &VAR_4) < 0) {
  VAR_5 = VAR_2;
  FUNC_1(VAR_1, "Unable to connect to %s",
      VAR_3->adh_remoteaddr);
  goto out;
 }
 VAR_5 = 0;
out:
 if (FUNC_6(VAR_3->adh_conn, &VAR_5, sizeof(VAR_5)) < 0) {
  FUNC_1(VAR_1,
      "Unable to send reply to connection request");
 }
 if (VAR_5 == 0 && FUNC_4(VAR_3->adh_conn, VAR_4) < 0)
  FUNC_1(VAR_1, "Unable to send connection");

 FUNC_2("%s", "");
}
