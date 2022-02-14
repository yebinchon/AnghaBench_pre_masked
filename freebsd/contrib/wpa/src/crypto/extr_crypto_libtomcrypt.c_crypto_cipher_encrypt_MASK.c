
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_4__ {size_t used_bytes; int keylen; int key; } ;
struct TYPE_3__ {int cbc; TYPE_2__ rc4; } ;
struct crypto_cipher {TYPE_1__ u; scalar_t__ rc4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int const*,size_t,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (int ,int ,size_t,int const*,size_t) ;
 int FUNC_4 (int ,char*,int ) ;

int FUNC_5(struct crypto_cipher *VAR_2, const u8 *VAR_3,
     u8 *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_2->rc4) {
  if (VAR_3 != VAR_4)
   FUNC_2(VAR_4, VAR_3, VAR_5);
  FUNC_3(VAR_2->u.rc4.key, VAR_2->u.rc4.keylen,
    VAR_2->u.rc4.used_bytes, VAR_4, VAR_5);
  VAR_2->u.rc4.used_bytes += VAR_5;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_2->u.cbc);
 if (VAR_6 != VAR_0) {
  FUNC_4(VAR_1, "LibTomCrypt: CBC encryption "
      "failed: %s", FUNC_1(VAR_6));
  return -1;
 }
 return 0;
}
