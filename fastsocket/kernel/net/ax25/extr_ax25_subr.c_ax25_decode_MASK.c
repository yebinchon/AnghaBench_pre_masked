
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char* data; } ;
struct TYPE_3__ {scalar_t__ modulus; } ;
typedef TYPE_1__ ax25_cb ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (struct sk_buff*,int) ;

int FUNC_1(ax25_cb *VAR_7, struct sk_buff *VAR_8, int *VAR_9, int *VAR_10, int *VAR_11)
{
 unsigned char *VAR_12;
 int VAR_13 = VAR_2;

 VAR_12 = VAR_8->data;
 *VAR_9 = *VAR_10 = *VAR_11 = 0;

 if (VAR_7->modulus == VAR_3) {
  if ((VAR_12[0] & VAR_5) == 0) {
   VAR_13 = VAR_1;
   *VAR_9 = (VAR_12[0] >> 1) & 0x07;
   *VAR_10 = (VAR_12[0] >> 5) & 0x07;
   *VAR_11 = VAR_12[0] & VAR_4;
  } else if ((VAR_12[0] & VAR_6) == 1) {
   VAR_13 = VAR_12[0] & 0x0F;
   *VAR_10 = (VAR_12[0] >> 5) & 0x07;
   *VAR_11 = VAR_12[0] & VAR_4;
  } else if ((VAR_12[0] & VAR_6) == 3) {
   VAR_13 = VAR_12[0] & ~VAR_4;
   *VAR_11 = VAR_12[0] & VAR_4;
  }
  FUNC_0(VAR_8, 1);
 } else {
  if ((VAR_12[0] & VAR_5) == 0) {
   VAR_13 = VAR_1;
   *VAR_9 = (VAR_12[0] >> 1) & 0x7F;
   *VAR_10 = (VAR_12[1] >> 1) & 0x7F;
   *VAR_11 = VAR_12[1] & VAR_0;
   FUNC_0(VAR_8, 2);
  } else if ((VAR_12[0] & VAR_6) == 1) {
   VAR_13 = VAR_12[0] & 0x0F;
   *VAR_10 = (VAR_12[1] >> 1) & 0x7F;
   *VAR_11 = VAR_12[1] & VAR_0;
   FUNC_0(VAR_8, 2);
  } else if ((VAR_12[0] & VAR_6) == 3) {
   VAR_13 = VAR_12[0] & ~VAR_4;
   *VAR_11 = VAR_12[0] & VAR_4;
   FUNC_0(VAR_8, 1);
  }
 }

 return VAR_13;
}
