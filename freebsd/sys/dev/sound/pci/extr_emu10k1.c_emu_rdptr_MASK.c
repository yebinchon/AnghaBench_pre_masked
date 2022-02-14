
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int addrmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct sc_info *VAR_3, int VAR_4, int VAR_5)
{
 u_int32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = ((VAR_5 << 16) & VAR_3->addrmask) | (VAR_4 & VAR_2);
 FUNC_1(VAR_3, VAR_1, VAR_6, 4);
 VAR_7 = FUNC_0(VAR_3, VAR_0, 4);
 if (VAR_5 & 0xff000000) {
  VAR_9 = (VAR_5 >> 24) & 0x3f;
  VAR_10 = (VAR_5 >> 16) & 0x1f;
  VAR_8 = ((1 << VAR_9) - 1) << VAR_10;
  VAR_7 &= VAR_8;
  VAR_7 >>= VAR_10;
 }
 return VAR_7;
}
