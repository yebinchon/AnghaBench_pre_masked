
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pub; int priv; TYPE_3__* hf; int sraw; int sasn1; int msg; } ;
typedef TYPE_1__ ecdsa_kat_vector ;
struct TYPE_7__ {int vtable; } ;
typedef TYPE_2__ br_hash_compat_context ;
typedef int (* br_ecdsa_vrfy ) (int const*,unsigned char*,size_t,scalar_t__,unsigned char*,size_t) ;
typedef size_t (* br_ecdsa_sign ) (int const*,TYPE_3__*,unsigned char*,int ,unsigned char*) ;
typedef int br_ec_impl ;
struct TYPE_8__ {size_t desc; int (* out ) (int *,unsigned char*) ;int (* update ) (int *,int ,int ) ;int (* init ) (int *) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 size_t FUNC_3 (unsigned char*,int ) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,unsigned char*) ;

__attribute__((used)) static void
FUNC_10(const br_ec_impl *VAR_6,
 br_ecdsa_sign VAR_7, br_ecdsa_vrfy VAR_8, int VAR_9)
{
 size_t VAR_10;

 for (VAR_10 = 0;; VAR_10 ++) {
  const ecdsa_kat_vector *VAR_11;
  unsigned char VAR_12[64];
  size_t VAR_13;
  unsigned char VAR_14[150], VAR_15[150];
  size_t VAR_16, VAR_17;
  br_hash_compat_context VAR_18;

  VAR_11 = &VAR_2[VAR_10];
  if (VAR_11->pub == 0) {
   break;
  }
  VAR_11->hf->init(&VAR_18.vtable);
  VAR_11->hf->update(&VAR_18.vtable, VAR_11->msg, FUNC_6(VAR_11->msg));
  VAR_11->hf->out(&VAR_18.vtable, VAR_12);
  VAR_13 = (VAR_11->hf->desc >> VAR_1)
   & VAR_0;
  if (VAR_9) {
   VAR_16 = FUNC_3(VAR_14, VAR_11->sasn1);
  } else {
   VAR_16 = FUNC_3(VAR_14, VAR_11->sraw);
  }

  if (VAR_8(VAR_6, VAR_12, VAR_13,
   VAR_11->pub, VAR_14, VAR_16) != 1)
  {
   FUNC_2(VAR_4, "ECDSA KAT verify failed (1)\n");
   FUNC_0(VAR_3);
  }
  VAR_12[0] ^= 0x80;
  if (VAR_8(VAR_6, VAR_12, VAR_13,
   VAR_11->pub, VAR_14, VAR_16) != 0)
  {
   FUNC_2(VAR_4, "ECDSA KAT verify shoud have failed\n");
   FUNC_0(VAR_3);
  }
  VAR_12[0] ^= 0x80;
  if (VAR_8(VAR_6, VAR_12, VAR_13,
   VAR_11->pub, VAR_14, VAR_16) != 1)
  {
   FUNC_2(VAR_4, "ECDSA KAT verify failed (2)\n");
   FUNC_0(VAR_3);
  }

  VAR_17 = VAR_7(VAR_6, VAR_11->hf, VAR_12, VAR_11->priv, VAR_15);
  if (VAR_17 == 0) {
   FUNC_2(VAR_4, "ECDSA KAT sign failed\n");
   FUNC_0(VAR_3);
  }
  if (VAR_17 != VAR_16 || FUNC_4(VAR_14, VAR_15, VAR_16) != 0) {
   FUNC_2(VAR_4, "ECDSA KAT wrong signature value\n");
   FUNC_0(VAR_3);
  }

  FUNC_5(".");
  FUNC_1(VAR_5);
 }
}
