
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ br_rsa_public ;
typedef scalar_t__ br_rsa_pss_vrfy ;
typedef scalar_t__ br_rsa_pss_sign ;
typedef scalar_t__ br_rsa_private ;
typedef scalar_t__ br_rsa_pkcs1_vrfy ;
typedef scalar_t__ br_rsa_pkcs1_sign ;
typedef scalar_t__ br_rsa_oaep_encrypt ;
typedef scalar_t__ br_rsa_oaep_decrypt ;
typedef scalar_t__ br_rsa_keygen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 int VAR_4 ;
 int FUNC_12 (char*,scalar_t__,scalar_t__) ;
 int FUNC_13 (char*,scalar_t__,scalar_t__) ;
 int FUNC_14 (char*,scalar_t__,scalar_t__) ;
 int FUNC_15 (char*,scalar_t__,int *,int *,int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_17(void)
{
 br_rsa_public VAR_5;
 br_rsa_private VAR_6;
 br_rsa_pkcs1_sign VAR_7;
 br_rsa_pkcs1_vrfy VAR_8;
 br_rsa_pss_sign VAR_9;
 br_rsa_pss_vrfy VAR_10;
 br_rsa_oaep_encrypt VAR_11;
 br_rsa_oaep_decrypt VAR_12;
 br_rsa_keygen VAR_13;

 VAR_5 = FUNC_8();
 VAR_6 = FUNC_5();
 VAR_7 = FUNC_3();
 VAR_8 = FUNC_4();
 VAR_9 = FUNC_6();
 VAR_10 = FUNC_7();
 VAR_11 = FUNC_2();
 VAR_12 = FUNC_1();
 VAR_13 = FUNC_0();
 if (VAR_5) {
  if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9 || !VAR_10
   || !VAR_11 || !VAR_12 || !VAR_13)
  {
   FUNC_10(VAR_4, "Inconsistent i62 availability\n");
   FUNC_9(VAR_0);
  }
  FUNC_14("RSA i62 core", VAR_5, VAR_6);
  FUNC_16("RSA i62 sign", VAR_6, VAR_7, VAR_8);
  FUNC_12("RSA i62 OAEP", VAR_11, VAR_12);
  FUNC_13("RSA i62 PSS", VAR_9, VAR_10);
  FUNC_15("RSA i62 keygen", VAR_13,
   &VAR_1, &VAR_3,
   &VAR_2, VAR_5,
   VAR_7, VAR_8);
 } else {
  if (VAR_6 || VAR_7 || VAR_8 || VAR_9 || VAR_10
   || VAR_11 || VAR_12 || VAR_13)
  {
   FUNC_10(VAR_4, "Inconsistent i62 availability\n");
   FUNC_9(VAR_0);
  }
  FUNC_11("Test RSA i62: UNAVAILABLE\n");
 }
}
