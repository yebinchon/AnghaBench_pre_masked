
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_7__ {TYPE_1__* pub_key; int alg; } ;
struct TYPE_6__ {unsigned char* data; size_t length; int flags; } ;
typedef int EVP_PKEY ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_2__ DPP_BOOTSTRAPPING_KEY ;
typedef int BN_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 size_t FUNC_8 (int const*,int const*,int ,unsigned char*,size_t,int *) ;
 int VAR_1 ;
 int * FUNC_9 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (unsigned char*) ;
 unsigned char* FUNC_12 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ,scalar_t__,int ,void*) ;
 int FUNC_14 (char*,int const*,int const*) ;
 int FUNC_15 (TYPE_2__*,unsigned char**) ;
 int FUNC_16 (int ,char*) ;
 struct wpabuf* FUNC_17 (unsigned char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_18(EVP_PKEY *VAR_5)
{
 unsigned char *VAR_6 = ((void*)0);
 int VAR_7;
 EC_KEY *VAR_8;
 struct wpabuf *VAR_9 = ((void*)0);
 size_t VAR_10;
 const EC_GROUP *VAR_11;
 const EC_POINT *VAR_12;
 BN_CTX *VAR_13;
 DPP_BOOTSTRAPPING_KEY *VAR_14 = ((void*)0);
 int VAR_15;

 VAR_13 = FUNC_1();
 VAR_8 = FUNC_9(VAR_5);
 if (!VAR_13 || !VAR_8)
  goto fail;

 VAR_11 = FUNC_6(VAR_8);
 VAR_12 = FUNC_7(VAR_8);
 if (!VAR_11 || !VAR_12)
  goto fail;
 FUNC_14("DPP: bootstrap public key", VAR_11, VAR_12);
 VAR_15 = FUNC_4(VAR_11);

 VAR_14 = FUNC_3();
 if (!VAR_14 ||
     FUNC_13(VAR_14->alg, FUNC_10(VAR_1),
       VAR_4, (void *) FUNC_10(VAR_15)) != 1)
  goto fail;

 VAR_10 = FUNC_8(VAR_11, VAR_12, VAR_3,
     ((void*)0), 0, VAR_13);
 if (VAR_10 == 0)
  goto fail;

 VAR_6 = FUNC_12(VAR_10);
 if (!VAR_6)
  goto fail;
 VAR_10 = FUNC_8(VAR_11, VAR_12, VAR_3,
     VAR_6, VAR_10, VAR_13);

 FUNC_11(VAR_14->pub_key->data);
 VAR_14->pub_key->data = VAR_6;
 VAR_6 = ((void*)0);
 VAR_14->pub_key->length = VAR_10;

 VAR_14->pub_key->flags &= ~(VAR_0 | 0x07);
 VAR_14->pub_key->flags |= VAR_0;

 VAR_7 = FUNC_15(VAR_14, &VAR_6);
 if (VAR_7 <= 0) {
  FUNC_16(VAR_2,
      "DDP: Failed to build DER encoded public key");
  goto fail;
 }

 VAR_9 = FUNC_17(VAR_6, VAR_7);
fail:
 FUNC_2(VAR_14);
 FUNC_11(VAR_6);
 FUNC_5(VAR_8);
 FUNC_0(VAR_13);
 return VAR_9;
}
