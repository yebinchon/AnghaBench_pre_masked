
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* des_key_schedule ;
typedef size_t d ;
typedef size_t c ;
struct TYPE_4__ {int* deslong; } ;
struct TYPE_5__ {TYPE_1__ ks; } ;
typedef int DES_LONG ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned char const*,int) ;
 int** VAR_1 ;

void FUNC_4(const unsigned char *VAR_2, des_key_schedule VAR_3)
{
 static int VAR_4[16]={0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0};
 DES_LONG VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
 const unsigned char *VAR_10;
 DES_LONG *VAR_11;
 int VAR_12;

 VAR_11 = &VAR_3->ks.deslong[0];
 VAR_10 = VAR_2;

 FUNC_3(VAR_10,VAR_5);
 FUNC_3(VAR_10,VAR_6);




 FUNC_1 (VAR_6,VAR_5,VAR_7,4,0x0f0f0f0fL);
 FUNC_0(VAR_5,VAR_7,-2,0xcccc0000L);
 FUNC_0(VAR_6,VAR_7,-2,0xcccc0000L);
 FUNC_1 (VAR_6,VAR_5,VAR_7,1,0x55555555L);
 FUNC_1 (VAR_5,VAR_6,VAR_7,8,0x00ff00ffL);
 FUNC_1 (VAR_6,VAR_5,VAR_7,1,0x55555555L);
 VAR_6= (((VAR_6&0x000000ffL)<<16L)| (VAR_6&0x0000ff00L) |
   ((VAR_6&0x00ff0000L)>>16L)|((VAR_5&0xf0000000L)>>4L));
 VAR_5&=0x0fffffffL;

 for (VAR_12=0; VAR_12<VAR_0; VAR_12++)
 {
  if (VAR_4[VAR_12])
   { VAR_5=((VAR_5>>2L)|(VAR_5<<26L)); VAR_6=((VAR_6>>2L)|(VAR_6<<26L)); }
  else
   { VAR_5=((VAR_5>>1L)|(VAR_5<<27L)); VAR_6=((VAR_6>>1L)|(VAR_6<<27L)); }
  VAR_5&=0x0fffffffL;
  VAR_6&=0x0fffffffL;


  VAR_8= VAR_1[0][ (VAR_5 )&0x3f ]|
   VAR_1[1][((VAR_5>> 6L)&0x03)|((VAR_5>> 7L)&0x3c)]|
   VAR_1[2][((VAR_5>>13L)&0x0f)|((VAR_5>>14L)&0x30)]|
   VAR_1[3][((VAR_5>>20L)&0x01)|((VAR_5>>21L)&0x06) |
         ((VAR_5>>22L)&0x38)];
  VAR_7= VAR_1[4][ (VAR_6 )&0x3f ]|
   VAR_1[5][((VAR_6>> 7L)&0x03)|((VAR_6>> 8L)&0x3c)]|
   VAR_1[6][ (VAR_6>>15L)&0x3f ]|
   VAR_1[7][((VAR_6>>21L)&0x0f)|((VAR_6>>22L)&0x30)];


  VAR_9=((VAR_7<<16L)|(VAR_8&0x0000ffffL))&0xffffffffL;
  *(VAR_11++)=FUNC_2(VAR_9,30)&0xffffffffL;

  VAR_9=((VAR_8>>16L)|(VAR_7&0xffff0000L));
  *(VAR_11++)=FUNC_2(VAR_9,26)&0xffffffffL;
 }
}
