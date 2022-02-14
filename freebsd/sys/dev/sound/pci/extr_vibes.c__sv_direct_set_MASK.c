
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sc_info {int dev; int enh_sh; int enh_st; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int) ;
 int FUNC_2 (struct sc_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_0, u_int8_t VAR_1, u_int8_t VAR_2, int VAR_3)
{
 u_int8_t VAR_4;
 FUNC_0(VAR_0->enh_st, VAR_0->enh_sh, VAR_1, VAR_2);

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 != VAR_2) {
  FUNC_1(VAR_0->dev, "sv_direct_set register 0x%02x %d != %d from line %d\n", VAR_1, VAR_4, VAR_2, VAR_3);
 }
}
