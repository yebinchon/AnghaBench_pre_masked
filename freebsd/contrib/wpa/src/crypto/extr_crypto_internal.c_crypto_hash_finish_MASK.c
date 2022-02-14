
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sha256; int sha1; int md5; int sha512; int sha384; } ;
struct crypto_hash {int alg; TYPE_1__ u; int key_len; int key; } ;
typedef int k_pad ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct crypto_hash*) ;
 int FUNC_8 (int*,int ,int ) ;
 int FUNC_9 (int*,int ,int ) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*,int) ;
 int FUNC_13 (int *,int*) ;
 int FUNC_14 (int *,int*) ;

int FUNC_15(struct crypto_hash *VAR_0, u8 *VAR_1, size_t *VAR_2)
{
 u8 VAR_3[64];
 size_t VAR_4;

 if (VAR_0 == ((void*)0))
  return -2;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  FUNC_7(VAR_0);
  return 0;
 }

 switch (VAR_0->alg) {
 case 132:
  if (*VAR_2 < 16) {
   *VAR_2 = 16;
   FUNC_7(VAR_0);
   return -1;
  }
  *VAR_2 = 16;
  FUNC_0(VAR_1, &VAR_0->u.md5);
  break;
 case 131:
  if (*VAR_2 < 20) {
   *VAR_2 = 20;
   FUNC_7(VAR_0);
   return -1;
  }
  *VAR_2 = 20;
  FUNC_3(VAR_1, &VAR_0->u.sha1);
  break;
 case 135:
  if (*VAR_2 < 16) {
   *VAR_2 = 16;
   FUNC_7(VAR_0);
   return -1;
  }
  *VAR_2 = 16;

  FUNC_0(VAR_1, &VAR_0->u.md5);

  FUNC_8(VAR_3, VAR_0->key, VAR_0->key_len);
  FUNC_9(VAR_3 + VAR_0->key_len, 0,
     sizeof(VAR_3) - VAR_0->key_len);
  for (VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++)
   VAR_3[VAR_4] ^= 0x5c;
  FUNC_1(&VAR_0->u.md5);
  FUNC_2(&VAR_0->u.md5, VAR_3, sizeof(VAR_3));
  FUNC_2(&VAR_0->u.md5, VAR_1, 16);
  FUNC_0(VAR_1, &VAR_0->u.md5);
  break;
 case 134:
  if (*VAR_2 < 20) {
   *VAR_2 = 20;
   FUNC_7(VAR_0);
   return -1;
  }
  *VAR_2 = 20;

  FUNC_3(VAR_1, &VAR_0->u.sha1);

  FUNC_8(VAR_3, VAR_0->key, VAR_0->key_len);
  FUNC_9(VAR_3 + VAR_0->key_len, 0,
     sizeof(VAR_3) - VAR_0->key_len);
  for (VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++)
   VAR_3[VAR_4] ^= 0x5c;
  FUNC_4(&VAR_0->u.sha1);
  FUNC_5(&VAR_0->u.sha1, VAR_3, sizeof(VAR_3));
  FUNC_5(&VAR_0->u.sha1, VAR_1, 20);
  FUNC_3(VAR_1, &VAR_0->u.sha1);
  break;
 default:
  FUNC_7(VAR_0);
  return -1;
 }

 FUNC_7(VAR_0);

 if (FUNC_6())
  return -1;

 return 0;
}
