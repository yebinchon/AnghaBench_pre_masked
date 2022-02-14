
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xdr_buf {int len; struct page** pages; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {int * info; struct crypto_blkcipher* tfm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_3 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_4 (struct xdr_buf*,int,int *,int) ;
 int FUNC_5 (struct scatterlist*,int *,int) ;
 int FUNC_6 (struct xdr_buf*,int,int *,int) ;

__attribute__((used)) static u32
FUNC_7(struct crypto_blkcipher *VAR_0, struct xdr_buf *VAR_1,
     u32 VAR_2, u8 *VAR_3, struct page **VAR_4, int VAR_5)
{
 u32 VAR_6;
 struct scatterlist VAR_7[1];
 struct blkcipher_desc VAR_8 = { .tfm = VAR_0, .info = VAR_3 };
 u8 VAR_9[FUNC_1(VAR_0) * 2];
 struct page **VAR_10;
 u32 VAR_11 = VAR_1->len - VAR_2;

 FUNC_0(VAR_11 > FUNC_1(VAR_0) * 2);






 VAR_10 = VAR_1->pages;
 if (VAR_5)
  VAR_1->pages = VAR_4;

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_9, VAR_11);
 VAR_1->pages = VAR_10;
 if (VAR_6)
  goto out;

 FUNC_5(VAR_7, VAR_9, VAR_11);

 if (VAR_5)
  VAR_6 = FUNC_3(&VAR_8, VAR_7, VAR_7, VAR_11);
 else
  VAR_6 = FUNC_2(&VAR_8, VAR_7, VAR_7, VAR_11);

 if (VAR_6)
  goto out;

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_9, VAR_11);

out:
 return VAR_6;
}
