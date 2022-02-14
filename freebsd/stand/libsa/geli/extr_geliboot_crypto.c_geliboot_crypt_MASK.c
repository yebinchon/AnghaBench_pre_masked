
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct aes_xts_ctx {int key2; int key1; } ;
typedef int keyInstance ;
typedef int cipherInstance ;
typedef int caddr_t ;
struct TYPE_2__ {int (* encrypt ) (int ,int *) ;int (* decrypt ) (int ,int *) ;int (* reinit ) (int ,int *) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int *,int *,size_t,int *) ;
 int FUNC_2 (int *,int *,int *,size_t,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int,size_t,char const*) ;
 int FUNC_5 (int *,int const*,size_t) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

int
FUNC_9(u_int VAR_3, int VAR_4, u_char *VAR_5, size_t VAR_6,
    const u_char *VAR_7, size_t VAR_8, u_char *VAR_9)
{
 keyInstance VAR_10;
 cipherInstance VAR_11;
 struct aes_xts_ctx VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 switch (VAR_3) {
 case 129:
  VAR_15 = FUNC_4(&VAR_10, !VAR_4, VAR_8,
      (const char *)VAR_7);
  if (VAR_15 < 0) {
   FUNC_0("Failed to setup decryption keys: %d\n", VAR_15);
   return (VAR_15);
  }

  VAR_15 = FUNC_3(&VAR_11, VAR_1, VAR_9);
  if (VAR_15 < 0) {
   FUNC_0("Failed to setup IV: %d\n", VAR_15);
   return (VAR_15);
  }

  if (VAR_4 == 0) {

   VAR_16 = FUNC_1(&VAR_11, &VAR_10, VAR_5,
       VAR_6 * 8, VAR_5);
  } else {

   VAR_16 = FUNC_2(&VAR_11, &VAR_10, VAR_5,
       VAR_6 * 8, VAR_5);
  }
  if (VAR_6 != (VAR_16 / 8)) {
   FUNC_0("Failed to decrypt the entire input: "
       "%u != %zu\n", VAR_16, VAR_6);
   return (1);
  }
  break;
 case 128:
  VAR_14 = VAR_8 << 1;
  VAR_13 = &VAR_12;

  FUNC_5(&VAR_13->key1, VAR_7, VAR_14 / 2);
  FUNC_5(&VAR_13->key2, VAR_7 + (VAR_14 / 16), VAR_14 / 2);

  VAR_2.reinit((caddr_t)VAR_13, VAR_9);

  switch (VAR_4) {
  case 0:
   for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17 += VAR_0) {
    VAR_2.decrypt((caddr_t)VAR_13, VAR_5 + VAR_17);
   }
   break;
  case 1:
   for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17 += VAR_0) {
    VAR_2.encrypt((caddr_t)VAR_13, VAR_5 + VAR_17);
   }
   break;
  }
  break;
 default:
  FUNC_0("Unsupported crypto algorithm #%d\n", VAR_3);
  return (1);
 }

 return (0);
}
