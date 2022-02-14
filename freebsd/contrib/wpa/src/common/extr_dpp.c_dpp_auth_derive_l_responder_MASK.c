
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpp_authentication {int secret_len; int Lx_len; int Lx; int own_protocol_key; TYPE_2__* own_bi; TYPE_1__* peer_bi; } ;
struct TYPE_4__ {int pubkey; } ;
struct TYPE_3__ {int pubkey; } ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int const*,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int const*,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const*,int *,int *,int *,int *) ;
 int FUNC_13 (int const*,int *,int *,int const*,int *,int *) ;
 int * FUNC_14 (int const*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 () ;
 int * FUNC_17 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int ,char*,int ,int ) ;
 int FUNC_20 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_21(struct dpp_authentication *VAR_2)
{
 const EC_GROUP *VAR_3;
 EC_POINT *VAR_4 = ((void*)0);
 EC_KEY *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 const EC_POINT *VAR_8;
 BN_CTX *VAR_9;
 BIGNUM *VAR_10, *VAR_11, *VAR_12;
 const BIGNUM *VAR_13, *VAR_14;
 int VAR_15 = -1;



 VAR_9 = FUNC_1();
 VAR_11 = FUNC_5();
 VAR_12 = FUNC_5();
 VAR_10 = FUNC_5();
 if (!VAR_9 || !VAR_11 || !VAR_12 || !VAR_10)
  goto fail;
 VAR_5 = FUNC_17(VAR_2->peer_bi->pubkey);
 if (!VAR_5)
  goto fail;
 VAR_8 = FUNC_10(VAR_5);
 VAR_3 = FUNC_8(VAR_5);
 if (!VAR_3)
  goto fail;

 VAR_6 = FUNC_17(VAR_2->own_bi->pubkey);
 VAR_7 = FUNC_17(VAR_2->own_protocol_key);
 if (!VAR_6 || !VAR_7)
  goto fail;
 VAR_13 = FUNC_9(VAR_6);
 VAR_14 = FUNC_9(VAR_7);
 if (!VAR_13 || !VAR_14)
  goto fail;
 if (FUNC_6(VAR_3, VAR_12, VAR_9) != 1 ||
     FUNC_4(VAR_11, VAR_13, VAR_14, VAR_12, VAR_9) != 1)
  goto fail;
 VAR_4 = FUNC_14(VAR_3);
 if (!VAR_4 ||
     FUNC_13(VAR_3, VAR_4, ((void*)0), VAR_8, VAR_11, VAR_9) != 1 ||
     FUNC_12(VAR_3, VAR_4, VAR_10, ((void*)0),
      VAR_9) != 1) {
  FUNC_20(VAR_1,
      "OpenSSL: failed: %s",
      FUNC_15(FUNC_16(), ((void*)0)));
  goto fail;
 }

 if (FUNC_18(VAR_10, VAR_2->Lx, VAR_2->secret_len) < 0)
  goto fail;
 FUNC_19(VAR_0, "DPP: L.x", VAR_2->Lx, VAR_2->secret_len);
 VAR_2->Lx_len = VAR_2->secret_len;
 VAR_15 = 0;
fail:
 FUNC_11(VAR_4);
 FUNC_7(VAR_5);
 FUNC_7(VAR_6);
 FUNC_7(VAR_7);
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 FUNC_3(VAR_12);
 FUNC_0(VAR_9);
 return VAR_15;
}
