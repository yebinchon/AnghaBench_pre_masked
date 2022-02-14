
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {int len; } ;
struct page {int dummy; } ;
struct TYPE_2__ {scalar_t__ flags; int info; struct crypto_blkcipher* tfm; } ;
struct encryptor_desc {int pos; int outfrags; int infrags; scalar_t__ fraglen; scalar_t__ fragno; struct page** pages; struct xdr_buf* outbuf; TYPE_1__ desc; int iv; } ;
struct crypto_blkcipher {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct xdr_buf*,int,int,int ,struct encryptor_desc*) ;

int
FUNC_5(struct crypto_blkcipher *VAR_1, struct xdr_buf *VAR_2,
      int VAR_3, struct page **VAR_4)
{
 int VAR_5;
 struct encryptor_desc VAR_6;

 FUNC_0((VAR_2->len - VAR_3) % FUNC_1(VAR_1) != 0);

 FUNC_2(VAR_6.iv, 0, sizeof(VAR_6.iv));
 VAR_6.desc.tfm = VAR_1;
 VAR_6.desc.info = VAR_6.iv;
 VAR_6.desc.flags = 0;
 VAR_6.pos = VAR_3;
 VAR_6.outbuf = VAR_2;
 VAR_6.pages = VAR_4;
 VAR_6.fragno = 0;
 VAR_6.fraglen = 0;

 FUNC_3(VAR_6.infrags, 4);
 FUNC_3(VAR_6.outfrags, 4);

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_2->len - VAR_3, VAR_0, &VAR_6);
 return VAR_5;
}
