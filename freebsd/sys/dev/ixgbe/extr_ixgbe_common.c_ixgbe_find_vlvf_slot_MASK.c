
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;

s32 FUNC_3(struct ixgbe_hw *VAR_4, u32 VAR_5, bool VAR_6)
{
 s32 VAR_7, VAR_8;
 u32 VAR_9;


 if (VAR_5 == 0)
  return 0;





 VAR_8 = VAR_6 ? VAR_1 : 0;


 VAR_5 |= VAR_3;






 for (VAR_7 = VAR_2; --VAR_7;) {
  VAR_9 = FUNC_1(VAR_4, FUNC_2(VAR_7));
  if (VAR_9 == VAR_5)
   return VAR_7;
  if (!VAR_8 && !VAR_9)
   VAR_8 = VAR_7;
 }




 if (!VAR_8)
  FUNC_0(VAR_0, "No space in VLVF.\n");

 return VAR_8 ? VAR_8 : VAR_1;
}
