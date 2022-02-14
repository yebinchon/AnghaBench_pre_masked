
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int page_len; int page_base; TYPE_1__* head; } ;
struct scatterlist {int length; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int tfm; } ;
struct encryptor_desc {int fraglen; int fragno; int pos; int * infrags; int * outfrags; TYPE_2__ desc; struct page** pages; struct xdr_buf* outbuf; } ;
struct TYPE_3__ {int iov_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int) ;
 int FUNC_3 (int *,struct page*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (int *,struct page*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct scatterlist *VAR_1, void *VAR_2)
{
 struct encryptor_desc *VAR_3 = VAR_2;
 struct xdr_buf *VAR_4 = VAR_3->outbuf;
 struct page *VAR_5;
 int VAR_6 = VAR_3->fraglen + VAR_1->length;
 int VAR_7, VAR_8;
 int VAR_9;



 FUNC_0(VAR_3->fragno > 3);

 VAR_9 = VAR_3->pos - VAR_4->head[0].iov_len;
 if (VAR_9 >= 0 && VAR_9 < VAR_4->page_len) {

  int VAR_10 = (VAR_9 + VAR_4->page_base) >> VAR_0;
  VAR_5 = VAR_3->pages[VAR_10];
 } else {
  VAR_5 = FUNC_6(VAR_1);
 }
 FUNC_7(&VAR_3->infrags[VAR_3->fragno], VAR_5, VAR_1->length,
      VAR_1->offset);
 FUNC_7(&VAR_3->outfrags[VAR_3->fragno], FUNC_6(VAR_1), VAR_1->length,
      VAR_1->offset);
 VAR_3->fragno++;
 VAR_3->fraglen += VAR_1->length;
 VAR_3->pos += VAR_1->length;

 VAR_7 = VAR_6 & (FUNC_1(VAR_3->desc.tfm) - 1);
 VAR_6 -= VAR_7;

 if (VAR_6 == 0)
  return 0;

 FUNC_5(&VAR_3->infrags[VAR_3->fragno - 1]);
 FUNC_5(&VAR_3->outfrags[VAR_3->fragno - 1]);

 VAR_8 = FUNC_2(&VAR_3->desc, VAR_3->outfrags,
       VAR_3->infrags, VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_3->infrags, 4);
 FUNC_4(VAR_3->outfrags, 4);

 if (VAR_7) {
  FUNC_7(&VAR_3->outfrags[0], FUNC_6(VAR_1), VAR_7,
    VAR_1->offset + VAR_1->length - VAR_7);
  VAR_3->infrags[0] = VAR_3->outfrags[0];
  FUNC_3(&VAR_3->infrags[0], VAR_5);
  VAR_3->fragno = 1;
  VAR_3->fraglen = VAR_7;
 } else {
  VAR_3->fragno = 0;
  VAR_3->fraglen = 0;
 }
 return 0;
}
