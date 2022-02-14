
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connected; } ;
typedef TYPE_1__ isc_socket_t ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*,size_t) ;

int
FUNC_1(isc_socket_t *VAR_15, int VAR_16, int *VAR_17,
   char *VAR_18, size_t VAR_19) {

 int VAR_20;
 switch (VAR_16) {
 case 138:
  *VAR_17 = VAR_5;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 130:
 case 146:
  *VAR_17 = VAR_11;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 144:
 case 148:
 case 133:
  *VAR_17 = VAR_8;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 132:
  *VAR_17 = VAR_10;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 134:
  *VAR_17 = VAR_7;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 142:
  *VAR_17 = VAR_12;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 137:
 case 131:
 case 139:
 case 135:
  *VAR_17 = VAR_4;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 128:
  *VAR_17 = VAR_14;
  if (VAR_15->connected)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_1;
  break;
 case 145:
 case 149:
 case 143:
  *VAR_17 = VAR_4;
  VAR_20 = VAR_0;
  break;
 case 129:
  *VAR_17 = VAR_13;
  VAR_20 = VAR_0;
  break;
 case 140:
  *VAR_17 = VAR_6;
  VAR_20 = VAR_0;
  break;
 case 141:
  *VAR_17 = VAR_2;
  VAR_20 = VAR_0;
  break;
 case 136:
  *VAR_17 = VAR_3;
  VAR_20 = VAR_0;
  break;
 case 147:
  *VAR_17 = VAR_10;
  VAR_20 = VAR_0;
  break;
 default:
  *VAR_17 = VAR_9;
  VAR_20 = VAR_0;
  break;
 }
 if (VAR_20 == VAR_0) {
  FUNC_0(VAR_16, VAR_18, VAR_19);
 }
 return (VAR_20);
}
