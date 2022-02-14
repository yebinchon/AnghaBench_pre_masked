
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct krb5_ctx {scalar_t__ enctype; } ;
struct crypto_blkcipher {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct crypto_blkcipher*,unsigned char*,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (struct krb5_ctx*,int,int,unsigned char*,unsigned char*) ;

s32
FUNC_2(struct krb5_ctx *VAR_1,
  struct crypto_blkcipher *VAR_2,
  int VAR_3,
  u32 VAR_4,
  unsigned char *VAR_5, unsigned char *VAR_6)
{
 unsigned char VAR_7[8];

 if (VAR_1->enctype == VAR_0)
  return FUNC_1(VAR_1, VAR_3, VAR_4,
          VAR_5, VAR_6);

 VAR_7[0] = (unsigned char) (VAR_4 & 0xff);
 VAR_7[1] = (unsigned char) ((VAR_4 >> 8) & 0xff);
 VAR_7[2] = (unsigned char) ((VAR_4 >> 16) & 0xff);
 VAR_7[3] = (unsigned char) ((VAR_4 >> 24) & 0xff);

 VAR_7[4] = VAR_3;
 VAR_7[5] = VAR_3;
 VAR_7[6] = VAR_3;
 VAR_7[7] = VAR_3;

 return FUNC_0(VAR_2, VAR_5, VAR_7, VAR_6, 8);
}
