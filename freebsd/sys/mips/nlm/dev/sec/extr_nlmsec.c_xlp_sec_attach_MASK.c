
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xlp_sec_softc {scalar_t__ sc_cid; int sec_vc_start; int sec_vc_end; int sc_dev; } ;
struct xlp_sec_session {int dummy; } ;
typedef int device_t ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct xlp_sec_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (struct xlp_sec_softc*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct xlp_sec_softc *VAR_14 = FUNC_2(VAR_13);
 uint64_t VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_14->sc_dev = VAR_13;

 VAR_19 = FUNC_5(FUNC_11(VAR_13));
 VAR_18 = FUNC_9(VAR_19, VAR_9, 250);
 if (VAR_12)
  FUNC_3(VAR_13, "SAE Freq: %dMHz\n", VAR_18);
 if(FUNC_10(VAR_13) == VAR_11) {
  FUNC_4(VAR_13, "XLP Security Accelerator");
  VAR_14->sc_cid = FUNC_0(VAR_13,
      sizeof(struct xlp_sec_session), VAR_0);
  if (VAR_14->sc_cid < 0) {
   FUNC_12("xlp_sec - error : could not get the driver"
       " id\n");
   goto error_exit;
  }
  if (FUNC_1(VAR_14->sc_cid, VAR_4, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_DES_CBC\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_1, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_3DES_CBC\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_2, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_AES_CBC\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_3, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_ARC4\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_5, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_MD5\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_7, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_SHA1\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_6, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_MD5_HMAC\n");

  if (FUNC_1(VAR_14->sc_cid, VAR_8, 0, 0) != 0)
   FUNC_12("register failed for CRYPTO_SHA1_HMAC\n");

  VAR_15 = FUNC_6(VAR_19);
  VAR_16 = FUNC_7(VAR_15);
  VAR_17 = FUNC_8(VAR_15);
  VAR_14->sec_vc_start = VAR_16;
  VAR_14->sec_vc_end = VAR_16 + VAR_17 - 1;
 }

 if (FUNC_13(VAR_14) != 0)
  goto error_exit;
 if (VAR_12)
  FUNC_3(VAR_13, "SEC Initialization complete!\n");
 return (0);

error_exit:
 return (VAR_10);

}
