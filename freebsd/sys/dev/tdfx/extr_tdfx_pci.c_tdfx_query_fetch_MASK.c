
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_int ;
struct tdfx_softc {int dev; int addr1; int addr0; int type; int vendor; } ;
struct tdfx_pio_data {scalar_t__ device; int port; int size; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(u_int VAR_4, struct tdfx_pio_data *VAR_5)
{


 u_int8_t VAR_6;
 u_int16_t VAR_7;
 u_int32_t VAR_8;
 struct tdfx_softc* VAR_9 = ((void*)0);




 if((VAR_5 == ((void*)0)) ||(VAR_2 <= VAR_5->device) ||
   (VAR_5->device < 0)) {



  return -VAR_0;
 }

 VAR_9 = (struct tdfx_softc*)FUNC_1(VAR_3,
   VAR_5->device);

 if(VAR_9 == ((void*)0)) return -VAR_1;




 switch(VAR_5->port) {
  case 130:
   if(VAR_5->size != 2) return -VAR_0;
   FUNC_0(&VAR_9->vendor, VAR_5->value, VAR_5->size);
   return 0;
  case 135:
   if(VAR_5->size != 2) return -VAR_0;
   FUNC_0(&VAR_9->type, VAR_5->value, VAR_5->size);
   return 0;
  case 137:
   if(VAR_5->size != 4) return -VAR_0;
   FUNC_0(&VAR_9->addr0, VAR_5->value, VAR_5->size);
   return 0;
  case 136:
   if(VAR_5->size != 4) return -VAR_0;
   FUNC_0(&VAR_9->addr1, VAR_5->value, VAR_5->size);
   return 0;
  case 132:
   if(VAR_5->size != 1) return -VAR_0;
   break;
  case 134:
   if(VAR_5->size != 2) return -VAR_0;
   break;
  case 133:
   if(VAR_5->size != 2) return -VAR_0;
   break;
  case 129:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  case 131:
   if(VAR_5->size != 1) return -VAR_0;
   break;
  case 128:
   if(VAR_5->size != 4) return -VAR_0;
   break;
  default:
   return -VAR_0;
 }



 switch(VAR_5->size) {
  case 1:
   VAR_6 = FUNC_2(VAR_9[VAR_5->device].dev,
     VAR_5->port, 1);
   FUNC_0(&VAR_6, VAR_5->value, 1);
   break;
  case 2:
   VAR_7 = FUNC_2(VAR_9[VAR_5->device].dev,
     VAR_5->port, 2);
   FUNC_0(&VAR_7, VAR_5->value, 2);
   break;
  case 4:
   VAR_8 = FUNC_2(VAR_9[VAR_5->device].dev,
     VAR_5->port, 4);
   FUNC_0(&VAR_8, VAR_5->value, 4);
   break;
  default:
   return -VAR_0;
 }
 return 0;
}
