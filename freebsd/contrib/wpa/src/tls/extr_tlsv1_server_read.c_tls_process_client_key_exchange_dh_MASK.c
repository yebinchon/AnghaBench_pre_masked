
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tlsv1_server {size_t dh_secret_len; int * dh_secret; TYPE_1__* cred; } ;
struct TYPE_2__ {int * dh_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int,int *,size_t,int const*,size_t,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (struct tlsv1_server*,int ,int ) ;
 int FUNC_6 (struct tlsv1_server*,int *,size_t) ;
 int FUNC_7 (struct tlsv1_server*,int const**,size_t*) ;
 int FUNC_8 (struct tlsv1_server*,char*,...) ;
 int FUNC_9 (int ,char*,int const*,int) ;
 int FUNC_10 (int ,char*,int *,size_t) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(
 struct tlsv1_server *VAR_5, const u8 *VAR_6, const u8 *VAR_7)
{
 const u8 *VAR_8;
 u16 VAR_9;
 u8 *VAR_10;
 size_t VAR_11;
 int VAR_12;
 const u8 *VAR_13;
 size_t VAR_14;
 FUNC_8(VAR_5, "ClientDiffieHellmanPublic received");
 FUNC_9(VAR_1, "TLSv1: ClientDiffieHellmanPublic",
      VAR_6, VAR_7 - VAR_6);

 if (VAR_7 == VAR_6) {
  FUNC_11(VAR_0, "TLSv1: Implicit public value encoding "
      "not supported");
  FUNC_5(VAR_5, VAR_4,
       VAR_3);
  return -1;
 }

 if (VAR_7 - VAR_6 < 3) {
  FUNC_8(VAR_5, "Invalid client public value length");
  FUNC_5(VAR_5, VAR_4,
       VAR_2);
  return -1;
 }

 VAR_9 = FUNC_0(VAR_6);
 VAR_8 = VAR_6 + 2;

 if (VAR_9 > VAR_7 - VAR_8) {
  FUNC_8(VAR_5, "Client public value overflow (length %d)",
     VAR_9);
  FUNC_5(VAR_5, VAR_4,
       VAR_2);
  return -1;
 }

 FUNC_9(VAR_0, "TLSv1: DH Yc (client's public value)",
      VAR_8, VAR_9);

 if (VAR_5->cred == ((void*)0) || VAR_5->cred->dh_p == ((void*)0) ||
     VAR_5->dh_secret == ((void*)0)) {
  FUNC_11(VAR_0, "TLSv1: No DH parameters available");
  FUNC_5(VAR_5, VAR_4,
       VAR_3);
  return -1;
 }

 FUNC_7(VAR_5, &VAR_13, &VAR_14);

 VAR_11 = VAR_14;
 VAR_10 = FUNC_3(VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_11(VAR_0, "TLSv1: Could not allocate memory for "
      "DH");
  FUNC_5(VAR_5, VAR_4,
       VAR_3);
  return -1;
 }


 if (FUNC_1(VAR_8, VAR_9, VAR_5->dh_secret,
      VAR_5->dh_secret_len, VAR_13, VAR_14,
      VAR_10, &VAR_11)) {
  FUNC_2(VAR_10);
  FUNC_5(VAR_5, VAR_4,
       VAR_3);
  return -1;
 }
 FUNC_10(VAR_0, "TLSv1: Shared secret from DH key exchange",
   VAR_10, VAR_11);

 FUNC_4(VAR_5->dh_secret, 0, VAR_5->dh_secret_len);
 FUNC_2(VAR_5->dh_secret);
 VAR_5->dh_secret = ((void*)0);

 VAR_12 = FUNC_6(VAR_5, VAR_10, VAR_11);


 FUNC_4(VAR_10, 0, VAR_11);
 FUNC_2(VAR_10);

 if (VAR_12) {
  FUNC_11(VAR_0, "TLSv1: Failed to derive keys");
  FUNC_5(VAR_5, VAR_4,
       VAR_3);
  return -1;
 }

 return 0;
}
