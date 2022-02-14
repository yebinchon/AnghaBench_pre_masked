
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 struct adapter* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(if_ctx_t VAR_7, int VAR_8)
{
 struct adapter *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10;

 FUNC_2(VAR_7);

 VAR_10 = FUNC_0(&VAR_9->hw, VAR_0);

 if (VAR_8 & VAR_5) {
  VAR_10 |= (VAR_3 | VAR_1);

  if (VAR_6)
   VAR_10 |= VAR_2;
  FUNC_1(&VAR_9->hw, VAR_0, VAR_10);
 } else if (VAR_8 & VAR_4) {
  VAR_10 |= VAR_1;
  VAR_10 &= ~VAR_3;
  FUNC_1(&VAR_9->hw, VAR_0, VAR_10);
 }
 return (0);
}
