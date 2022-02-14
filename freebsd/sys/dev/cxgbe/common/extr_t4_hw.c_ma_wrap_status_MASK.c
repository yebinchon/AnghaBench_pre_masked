
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct adapter *VAR_1, int VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 FUNC_0(VAR_1,
     "MA address wrap-around error by client %u to address %#x\n",
     FUNC_2(VAR_4), FUNC_1(VAR_4) << 4);
 FUNC_4(VAR_1, VAR_0, VAR_4);

 return (0);
}
