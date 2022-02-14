
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = -VAR_0;
 int VAR_5 = 10;

 FUNC_0("e1000_obtain_mbx_lock_vf");

 do {

  FUNC_2(VAR_3, FUNC_1(0), VAR_2);


  if (FUNC_3(VAR_3) & VAR_2) {
   VAR_4 = VAR_1;
   break;
  }
  FUNC_4(1000);
 } while (VAR_5-- > 0);

 return VAR_4;
}
