
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {size_t tag_len; unsigned char* cbcmac; int* buf; int ptr; unsigned int* ctr; unsigned char* tagmask; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_ccm_context ;
struct TYPE_6__ {int (* ctr ) (TYPE_2__**,unsigned char*,unsigned char*,int) ;int (* mac ) (TYPE_2__**,unsigned char*,unsigned char*,int) ;} ;


 int FUNC_0 (int*,unsigned int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (unsigned char*,void const*,size_t) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (TYPE_2__**,unsigned char*,unsigned char*,int) ;
 int FUNC_6 (TYPE_2__**,unsigned char*,unsigned char*,int) ;

int
FUNC_7(br_ccm_context *VAR_0, const void *VAR_1, size_t VAR_2,
 uint64_t VAR_3, uint64_t VAR_4, size_t VAR_5)
{
 unsigned char VAR_6[16];
 unsigned VAR_7, VAR_8;

 if (VAR_2 < 7 || VAR_2 > 13) {
  return 0;
 }
 if (VAR_5 < 4 || VAR_5 > 16 || (VAR_5 & 1) != 0) {
  return 0;
 }
 VAR_8 = 15 - (unsigned)VAR_2;
 VAR_0->tag_len = VAR_5;




 VAR_6[0] = (VAR_3 > 0 ? 0x40 : 0x00)
  | (((unsigned)VAR_5 - 2) << 2)
  | (VAR_8 - 1);
 FUNC_3(VAR_6 + 1, VAR_1, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 ++) {
  VAR_6[15 - VAR_7] = (unsigned char)VAR_4;
  VAR_4 >>= 8;
 }
 if (VAR_4 != 0) {





  return 0;
 }




 FUNC_4(VAR_0->cbcmac, 0, sizeof VAR_0->cbcmac);
 (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac, VAR_6, sizeof VAR_6);




 if ((VAR_3 >> 32) != 0) {
  VAR_0->buf[0] = 0xFF;
  VAR_0->buf[1] = 0xFF;
  FUNC_2(VAR_0->buf + 2, VAR_3);
  VAR_0->ptr = 10;
 } else if (VAR_3 >= 0xFF00) {
  VAR_0->buf[0] = 0xFF;
  VAR_0->buf[1] = 0xFE;
  FUNC_1(VAR_0->buf + 2, (uint32_t)VAR_3);
  VAR_0->ptr = 6;
 } else if (VAR_3 > 0) {
  FUNC_0(VAR_0->buf, (unsigned)VAR_3);
  VAR_0->ptr = 2;
 } else {
  VAR_0->ptr = 0;
 }




 VAR_0->ctr[0] = VAR_8 - 1;
 FUNC_3(VAR_0->ctr + 1, VAR_1, VAR_2);
 FUNC_4(VAR_0->ctr + 1 + VAR_2, 0, VAR_8);
 FUNC_4(VAR_0->tagmask, 0, sizeof VAR_0->tagmask);
 (*VAR_0->bctx)->ctr(VAR_0->bctx, VAR_0->ctr,
  VAR_0->tagmask, sizeof VAR_0->tagmask);

 return 1;
}
