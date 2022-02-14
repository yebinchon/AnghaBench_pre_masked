
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_int ;
struct tdfx_softc {int dev; } ;
struct tdfx_pio_data {int device; int port; int size; int value; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ,int*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(u_int VAR_4, struct tdfx_pio_data *VAR_5)
{


 u_int8_t VAR_6;
 u_int16_t VAR_7;
 u_int32_t VAR_8;


 u_int32_t VAR_9, VAR_10, VAR_11;
 struct tdfx_softc* VAR_12 = ((void*)0);


 if((VAR_5 == ((void*)0)) || (VAR_5->device >= (VAR_2 &
     0xf))) {



  return -VAR_0;
 }

 VAR_12 = (struct tdfx_softc*)FUNC_1(VAR_3,
   VAR_5->device);
 if(VAR_12 == ((void*)0)) return -VAR_1;






 switch(VAR_5->port) {
  case 132:
   if(VAR_5->size != 2) return -VAR_0;
   break;
  case 131:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  case 130:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  case 129:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  case 128:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  default:
   return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_12->dev, VAR_5->port & ~3, 4);



 switch (VAR_5->size) {
  case 1:
   FUNC_0(VAR_5->value, &VAR_6, 1);
   VAR_10 = VAR_6 << (8 * (VAR_5->port & 0x3));
   VAR_11 = 0xff << (8 * (VAR_5->port & 0x3));
   break;
  case 2:
   FUNC_0(VAR_5->value, &VAR_7, 2);
   VAR_10 = VAR_7 << (8 * (VAR_5->port & 0x3));
   VAR_11 = 0xffff << (8 * (VAR_5->port & 0x3));
   break;
  case 4:
   FUNC_0(VAR_5->value, &VAR_8, 4);
   VAR_10 = VAR_8;
   VAR_11 = ~0;
   break;
  default:
   return -VAR_0;
 }

 VAR_9 = (VAR_9 & ~VAR_11) | VAR_10;
 FUNC_3(VAR_12->dev, VAR_5->port & ~3, VAR_9, 4);

 return 0;
}
