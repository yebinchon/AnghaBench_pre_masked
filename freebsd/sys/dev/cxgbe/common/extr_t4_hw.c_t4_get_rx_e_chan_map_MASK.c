
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct adapter *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(FUNC_2(VAR_2, VAR_0));

 if (VAR_4 == 0)
  return VAR_3 == 0 ? 0xf : 0;
 if (VAR_4 == 1 && FUNC_1(VAR_2) <= VAR_1)
  return VAR_3 < 2 ? (3 << (2 * VAR_3)) : 0;
 return 1 << VAR_3;
}
