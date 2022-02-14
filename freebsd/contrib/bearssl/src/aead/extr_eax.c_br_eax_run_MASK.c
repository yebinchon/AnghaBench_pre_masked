
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t ptr; unsigned char* buf; int ctr; TYPE_2__** bctx; int cbcmac; } ;
typedef TYPE_1__ br_eax_context ;
struct TYPE_8__ {int (* ctr ) (TYPE_2__**,int ,unsigned int*,int) ;int (* decrypt ) (TYPE_2__**,int ,int ,unsigned char*,size_t) ;int (* encrypt ) (TYPE_2__**,int ,int ,unsigned char*,size_t) ;int (* mac ) (TYPE_2__**,int ,unsigned int*,int) ;} ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 int FUNC_2 (TYPE_2__**,int ,unsigned int*,int) ;
 int FUNC_3 (TYPE_2__**,int ,int ,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__**,int ,int ,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_2__**,int ,unsigned int*,int) ;

void
FUNC_6(br_eax_context *VAR_0, int VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5;




 if (VAR_3 == 0) {
  return;
 }

 VAR_4 = VAR_2;
 VAR_5 = VAR_0->ptr;






 if (VAR_5 != 0 && VAR_5 != 16) {



  size_t VAR_6, VAR_7;

  VAR_7 = 16 - VAR_5;
  if (VAR_3 <= VAR_7) {
   VAR_7 = VAR_3;
  }
  if (VAR_1) {
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 ++) {
    VAR_0->buf[VAR_5 + VAR_6] ^= VAR_4[VAR_6];
   }
   FUNC_0(VAR_4, VAR_0->buf + VAR_5, VAR_7);
  } else {
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 ++) {
    unsigned VAR_8, VAR_9;

    VAR_9 = VAR_0->buf[VAR_5 + VAR_6];
    VAR_8 = VAR_4[VAR_6];
    VAR_0->buf[VAR_5 + VAR_6] = VAR_8;
    VAR_4[VAR_6] = VAR_9 ^ VAR_8;
   }
  }

  if (VAR_3 <= VAR_7) {
   VAR_0->ptr = VAR_5 + VAR_7;
   return;
  }
  VAR_4 += VAR_7;
  VAR_3 -= VAR_7;
 }






 if (VAR_5 != 0) {
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac,
   VAR_0->buf, sizeof VAR_0->buf);
 }





 VAR_5 = VAR_3 & (size_t)15;
 if (VAR_5 == 0) {
  VAR_3 -= 16;
  VAR_5 = 16;
 } else {
  VAR_3 -= VAR_5;
 }
 if (VAR_1) {
  (*VAR_0->bctx)->encrypt(VAR_0->bctx, VAR_0->ctr, VAR_0->cbcmac,
   VAR_4, VAR_3);
 } else {
  (*VAR_0->bctx)->decrypt(VAR_0->bctx, VAR_0->ctr, VAR_0->cbcmac,
   VAR_4, VAR_3);
 }
 VAR_4 += VAR_3;





 FUNC_1(VAR_0->buf, 0, sizeof VAR_0->buf);
 (*VAR_0->bctx)->ctr(VAR_0->bctx, VAR_0->ctr, VAR_0->buf, sizeof VAR_0->buf);
 if (VAR_1) {
  size_t VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 ++) {
   VAR_0->buf[VAR_10] ^= VAR_4[VAR_10];
  }
  FUNC_0(VAR_4, VAR_0->buf, VAR_5);
 } else {
  size_t VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11 ++) {
   unsigned VAR_12, VAR_13;

   VAR_13 = VAR_0->buf[VAR_11];
   VAR_12 = VAR_4[VAR_11];
   VAR_0->buf[VAR_11] = VAR_12;
   VAR_4[VAR_11] = VAR_13 ^ VAR_12;
  }
 }
 VAR_0->ptr = VAR_5;
}
