
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ tls_version; } ;
struct TYPE_3__ {int * sha1_server; int * md5_server; int * sha256_server; } ;
struct tlsv1_client {scalar_t__ use_session_ticket; scalar_t__ session_resumed; int state; int master_secret; TYPE_2__ rl; TYPE_1__ verify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ const VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__*,int) ;
 int FUNC_3 (struct tlsv1_client*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,char*,scalar_t__*,size_t,scalar_t__*,int) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,scalar_t__*,int) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_client *VAR_18, u8 VAR_19,
           const u8 *VAR_20, size_t *VAR_21)
{
 const u8 *VAR_22, *VAR_23;
 size_t VAR_24, VAR_25, VAR_26;
 u8 VAR_27[VAR_16];
 u8 VAR_28[VAR_2 + VAR_6];

 if (VAR_19 != VAR_13) {
  FUNC_7(VAR_3, "TLSv1: Expected Finished; "
      "received content type 0x%x", VAR_19);
  FUNC_3(VAR_18, VAR_11,
     VAR_12);
  return -1;
 }

 VAR_22 = VAR_20;
 VAR_24 = *VAR_21;

 if (VAR_24 < 4) {
  FUNC_7(VAR_3, "TLSv1: Too short record (left=%lu) for "
      "Finished",
      (unsigned long) VAR_24);
  FUNC_3(VAR_18, VAR_11,
     VAR_8);
  return -1;
 }

 if (VAR_22[0] != VAR_14) {
  FUNC_7(VAR_3, "TLSv1: Expected Finished; received "
      "type 0x%x", VAR_22[0]);
  FUNC_3(VAR_18, VAR_11,
     VAR_12);
  return -1;
 }

 VAR_25 = FUNC_0(VAR_22 + 1);

 VAR_22 += 4;
 VAR_24 -= 4;

 if (VAR_25 > VAR_24) {
  FUNC_7(VAR_3, "TLSv1: Too short buffer for Finished "
      "(len=%lu > left=%lu)",
      (unsigned long) VAR_25, (unsigned long) VAR_24);
  FUNC_3(VAR_18, VAR_11,
     VAR_8);
  return -1;
 }
 VAR_23 = VAR_22 + VAR_25;
 if (VAR_25 != VAR_16) {
  FUNC_7(VAR_3, "TLSv1: Unexpected verify_data length "
      "in Finished: %lu (expected %d)",
      (unsigned long) VAR_25, VAR_16);
  FUNC_3(VAR_18, VAR_11,
     VAR_8);
  return -1;
 }
 FUNC_5(VAR_5, "TLSv1: verify_data in Finished",
      VAR_22, VAR_16);
 VAR_26 = VAR_2;
 if (VAR_18->verify.md5_server == ((void*)0) ||
     FUNC_1(VAR_18->verify.md5_server, VAR_28, &VAR_26) < 0) {
  FUNC_3(VAR_18, VAR_11,
     VAR_10);
  VAR_18->verify.md5_server = ((void*)0);
  FUNC_1(VAR_18->verify.sha1_server, ((void*)0), ((void*)0));
  VAR_18->verify.sha1_server = ((void*)0);
  return -1;
 }
 VAR_18->verify.md5_server = ((void*)0);
 VAR_26 = VAR_6;
 if (VAR_18->verify.sha1_server == ((void*)0) ||
     FUNC_1(VAR_18->verify.sha1_server, VAR_28 + VAR_2,
          &VAR_26) < 0) {
  VAR_18->verify.sha1_server = ((void*)0);
  FUNC_3(VAR_18, VAR_11,
     VAR_10);
  return -1;
 }
 VAR_18->verify.sha1_server = ((void*)0);
 VAR_26 = VAR_2 + VAR_6;





 if (FUNC_4(VAR_18->rl.tls_version,
      VAR_18->master_secret, VAR_15,
      "server finished", VAR_28, VAR_26,
      VAR_27, VAR_16)) {
  FUNC_7(VAR_3, "TLSv1: Failed to derive verify_data");
  FUNC_3(VAR_18, VAR_11,
     VAR_9);
  return -1;
 }
 FUNC_6(VAR_3, "TLSv1: verify_data (server)",
   VAR_27, VAR_16);

 if (FUNC_2(VAR_22, VAR_27, VAR_16) != 0) {
  FUNC_7(VAR_4, "TLSv1: Mismatch in verify_data");
  FUNC_3(VAR_18, VAR_11,
     VAR_9);
  return -1;
 }

 FUNC_7(VAR_3, "TLSv1: Received Finished");

 *VAR_21 = VAR_23 - VAR_20;

 VAR_18->state = (VAR_18->session_resumed || VAR_18->use_session_ticket) ?
  VAR_1 : VAR_0;

 return 0;
}
