
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; unsigned char* L2; int* buf; unsigned char* L4; int cbcmac; TYPE_2__** bctx; } ;
typedef TYPE_1__ br_eax_context ;
struct TYPE_5__ {int (* mac ) (TYPE_2__**,int ,unsigned char*,int) ;} ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__**,int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2(br_eax_context *VAR_0)
{
 unsigned char *VAR_1;
 size_t VAR_2, VAR_3;

 VAR_2 = VAR_0->ptr;
 if (VAR_2 == 16) {
  VAR_1 = VAR_0->L2;
 } else {
  VAR_0->buf[VAR_2 ++] = 0x80;
  FUNC_0(*(VAR_0->buf + VAR_2), 0x00, 16 - VAR_2);
  VAR_1 = VAR_0->L4;
 }
 for (VAR_3 = 0; VAR_3 < sizeof VAR_0->buf; VAR_3 ++) {
  VAR_0->buf[VAR_3] ^= VAR_1[VAR_3];
 }
 (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_0->cbcmac, VAR_0->buf, sizeof VAR_0->buf);
}
