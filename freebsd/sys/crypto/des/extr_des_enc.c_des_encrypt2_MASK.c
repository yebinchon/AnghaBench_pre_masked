
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* des_key_schedule ;
struct TYPE_4__ {int* deslong; } ;
struct TYPE_5__ {TYPE_1__ ks; } ;
typedef int DES_LONG ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;

void FUNC_2(DES_LONG *VAR_1, des_key_schedule VAR_2, int VAR_3)
{
 DES_LONG VAR_4,VAR_5,VAR_6,VAR_7;




 int VAR_8;

 DES_LONG *VAR_9;

 VAR_5=VAR_1[0];
 VAR_4=VAR_1[1];
 VAR_5=FUNC_1(VAR_5,29)&0xffffffffL;
 VAR_4=FUNC_1(VAR_4,29)&0xffffffffL;

 VAR_9=VAR_2->ks.deslong;


 if (VAR_3)
  {
  for (VAR_8=0; VAR_8<32; VAR_8+=8)
   {
   FUNC_0(VAR_4,VAR_5,VAR_8+0);
   FUNC_0(VAR_5,VAR_4,VAR_8+2);
   FUNC_0(VAR_4,VAR_5,VAR_8+4);
   FUNC_0(VAR_5,VAR_4,VAR_8+6);
   }

  }
 else
  {
  for (VAR_8=30; VAR_8>0; VAR_8-=8)
   {
   FUNC_0(VAR_4,VAR_5,VAR_8-0);
   FUNC_0(VAR_5,VAR_4,VAR_8-2);
   FUNC_0(VAR_4,VAR_5,VAR_8-4);
   FUNC_0(VAR_5,VAR_4,VAR_8-6);
   }

  }

 VAR_1[0]=FUNC_1(VAR_4,3)&0xffffffffL;
 VAR_1[1]=FUNC_1(VAR_5,3)&0xffffffffL;
 VAR_4=VAR_5=VAR_6=VAR_7=0;
}
