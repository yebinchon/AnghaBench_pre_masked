
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_3__* vtable; } ;
struct TYPE_7__ {int cc; TYPE_1__ sk; } ;
typedef TYPE_2__ br_aesctr_drbg_context ;
struct TYPE_8__ {int (* run ) (TYPE_3__**,unsigned char*,int,unsigned char*,size_t) ;} ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 int FUNC_2 (TYPE_3__**,unsigned char*,int,unsigned char*,size_t) ;

void
FUNC_3(br_aesctr_drbg_context *VAR_0, void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;
 unsigned char VAR_4[12];

 VAR_3 = VAR_1;
 FUNC_1(VAR_4, 0, sizeof VAR_4);
 while (VAR_2 > 0) {
  size_t VAR_5;







  VAR_5 = VAR_2;
  if (VAR_5 > 65280) {
   VAR_5 = 65280;
  }





  if ((uint32_t)(VAR_0->cc + ((VAR_5 + 15) >> 4)) > 32768) {
   VAR_5 = (32768 - VAR_0->cc) << 4;
   if (VAR_5 > VAR_2) {
    VAR_5 = VAR_2;
   }
  }




  FUNC_1(VAR_3, 0, VAR_5);
  VAR_0->cc = VAR_0->sk.vtable->run(&VAR_0->sk.vtable,
   VAR_4, VAR_0->cc, VAR_3, VAR_5);
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;




  if (VAR_0->cc >= 32768) {
   FUNC_0(VAR_0, ((void*)0), 0);
  }
 }
}
