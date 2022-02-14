
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_u_common {int hgenerator; } ;


 scalar_t__ FUNC_0 (struct tc_u_common*,int) ;

__attribute__((used)) static u32 FUNC_1(struct tc_u_common *VAR_0)
{
 int VAR_1 = 0x800;

 do {
  if (++VAR_0->hgenerator == 0x7FF)
   VAR_0->hgenerator = 1;
 } while (--VAR_1>0 && FUNC_0(VAR_0, (VAR_0->hgenerator|0x800)<<20));

 return VAR_1 > 0 ? (VAR_0->hgenerator|0x800)<<20 : 0;
}
