
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ tls_version; } ;
struct TYPE_3__ {int * sha1_client; int * md5_client; int * sha256_client; } ;
struct tlsv1_server {int test_flags; int test_failure_reported; int state; scalar_t__ use_session_ticket; int master_secret; TYPE_2__ rl; TYPE_1__ verify; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ const VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,char*,scalar_t__*,size_t,scalar_t__*,int) ;
 int FUNC_4 (struct tlsv1_server*,int ,int ) ;
 int FUNC_5 (struct tlsv1_server*,char*,...) ;
 int FUNC_6 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_7 (int ,char*,scalar_t__*,int) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct tlsv1_server *VAR_25, u8 VAR_26,
           const u8 *VAR_27, size_t *VAR_28)
{
 const u8 *VAR_29, *VAR_30;
 size_t VAR_31, VAR_32, VAR_33;
 u8 VAR_34[VAR_23];
 u8 VAR_35[VAR_2 + VAR_6];
 if (VAR_26 != VAR_15) {
  FUNC_5(VAR_25, "Expected Finished; received content type 0x%x",
     VAR_26);
  FUNC_4(VAR_25, VAR_11,
       VAR_12);
  return -1;
 }

 VAR_29 = VAR_27;
 VAR_31 = *VAR_28;

 if (VAR_31 < 4) {
  FUNC_5(VAR_25, "Too short record (left=%lu) forFinished",
     (unsigned long) VAR_31);
  FUNC_4(VAR_25, VAR_11,
       VAR_8);
  return -1;
 }

 if (VAR_29[0] != VAR_21) {
  FUNC_8(VAR_3, "TLSv1: Expected Finished; received "
      "type 0x%x", VAR_29[0]);
  FUNC_4(VAR_25, VAR_11,
       VAR_12);
  return -1;
 }

 VAR_32 = FUNC_0(VAR_29 + 1);

 VAR_29 += 4;
 VAR_31 -= 4;

 if (VAR_32 > VAR_31) {
  FUNC_5(VAR_25, "Too short buffer for Finished (len=%lu > left=%lu)",
     (unsigned long) VAR_32, (unsigned long) VAR_31);
  FUNC_4(VAR_25, VAR_11,
       VAR_8);
  return -1;
 }
 VAR_30 = VAR_29 + VAR_32;
 if (VAR_32 != VAR_23) {
  FUNC_5(VAR_25, "Unexpected verify_data length in Finished: %lu (expected %d)",
     (unsigned long) VAR_32, VAR_23);
  FUNC_4(VAR_25, VAR_11,
       VAR_8);
  return -1;
 }
 FUNC_6(VAR_4, "TLSv1: verify_data in Finished",
      VAR_29, VAR_23);
 VAR_33 = VAR_2;
 if (VAR_25->verify.md5_client == ((void*)0) ||
     FUNC_1(VAR_25->verify.md5_client, VAR_35, &VAR_33) < 0) {
  FUNC_4(VAR_25, VAR_11,
       VAR_10);
  VAR_25->verify.md5_client = ((void*)0);
  FUNC_1(VAR_25->verify.sha1_client, ((void*)0), ((void*)0));
  VAR_25->verify.sha1_client = ((void*)0);
  return -1;
 }
 VAR_25->verify.md5_client = ((void*)0);
 VAR_33 = VAR_6;
 if (VAR_25->verify.sha1_client == ((void*)0) ||
     FUNC_1(VAR_25->verify.sha1_client, VAR_35 + VAR_2,
          &VAR_33) < 0) {
  VAR_25->verify.sha1_client = ((void*)0);
  FUNC_4(VAR_25, VAR_11,
       VAR_10);
  return -1;
 }
 VAR_25->verify.sha1_client = ((void*)0);
 VAR_33 = VAR_2 + VAR_6;





 if (FUNC_3(VAR_25->rl.tls_version,
      VAR_25->master_secret, VAR_22,
      "client finished", VAR_35, VAR_33,
      VAR_34, VAR_23)) {
  FUNC_8(VAR_3, "TLSv1: Failed to derive verify_data");
  FUNC_4(VAR_25, VAR_11,
       VAR_9);
  return -1;
 }
 FUNC_7(VAR_3, "TLSv1: verify_data (client)",
   VAR_34, VAR_23);

 if (FUNC_2(VAR_29, VAR_34, VAR_23) != 0) {
  FUNC_5(VAR_25, "Mismatch in verify_data");
  VAR_25->state = VAR_1;
  return -1;
 }

 FUNC_5(VAR_25, "Received Finished");

 *VAR_28 = VAR_30 - VAR_27;

 if (VAR_25->use_session_ticket) {

  FUNC_5(VAR_25, "Abbreviated handshake completed successfully");
  VAR_25->state = VAR_0;
 } else {

  VAR_25->state = VAR_5;
 }

 return 0;
}
