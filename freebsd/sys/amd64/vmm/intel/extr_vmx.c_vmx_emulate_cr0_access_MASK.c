
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct vmx*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct vmx *VAR_12, int VAR_13, uint64_t VAR_14)
{
 uint64_t VAR_15, VAR_16;


 if ((VAR_14 & 0xf0) != 0x00)
  return (VAR_4);

 VAR_16 = FUNC_2(VAR_12, VAR_13, (VAR_14 >> 8) & 0xf);

 FUNC_1(VAR_5, VAR_16);

 VAR_15 = VAR_16 | VAR_10;
 VAR_15 &= ~VAR_11;
 FUNC_1(VAR_7, VAR_15);

 if (VAR_16 & VAR_0) {
  uint64_t VAR_17, VAR_18;






  VAR_17 = FUNC_0(VAR_8);
  if (VAR_17 & VAR_2) {
   VAR_17 |= VAR_1;
   FUNC_1(VAR_8, VAR_17);
   VAR_18 = FUNC_0(VAR_6);
   VAR_18 |= VAR_9;
   FUNC_1(VAR_6, VAR_18);
  }
 }

 return (VAR_3);
}
