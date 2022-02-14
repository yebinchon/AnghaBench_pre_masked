
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tls_version; } ;
struct tlsv1_client {int flags; int num_cipher_suites; int client_hello_ext_len; int session_id_len; int* cipher_suites; int state; TYPE_1__ rl; int verify; int client_hello_ext; int session_id; int client_random; } ;
struct os_time {int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct os_time*) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (struct tlsv1_client*,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_12 (int ,char*,int ,int) ;
 int FUNC_13 (int ,char*,...) ;

u8 * FUNC_14(struct tlsv1_client *VAR_27, size_t *VAR_28)
{
 u8 *VAR_29, *VAR_30, *VAR_31, *VAR_32, *VAR_33, *VAR_34;
 struct os_time VAR_35;
 size_t VAR_36, VAR_37;
 u8 *VAR_38;
 u16 VAR_39 = VAR_23;
 if ((VAR_27->flags & VAR_8) &&
     VAR_39 == VAR_24) {
  FUNC_13(VAR_2, "TLSv1: No TLS version allowed");
  return ((void*)0);
 }

 FUNC_13(VAR_0, "TLSv1: Send ClientHello (ver %s)",
     FUNC_10(VAR_39));
 *VAR_28 = 0;

 FUNC_4(&VAR_35);



 FUNC_2(VAR_27->client_random, VAR_35.sec);
 if (FUNC_7(VAR_27->client_random + 4, VAR_20 - 4)) {
  FUNC_13(VAR_1, "TLSv1: Could not generate "
      "client_random");
  return ((void*)0);
 }
 FUNC_12(VAR_3, "TLSv1: client_random",
      VAR_27->client_random, VAR_20);

 VAR_36 = 150 + VAR_27->num_cipher_suites * 2 + VAR_27->client_hello_ext_len;
 VAR_29 = FUNC_5(VAR_36);
 if (VAR_29 == ((void*)0))
  return ((void*)0);
 VAR_30 = VAR_29 + VAR_36;

 VAR_34 = VAR_29;
 VAR_31 = VAR_34 + VAR_21;




 VAR_33 = VAR_31;

 *VAR_31++ = VAR_16;

 VAR_32 = VAR_31;
 VAR_31 += 3;


 FUNC_0(VAR_31, VAR_39);
 VAR_31 += 2;

 FUNC_6(VAR_31, VAR_27->client_random, VAR_20);
 VAR_31 += VAR_20;

 *VAR_31++ = VAR_27->session_id_len;
 FUNC_6(VAR_31, VAR_27->session_id, VAR_27->session_id_len);
 VAR_31 += VAR_27->session_id_len;

 FUNC_0(VAR_31, 2 * VAR_27->num_cipher_suites);
 VAR_31 += 2;
 for (VAR_37 = 0; VAR_37 < VAR_27->num_cipher_suites; VAR_37++) {
  FUNC_0(VAR_31, VAR_27->cipher_suites[VAR_37]);
  VAR_31 += 2;
 }

 *VAR_31++ = 1;
 *VAR_31++ = VAR_7;


 VAR_38 = VAR_31;
 VAR_31 += 2;
 if (VAR_27->client_hello_ext) {
  FUNC_6(VAR_31, VAR_27->client_hello_ext,
     VAR_27->client_hello_ext_len);
  VAR_31 += VAR_27->client_hello_ext_len;
 }

 if (VAR_27->flags & VAR_11) {
  FUNC_13(VAR_0,
      "TLSv1: Add status_request extension for OCSP stapling");

  FUNC_0(VAR_31, VAR_14);
  VAR_31 += 2;

  FUNC_0(VAR_31, 5);
  VAR_31 += 2;
  *VAR_31++ = 1;
  FUNC_0(VAR_31, 0);
  VAR_31 += 2;
  FUNC_0(VAR_31, 0);
  VAR_31 += 2;

  FUNC_13(VAR_0,
      "TLSv1: Add status_request_v2 extension for OCSP stapling");

  FUNC_0(VAR_31, VAR_15);
  VAR_31 += 2;

  FUNC_0(VAR_31, 7);
  VAR_31 += 2;
  FUNC_0(VAR_31, 5);
  VAR_31 += 2;


  *VAR_31++ = 2;

  FUNC_0(VAR_31, 0);
  VAR_31 += 2;
  FUNC_0(VAR_31, 0);
  VAR_31 += 2;
 }

 if (VAR_31 == VAR_38 + 2)
  VAR_31 -= 2;
 else
  FUNC_0(VAR_38, VAR_31 - VAR_38 - 2);

 FUNC_1(VAR_32, VAR_31 - VAR_32 - 3);
 FUNC_9(&VAR_27->verify, VAR_33, VAR_31 - VAR_33);

 if (FUNC_11(&VAR_27->rl, VAR_12,
         VAR_34, VAR_30 - VAR_34, VAR_33, VAR_31 - VAR_33,
         VAR_28) < 0) {
  FUNC_13(VAR_0, "TLSv1: Failed to create TLS record");
  FUNC_8(VAR_27, VAR_6,
     VAR_5);
  FUNC_3(VAR_29);
  return ((void*)0);
 }

 VAR_27->state = VAR_4;

 return VAR_29;
}
