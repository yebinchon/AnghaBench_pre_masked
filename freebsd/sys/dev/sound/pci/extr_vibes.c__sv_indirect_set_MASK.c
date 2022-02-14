
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sc_info {int dev; int enh_sh; int enh_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int) ;
 int FUNC_2 (struct sc_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_6, u_int8_t VAR_7, u_int8_t VAR_8, int VAR_9)
{
 if (VAR_7 == VAR_5 || VAR_7 == VAR_4)
  VAR_7 |= VAR_2;

 FUNC_0(VAR_6->enh_st, VAR_6->enh_sh, VAR_1, VAR_7);
 FUNC_0(VAR_6->enh_st, VAR_6->enh_sh, VAR_0, VAR_8);

 VAR_7 &= ~VAR_2;
 if (VAR_7 != VAR_3) {
  u_int8_t VAR_10;
  VAR_10 = FUNC_2(VAR_6, VAR_7);
  if (VAR_10 != VAR_8) {
   FUNC_1(VAR_6->dev, "sv_indirect_set register 0x%02x %d != %d line %d\n", VAR_7, VAR_10, VAR_8, VAR_9);
  }
 }
}
