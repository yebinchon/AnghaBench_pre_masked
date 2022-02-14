
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * led; } ;
struct i40e_hw {int port; TYPE_1__ func_caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct i40e_hw *VAR_3, int VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6;

 if (!VAR_3->func_caps.led[VAR_4])
  return 0;

 VAR_5 = FUNC_1(VAR_3, FUNC_0(VAR_4));
 VAR_6 = (VAR_5 & VAR_0) >>
  VAR_2;




 if ((VAR_5 & VAR_1) ||
     (VAR_6 != VAR_3->port))
  return 0;

 return VAR_5;
}
