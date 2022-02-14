
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpp_authentication {int secret_len; int Lx_len; int Lx; TYPE_2__* own_bi; int peer_protocol_key; TYPE_1__* peer_bi; } ;
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
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int const*,int *,int const*,int const*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const*,int *,int *,int *,int *) ;
 int FUNC_11 (int const*,int *,int *,int *,int const*,int *) ;
 int * FUNC_12 (int const*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 () ;
 int * FUNC_15 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int ,char*,int ,int ) ;
 int FUNC_18 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_19(struct dpp_authentication *VAR_2)
{
 const EC_GROUP *VAR_3;
 EC_POINT *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 EC_KEY *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 const EC_POINT *VAR_9, *VAR_10;
 BN_CTX *VAR_11;
 BIGNUM *VAR_12;
 const BIGNUM *VAR_13;
 int VAR_14 = -1;



 VAR_11 = FUNC_1();
 VAR_12 = FUNC_3();
 if (!VAR_11 || !VAR_12)
  goto fail;
 VAR_7 = FUNC_15(VAR_2->peer_bi->pubkey);
 VAR_8 = FUNC_15(VAR_2->peer_protocol_key);
 if (!VAR_7 || !VAR_8)
  goto fail;
 VAR_9 = FUNC_7(VAR_7);
 VAR_10 = FUNC_7(VAR_8);

 VAR_6 = FUNC_15(VAR_2->own_bi->pubkey);
 if (!VAR_6)
  goto fail;
 VAR_3 = FUNC_5(VAR_6);
 VAR_13 = FUNC_6(VAR_6);
 if (!VAR_3 || !VAR_13)
  goto fail;
 VAR_5 = FUNC_12(VAR_3);
 VAR_4 = FUNC_12(VAR_3);
 if (!VAR_5 || !VAR_4 ||
     FUNC_8(VAR_3, VAR_5, VAR_9, VAR_10, VAR_11) != 1 ||
     FUNC_11(VAR_3, VAR_4, ((void*)0), VAR_5, VAR_13, VAR_11) != 1 ||
     FUNC_10(VAR_3, VAR_4, VAR_12, ((void*)0),
      VAR_11) != 1) {
  FUNC_18(VAR_1,
      "OpenSSL: failed: %s",
      FUNC_13(FUNC_14(), ((void*)0)));
  goto fail;
 }

 if (FUNC_16(VAR_12, VAR_2->Lx, VAR_2->secret_len) < 0)
  goto fail;
 FUNC_17(VAR_0, "DPP: L.x", VAR_2->Lx, VAR_2->secret_len);
 VAR_2->Lx_len = VAR_2->secret_len;
 VAR_14 = 0;
fail:
 FUNC_9(VAR_4);
 FUNC_9(VAR_5);
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 FUNC_4(VAR_8);
 FUNC_2(VAR_12);
 FUNC_0(VAR_11);
 return VAR_14;
}
