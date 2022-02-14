
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct adapter {int mta; int has_amt; scalar_t__ has_manage; struct e1000_hw hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (int ,int ) ;
 struct adapter* FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(if_ctx_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_11(VAR_1);
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 int VAR_4 = 0;


 VAR_4 = FUNC_8(VAR_1);
 if (VAR_4 != 0) {
  goto err_late;
 }

 FUNC_7(VAR_1);


 FUNC_9(VAR_2);
 VAR_3->mac.get_link_status = 1;
 FUNC_5(VAR_1);
 FUNC_1(VAR_2);


 if (VAR_2->has_manage && !VAR_2->has_amt)
  FUNC_3(VAR_2);

 FUNC_0("em_if_attach_post: end");

 return (VAR_4);

err_late:
 FUNC_6(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_10(VAR_2->mta, VAR_0);

 return (VAR_4);
}
