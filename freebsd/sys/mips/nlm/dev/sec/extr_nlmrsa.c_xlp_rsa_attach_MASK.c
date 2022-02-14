
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xlp_rsa_softc {scalar_t__ sc_cid; int rsaecc_vc_start; int rsaecc_vc_end; int sc_dev; } ;
struct xlp_rsa_session {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 struct xlp_rsa_softc* FUNC_2 (int ) ;
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
 scalar_t__ FUNC_13 (struct xlp_rsa_softc*,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_6)
{
 struct xlp_rsa_softc *VAR_7 = FUNC_2(VAR_6);
 uint64_t VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_7->sc_dev = VAR_6;

 VAR_12 = FUNC_5(FUNC_11(VAR_6));
 VAR_11 = FUNC_9(VAR_12, VAR_2, 250);
 if (VAR_5)
  FUNC_3(VAR_6, "RSA Freq: %dMHz\n", VAR_11);
 if (FUNC_10(VAR_6) == VAR_4) {
  FUNC_4(VAR_6, "XLP RSA/ECC Accelerator");
  VAR_7->sc_cid = FUNC_0(VAR_6,
      sizeof(struct xlp_rsa_session), VAR_1);
  if (VAR_7->sc_cid < 0) {
   FUNC_12("xlp_rsaecc-err:couldn't get the driver id\n");
   goto error_exit;
  }
  if (FUNC_1(VAR_7->sc_cid, VAR_0, 0) != 0)
   goto error_exit;

  VAR_8 = FUNC_6(VAR_12);
  VAR_9 = FUNC_7(VAR_8);
  VAR_10 = FUNC_8(VAR_8);
  VAR_7->rsaecc_vc_start = VAR_9;
  VAR_7->rsaecc_vc_end = VAR_9 + VAR_10 - 1;
 }
 if (FUNC_13(VAR_7, VAR_12) != 0)
  goto error_exit;
 FUNC_3(VAR_6, "RSA Initialization complete!\n");
 return (0);

error_exit:
 return (VAR_3);
}
