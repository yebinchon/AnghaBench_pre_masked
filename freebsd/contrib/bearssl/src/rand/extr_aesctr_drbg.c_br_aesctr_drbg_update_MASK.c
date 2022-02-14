
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* vtable; } ;
struct TYPE_10__ {scalar_t__ cc; TYPE_1__ sk; } ;
typedef TYPE_2__ br_aesctr_drbg_context ;
struct TYPE_11__ {int (* init ) (TYPE_3__**,unsigned char*,int) ;int (* run ) (TYPE_3__**,unsigned char*,int,unsigned char*,int) ;} ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (TYPE_3__**,unsigned char*,int,unsigned char*,int) ;
 int FUNC_4 (TYPE_3__**,unsigned char*,int) ;
 int FUNC_5 (TYPE_3__**,unsigned char*,int,unsigned char*,int) ;
 int FUNC_6 (TYPE_3__**,unsigned char*,int,unsigned char*,int) ;
 int FUNC_7 (TYPE_3__**,unsigned char*,int) ;

void
FUNC_8(br_aesctr_drbg_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned char VAR_3[16], VAR_4[12];
 unsigned char VAR_5[16], VAR_6[16];
 int VAR_7;





 FUNC_2(VAR_4, 0xFF, sizeof VAR_4);
 FUNC_2(VAR_3, 0, 16);
 VAR_0->sk.vtable->run(&VAR_0->sk.vtable, VAR_4, 0xFFFFFFFF, VAR_3, 16);




 FUNC_2(VAR_5, 0xB6, sizeof VAR_5);
 FUNC_2(VAR_6, 0x5A, sizeof VAR_6);





 VAR_7 = 1;
 for (;;) {
  unsigned char VAR_8[32];
  unsigned char VAR_9[16];




  FUNC_1(VAR_8, VAR_6, 16);
  if (VAR_7) {
   FUNC_1(VAR_8 + 16, VAR_3, 16);
   VAR_7 = 0;
  } else {
   size_t VAR_10;

   if (VAR_2 == 0) {
    break;
   }
   VAR_10 = VAR_2 < 16 ? VAR_2 : 16;
   FUNC_1(VAR_8 + 16, VAR_1, VAR_10);
   FUNC_2(VAR_8 + 16 + VAR_10, 0, 16 - VAR_10);
   VAR_1 = (const unsigned char *)VAR_1 + VAR_10;
   VAR_2 -= VAR_10;
  }
  VAR_0->sk.vtable->init(&VAR_0->sk.vtable, VAR_8, 32);




  FUNC_1(VAR_4, VAR_5, 12);
  FUNC_1(VAR_9, VAR_5, 16);
  VAR_0->sk.vtable->run(&VAR_0->sk.vtable, VAR_4,
   FUNC_0(VAR_5 + 12), VAR_9, 16);
  VAR_4[0] ^= 0x01;
  FUNC_1(VAR_6, VAR_5, 16);
  VAR_6[0] ^= 0x01;
  VAR_0->sk.vtable->run(&VAR_0->sk.vtable, VAR_4,
   FUNC_0(VAR_5 + 12), VAR_6, 16);
  FUNC_1(VAR_5, VAR_9, 16);
 }





 VAR_0->sk.vtable->init(&VAR_0->sk.vtable, VAR_6, 16);
 VAR_0->cc = 0;
}
