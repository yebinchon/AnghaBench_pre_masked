
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ifnet {int dummy; } ;
struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 struct ifnet* FUNC_4 (int ) ;
 struct adapter* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_6)
{
 struct adapter *VAR_7 = FUNC_5(VAR_6);
 struct ifnet *VAR_8 = FUNC_4(VAR_6);
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_0(&VAR_7->hw, VAR_0);
 VAR_9 &= (~VAR_3);
 if (FUNC_2(VAR_8) & VAR_4)
  VAR_10 = VAR_5;
 else
  VAR_10 = FUNC_3(VAR_8);

 if (VAR_10 < VAR_5)
  VAR_9 &= (~VAR_1);
 VAR_9 &= (~VAR_2);
 FUNC_1(&VAR_7->hw, VAR_0, VAR_9);
}
