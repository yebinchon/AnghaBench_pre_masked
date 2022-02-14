
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct krb5_ctx {scalar_t__ enctype; struct crypto_blkcipher* seq; } ;
struct crypto_blkcipher {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct crypto_blkcipher*,unsigned char*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct krb5_ctx*,unsigned char*,unsigned char*,int*,unsigned char*) ;

s32
FUNC_3(struct krb5_ctx *VAR_2,
        unsigned char *VAR_3,
        unsigned char *VAR_4,
        int *VAR_5, u32 *VAR_6)
{
 s32 VAR_7;
 unsigned char VAR_8[8];
 struct crypto_blkcipher *VAR_9 = VAR_2->seq;

 FUNC_0("RPC:       krb5_get_seq_num:\n");

 if (VAR_2->enctype == VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);

 if ((VAR_7 = FUNC_1(VAR_9, VAR_3, VAR_4, VAR_8, 8)))
  return VAR_7;

 if ((VAR_8[4] != VAR_8[5]) || (VAR_8[4] != VAR_8[6])
       || (VAR_8[4] != VAR_8[7]))
  return (s32)VAR_1;

 *VAR_5 = VAR_8[4];

 *VAR_6 = ((VAR_8[0]) |
     (VAR_8[1] << 8) | (VAR_8[2] << 16) | (VAR_8[3] << 24));

 return (0);
}
