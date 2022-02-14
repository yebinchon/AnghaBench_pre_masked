
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int ,int) ;
 int FUNC_1 (struct dsa_switch*,int ,int,int) ;
 int FUNC_2 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_1, int VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 *VAR_3 = 0;

 VAR_5 = FUNC_1(VAR_1, VAR_0, 0x1d, 0xcc00 | VAR_2);
 if (VAR_5 < 0)
  return;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 < 0)
  return;

 VAR_5 = FUNC_0(VAR_1, VAR_0, 0x1e);
 if (VAR_5 < 0)
  return;

 VAR_4 = VAR_5 << 16;

 VAR_5 = FUNC_0(VAR_1, VAR_0, 0x1f);
 if (VAR_5 < 0)
  return;

 *VAR_3 = VAR_4 | VAR_5;
}
