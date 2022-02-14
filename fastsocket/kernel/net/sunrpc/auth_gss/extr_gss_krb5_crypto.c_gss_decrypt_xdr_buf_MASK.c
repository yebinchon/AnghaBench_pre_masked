
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {int len; } ;
struct TYPE_2__ {scalar_t__ flags; int info; struct crypto_blkcipher* tfm; } ;
struct decryptor_desc {int frags; scalar_t__ fraglen; scalar_t__ fragno; TYPE_1__ desc; int iv; } ;
struct crypto_blkcipher {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct xdr_buf*,int,int,int ,struct decryptor_desc*) ;

int
FUNC_5(struct crypto_blkcipher *VAR_1, struct xdr_buf *VAR_2,
      int VAR_3)
{
 struct decryptor_desc VAR_4;


 FUNC_0((VAR_2->len - VAR_3) % FUNC_1(VAR_1) != 0);

 FUNC_2(VAR_4.iv, 0, sizeof(VAR_4.iv));
 VAR_4.desc.tfm = VAR_1;
 VAR_4.desc.info = VAR_4.iv;
 VAR_4.desc.flags = 0;
 VAR_4.fragno = 0;
 VAR_4.fraglen = 0;

 FUNC_3(VAR_4.frags, 4);

 return FUNC_4(VAR_2, VAR_3, VAR_2->len - VAR_3, VAR_0, &VAR_4);
}
