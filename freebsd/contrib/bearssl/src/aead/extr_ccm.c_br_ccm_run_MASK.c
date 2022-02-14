
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t ptr; unsigned int* buf; int ctr; TYPE_2__** bctx; int cbcmac; } ;
typedef TYPE_1__ br_ccm_context ;
struct TYPE_8__ {int (* ctr ) (TYPE_2__**,int ,unsigned int*,int) ;int (* encrypt ) (TYPE_2__**,int ,int ,unsigned char*,size_t) ;int (* decrypt ) (TYPE_2__**,int ,int ,unsigned char*,size_t) ;int (* mac ) (TYPE_2__**,int ,unsigned int*,int) ;} ;


 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (TYPE_2__**,int ,unsigned int*,int) ;
 int FUNC_2 (TYPE_2__**,int ,int ,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_2__**,int ,int ,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__**,int ,unsigned int*,int) ;

void
FUNC_5(br_ccm_context *VAR_0, int VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_2;






 VAR_5 = VAR_0->ptr;
 if (VAR_5 != 0) {
  size_t VAR_6;
  size_t VAR_7;

  VAR_6 = (sizeof VAR_0->buf) - VAR_5;
  if (VAR_6 > VAR_3) {
   VAR_6 = VAR_3;
  }
  if (VAR_1) {
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++) {
    unsigned VAR_8, VAR_9;

    VAR_8 = VAR_0->buf[VAR_5 + VAR_7];
    VAR_9 = VAR_4[VAR_7];
    VAR_0->buf[VAR_5 + VAR_7] = VAR_9;
    VAR_4[VAR_7] = VAR_8 ^ VAR_9;
   }
  } else {
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++) {
    unsigned VAR_10;

    VAR_10 = VAR_0->buf[VAR_5 + VAR_7] ^ VAR_4[VAR_7];
    VAR_4[VAR_7] = VAR_10;
    VAR_0->buf[VAR_5 + VAR_7] = VAR_10;
   }
  }
  VAR_4 += VAR_6;
  VAR_3 -= VAR_6;
  VAR_5 += VAR_6;
  if (VAR_5 < sizeof VAR_0->buf) {
   VAR_0->ptr = VAR_5;
   return;
  }
  (*VAR_0->bctx)->mac(VAR_0->bctx,
   VAR_0->cbcmac, VAR_0->buf, sizeof VAR_0->buf);
 }
 VAR_5 = VAR_3 & 15;
 VAR_3 -= VAR_5;
 if (VAR_1) {
  (*VAR_0->bctx)->decrypt(VAR_0->bctx, VAR_0->ctr, VAR_0->cbcmac,
   VAR_4, VAR_3);
 } else {
  (*VAR_0->bctx)->encrypt(VAR_0->bctx, VAR_0->ctr, VAR_0->cbcmac,
   VAR_4, VAR_3);
 }
 VAR_4 += VAR_3;





 if (VAR_5 != 0) {
  size_t VAR_11;

  FUNC_0(VAR_0->buf, 0, sizeof VAR_0->buf);
  (*VAR_0->bctx)->ctr(VAR_0->bctx, VAR_0->ctr,
   VAR_0->buf, sizeof VAR_0->buf);
  if (VAR_1) {
   for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11 ++) {
    unsigned VAR_12, VAR_13;

    VAR_12 = VAR_0->buf[VAR_11];
    VAR_13 = VAR_4[VAR_11];
    VAR_0->buf[VAR_11] = VAR_13;
    VAR_4[VAR_11] = VAR_12 ^ VAR_13;
   }
  } else {
   for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11 ++) {
    unsigned VAR_14;

    VAR_14 = VAR_0->buf[VAR_11] ^ VAR_4[VAR_11];
    VAR_4[VAR_11] = VAR_14;
    VAR_0->buf[VAR_11] = VAR_14;
   }
  }
 }
 VAR_0->ptr = VAR_5;
}
