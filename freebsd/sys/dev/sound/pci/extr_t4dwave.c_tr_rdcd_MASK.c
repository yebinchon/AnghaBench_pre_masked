
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
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
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct tr_info*,int,int) ;
 int FUNC_4 (struct tr_info*,int,int,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_10, void *VAR_11, int VAR_12)
{
 struct tr_info *VAR_13 = (struct tr_info *)VAR_11;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 switch (VAR_13->type) {
 case 130:
  VAR_16=VAR_1;
  VAR_17=VAR_0;
  break;
 case 131:
  if (VAR_13->rev > 0x01)
    VAR_16=VAR_4;
  else
    VAR_16=VAR_3;
  VAR_17=VAR_2;
  break;
 case 129:
  VAR_16=VAR_3;
  VAR_17=VAR_2;
  break;
 case 128:
  VAR_16=(VAR_12 & 0x100)? VAR_7 : VAR_6;
  VAR_17=VAR_5;
  break;
 default:
  FUNC_0("!!! tr_rdcd defaulted !!!\n");
  return -1;
 }

 VAR_14 = VAR_15 = 0;

 VAR_12 &= 0x7f;
 FUNC_1(VAR_13->lock);
 if (VAR_13->type == 131) {
  u_int32_t VAR_18, VAR_19;
  VAR_15 = VAR_17;
  for (VAR_14 = VAR_9; (VAR_14 > 0) && (VAR_15 & VAR_17); VAR_14--)
   VAR_15 = FUNC_3(VAR_13, VAR_16, 4);
  if (VAR_14 > 0) {
   VAR_18 = FUNC_3(VAR_13, 0xc8, 4);
   VAR_19 = FUNC_3(VAR_13, 0xc8, 4);
   for (VAR_14 = VAR_9; (VAR_14 > 0) && (VAR_18 == VAR_19);
     VAR_14--)
    VAR_19 = FUNC_3(VAR_13, 0xc8, 4);
  }
 }
 if (VAR_13->type != 131 || VAR_14 > 0) {
  FUNC_4(VAR_13, VAR_16, VAR_12 | VAR_17, 4);
  VAR_15=VAR_17;
  for (VAR_14=VAR_9; (VAR_14 > 0) && (VAR_15 & VAR_17); VAR_14--)
          VAR_15=FUNC_3(VAR_13, VAR_16, 4);
 }
 FUNC_2(VAR_13->lock);
 if (VAR_14 == 0) FUNC_0("codec timeout during read of register %x\n", VAR_12);
 return (VAR_15 >> VAR_8) & 0xffff;
}
