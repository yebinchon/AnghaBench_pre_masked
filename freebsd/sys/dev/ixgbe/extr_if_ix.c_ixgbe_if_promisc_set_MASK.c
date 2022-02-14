
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ifnet {int if_flags; } ;
struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct ifnet*) ;
 struct ifnet* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_6, int VAR_7)
{
 struct adapter *VAR_8 = FUNC_4(VAR_6);
 struct ifnet *VAR_9 = FUNC_3(VAR_6);
 u32 VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_0(&VAR_8->hw, VAR_2);
 VAR_10 &= (~VAR_4);
 if (VAR_9->if_flags & VAR_0)
  VAR_11 = VAR_5;
 else {
  VAR_11 = FUNC_5(FUNC_2(VAR_9), VAR_5);
 }
 if (VAR_11 < VAR_5)
  VAR_10 &= (~VAR_3);
 FUNC_1(&VAR_8->hw, VAR_2, VAR_10);

 if (VAR_9->if_flags & VAR_1) {
  VAR_10 |= (VAR_4 | VAR_3);
  FUNC_1(&VAR_8->hw, VAR_2, VAR_10);
 } else if (VAR_9->if_flags & VAR_0) {
  VAR_10 |= VAR_3;
  VAR_10 &= ~VAR_4;
  FUNC_1(&VAR_8->hw, VAR_2, VAR_10);
 }
 return (0);
}
