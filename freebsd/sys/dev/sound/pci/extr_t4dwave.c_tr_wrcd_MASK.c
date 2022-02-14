
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_info {int type; int rev; int lock; } ;
typedef int kobj_t ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tr_info*,int,int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (struct tr_info*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(kobj_t VAR_9, void *VAR_10, int VAR_11, u_int32_t VAR_12)
{
 struct tr_info *VAR_13 = (struct tr_info *)VAR_10;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 switch (VAR_13->type) {
 case 130:
  VAR_16=VAR_1;
  VAR_17=VAR_0;
  break;
 case 131:
 case 129:
  VAR_16=VAR_3;
  VAR_17=VAR_2;
  break;
 case 128:
  VAR_16=VAR_6;
  VAR_17=VAR_4 | ((VAR_11 & 0x100)? VAR_5 : 0);
  break;
 default:
  FUNC_0("!!! tr_wrcd defaulted !!!");
  return -1;
 }

 VAR_14 = 0;

 VAR_11 &= 0x7f;



 VAR_15=VAR_17;
 FUNC_1(VAR_13->lock);
 if (VAR_13->type == 131) {
  VAR_15 = VAR_17;
  for (VAR_14 = VAR_8; (VAR_14 > 0) && (VAR_15 & VAR_17); VAR_14--)
   VAR_15 = FUNC_3(VAR_13, VAR_16, 4);
  if (VAR_14 > 0) {
   u_int32_t VAR_18, VAR_19;
   VAR_18 = FUNC_3(VAR_13, 0xc8, 4);
   VAR_19 = FUNC_3(VAR_13, 0xc8, 4);
   for (VAR_14 = VAR_8; (VAR_14 > 0) && (VAR_18 == VAR_19);
     VAR_14--)
    VAR_19 = FUNC_3(VAR_13, 0xc8, 4);
  }
 }
 if (VAR_13->type != 131 || VAR_14 > 0) {
  for (VAR_14=VAR_8; (VAR_14>0) && (VAR_15 & VAR_17); VAR_14--)
   VAR_15=FUNC_3(VAR_13, VAR_16, 4);
  if (VAR_13->type == 131 && VAR_13->rev > 0x01)
         VAR_17 |= 0x0100;
  FUNC_5(VAR_13, VAR_16, (VAR_12 << VAR_7) | VAR_11 | VAR_17, 4);
 }



 FUNC_2(VAR_13->lock);
 if (VAR_14==0) FUNC_0("codec timeout writing %x, data %x\n", VAR_11, VAR_12);
 return (VAR_14 > 0)? 0 : -1;
}
