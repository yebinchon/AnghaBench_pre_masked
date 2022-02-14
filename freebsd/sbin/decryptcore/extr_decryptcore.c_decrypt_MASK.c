
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kerneldumpkey {int kdk_encryptedkeysize; int kdk_encryption; int * kdk_iv; int kdk_encryptedkey; } ;
typedef scalar_t__ ssize_t ;
typedef int pid_t ;
typedef int key ;
typedef int buf ;
typedef int RSA ;
typedef int FILE ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int *,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int*,int *,scalar_t__) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_10 (int *,int **,int *,int *) ;
 int FUNC_11 (int) ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int,int ,int *,int *,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (char const*,char*) ;
 int FUNC_22 () ;
 int FUNC_23 (int *,int *,int) ;
 int FUNC_24 (int *,int ,int) ;
 int FUNC_25 (char const*,int ) ;
 int FUNC_26 (int ,char*,...) ;
 int FUNC_27 (char*,...) ;
 scalar_t__ FUNC_28 (int,int *,int) ;
 struct kerneldumpkey* FUNC_29 (int) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (int,int *,int) ;

__attribute__((used)) static bool
FUNC_32(int VAR_5, const char *VAR_6, const char *VAR_7,
    const char *VAR_8)
{
 uint8_t VAR_9[VAR_0], VAR_10[VAR_1],
     VAR_11[4 * 4];
 EVP_CIPHER_CTX *VAR_12;
 const EVP_CIPHER *VAR_13;
 FILE *VAR_14;
 struct kerneldumpkey *VAR_15;
 RSA *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 ssize_t VAR_21;
 pid_t VAR_22;

 FUNC_11(VAR_5 >= 0);
 FUNC_11(VAR_6 != ((void*)0));
 FUNC_11(VAR_7 != ((void*)0));
 FUNC_11(VAR_8 != ((void*)0));

 VAR_12 = ((void*)0);
 VAR_16 = ((void*)0);





 VAR_22 = FUNC_22();
 if (VAR_22 == -1) {
  FUNC_26(VAR_2, "Unable to create child process");
  FUNC_17(VAR_5);
  return (0);
 }

 if (VAR_22 > 0) {
  FUNC_17(VAR_5);
  return (FUNC_30(VAR_22) == 0);
 }

 VAR_18 = FUNC_25(VAR_7, VAR_3);
 if (VAR_18 == -1) {
  FUNC_26(VAR_2, "Unable to open %s", VAR_7);
  goto failed;
 }
 VAR_17 = FUNC_25(VAR_8, VAR_3);
 if (VAR_17 == -1) {
  FUNC_26(VAR_2, "Unable to open %s", VAR_8);
  goto failed;
 }
 VAR_14 = FUNC_21(VAR_6, "r");
 if (VAR_14 == ((void*)0)) {
  FUNC_26(VAR_2, "Unable to open %s", VAR_6);
  goto failed;
 }

 if (FUNC_16() < 0) {
  FUNC_26(VAR_2, "Unable to enter capability mode");
  goto failed;
 }

 VAR_16 = FUNC_13();
 if (VAR_16 == ((void*)0)) {
  FUNC_27("Unable to allocate an RSA structure: %s",
      FUNC_0(FUNC_1(), ((void*)0)));
  goto failed;
 }
 VAR_12 = FUNC_3();
 if (VAR_12 == ((void*)0))
  goto failed;

 VAR_15 = FUNC_29(VAR_18);
 FUNC_17(VAR_18);
 if (VAR_15 == ((void*)0))
  goto failed;

 VAR_16 = FUNC_10(VAR_14, &VAR_16, ((void*)0), ((void*)0));
 FUNC_20(VAR_14);
 if (VAR_16 == ((void*)0)) {
  FUNC_27("Unable to read data from %s.", VAR_6);
  goto failed;
 }

 VAR_20 = FUNC_15(VAR_16);
 if (VAR_20 != (int)VAR_15->kdk_encryptedkeysize) {
  FUNC_27("RSA modulus size mismatch: equals %db and should be %ub.",
      8 * VAR_20, 8 * VAR_15->kdk_encryptedkeysize);
  goto failed;
 }

 switch (VAR_15->kdk_encryption) {
 case 129:
  VAR_13 = FUNC_8();
  break;
 case 128:
  VAR_13 = FUNC_9();
  break;
 default:
  FUNC_27("Invalid encryption algorithm.");
  goto failed;
 }

 if (FUNC_14(VAR_15->kdk_encryptedkeysize,
     VAR_15->kdk_encryptedkey, VAR_10, VAR_16,
     VAR_4) != sizeof(VAR_10)) {
  FUNC_27("Unable to decrypt key: %s",
      FUNC_0(FUNC_1(), ((void*)0)));
  goto failed;
 }
 FUNC_12(VAR_16);
 VAR_16 = ((void*)0);

 if (VAR_15->kdk_encryption == 128) {
  FUNC_24(VAR_11, 0, 4 * 2);



  FUNC_23(&VAR_11[4 * 2], VAR_15->kdk_iv, 4 * 2);
  FUNC_6(VAR_12, VAR_13, ((void*)0), VAR_10, VAR_11);
 } else
  FUNC_6(VAR_12, VAR_13, ((void*)0), VAR_10, VAR_15->kdk_iv);
 FUNC_4(VAR_12, 0);

 FUNC_19(VAR_10, sizeof(VAR_10));

 do {
  VAR_21 = FUNC_28(VAR_17, VAR_9, sizeof(VAR_9));
  if (VAR_21 < 0) {
   FUNC_26(VAR_2, "Unable to read data from %s",
       VAR_8);
   goto failed;
  }

  if (VAR_21 > 0) {
   if (FUNC_7(VAR_12, VAR_9, &VAR_19, VAR_9,
       VAR_21) == 0) {
    FUNC_27("Unable to decrypt core.");
    goto failed;
   }
  } else {
   if (FUNC_5(VAR_12, VAR_9, &VAR_19) == 0) {
    FUNC_27("Unable to decrypt core.");
    goto failed;
   }
  }

  if (VAR_19 > 0 && FUNC_31(VAR_5, VAR_9, VAR_19) != VAR_19) {
   FUNC_26(VAR_2, "Unable to write core");
   goto failed;
  }
 } while (VAR_21 > 0);

 FUNC_19(VAR_9, sizeof(VAR_9));
 FUNC_2(VAR_12);
 FUNC_18(0);
failed:
 FUNC_19(VAR_10, sizeof(VAR_10));
 FUNC_19(VAR_9, sizeof(VAR_9));
 FUNC_12(VAR_16);
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12);
 FUNC_18(1);
}
