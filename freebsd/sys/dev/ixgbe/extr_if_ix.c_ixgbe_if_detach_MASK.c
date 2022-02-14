
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int mta; int hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(if_ctx_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_6(VAR_4);
 device_t VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;

 FUNC_0("ixgbe_detach: begin");

 if (FUNC_8(VAR_6) != 0) {
  FUNC_3(VAR_6, "SR-IOV in use; detach first.\n");
  return (VAR_0);
 }

 FUNC_9(VAR_4);


 VAR_7 = FUNC_1(&VAR_5->hw, VAR_1);
 VAR_7 &= ~VAR_2;
 FUNC_2(&VAR_5->hw, VAR_1, VAR_7);

 FUNC_7(VAR_4);
 FUNC_4(VAR_5->mta, VAR_3);

 return (0);
}
