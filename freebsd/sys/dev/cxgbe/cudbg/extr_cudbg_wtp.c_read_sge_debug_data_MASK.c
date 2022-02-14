
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

__attribute__((used)) static u32 FUNC_3(struct cudbg_init *VAR_3, u32 *VAR_4)
{
 struct adapter *VAR_5 = VAR_3->adap;
 u32 VAR_6;
 int VAR_7 = 0;

 for (VAR_7 = 0; VAR_7 <= 15; VAR_7++) {
  FUNC_2(VAR_5, VAR_2, (u32)VAR_7);
  VAR_6 = FUNC_1(VAR_5, VAR_1);

  VAR_4[(VAR_7 << 1) | 1] = FUNC_0(VAR_6);
  VAR_6 = FUNC_1(VAR_5, VAR_0);

  VAR_4[(VAR_7 << 1)] = FUNC_0(VAR_6);
 }
 return 0;
}
