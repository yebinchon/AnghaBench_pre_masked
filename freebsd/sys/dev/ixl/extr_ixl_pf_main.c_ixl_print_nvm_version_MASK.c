
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct i40e_hw*,struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 () ;

void
FUNC_6(struct ixl_pf *VAR_0)
{
 struct i40e_hw *VAR_1 = &VAR_0->hw;
 device_t VAR_2 = VAR_0->dev;
 struct sbuf *VAR_3;

 VAR_3 = FUNC_5();
 FUNC_1(VAR_1, VAR_3);
 FUNC_4(VAR_3);
 FUNC_0(VAR_2, "%s\n", FUNC_2(VAR_3));
 FUNC_3(VAR_3);
}
