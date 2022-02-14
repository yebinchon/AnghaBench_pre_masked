
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;






 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;


 unsigned char VAR_5 ;
 unsigned char VAR_6 ;

int FUNC_0(struct sk_buff *VAR_7, int *VAR_8, int *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12)
{
 unsigned char *VAR_13;

 VAR_13 = VAR_7->data;

 *VAR_8 = *VAR_9 = *VAR_10 = *VAR_11 = *VAR_12 = 0;

 switch (VAR_13[2]) {
 case 132:
 case 133:
 case 130:
 case 131:
 case 128:
 case 129:
  return VAR_13[2];
 default:
  break;
 }

 if ((VAR_13[2] & 0x1F) == VAR_6 ||
     (VAR_13[2] & 0x1F) == VAR_5) {
  *VAR_9 = (VAR_13[2] >> 5) & 0x07;
  return VAR_13[2] & 0x1F;
 }

 if ((VAR_13[2] & 0x01) == VAR_0) {
  *VAR_10 = (VAR_13[0] & VAR_4) == VAR_4;
  *VAR_11 = (VAR_13[0] & VAR_1) == VAR_1;
  *VAR_12 = (VAR_13[2] & VAR_3) == VAR_3;
  *VAR_9 = (VAR_13[2] >> 5) & 0x07;
  *VAR_8 = (VAR_13[2] >> 1) & 0x07;
  return VAR_0;
 }

 return VAR_2;
}
