
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int * server_rsa_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int *,int,int *,size_t*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct tlsv1_client*,int ,int ) ;
 scalar_t__ FUNC_4 (struct tlsv1_client*,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int *,size_t) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_client *VAR_5, u8 **VAR_6, u8 *VAR_7)
{
 u8 VAR_8[VAR_4];
 size_t VAR_9;
 int VAR_10;

 if (FUNC_5(VAR_8) < 0 ||
     FUNC_4(VAR_5, VAR_8,
       VAR_4)) {
  FUNC_7(VAR_0, "TLSv1: Failed to derive keys");
  FUNC_3(VAR_5, VAR_3,
     VAR_2);
  return -1;
 }


 if (VAR_5->server_rsa_key == ((void*)0)) {
  FUNC_7(VAR_0, "TLSv1: No server RSA key to "
      "use for encrypting pre-master secret");
  FUNC_3(VAR_5, VAR_3,
     VAR_2);
  return -1;
 }


 *VAR_6 += 2;
 VAR_9 = VAR_7 - *VAR_6;
 VAR_10 = FUNC_1(
  VAR_5->server_rsa_key,
  VAR_8, VAR_4,
  *VAR_6, &VAR_9);
 FUNC_2(VAR_8, 0, VAR_4);
 if (VAR_10 < 0) {
  FUNC_7(VAR_0, "TLSv1: RSA encryption failed");
  FUNC_3(VAR_5, VAR_3,
     VAR_2);
  return -1;
 }
 FUNC_0(*VAR_6 - 2, VAR_9);
 FUNC_6(VAR_1, "TLSv1: Encrypted pre_master_secret",
      *VAR_6, VAR_9);
 *VAR_6 += VAR_9;

 return 0;
}
