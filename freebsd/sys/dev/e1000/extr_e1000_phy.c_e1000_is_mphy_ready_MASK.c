
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

bool FUNC_3(struct e1000_hw *VAR_4)
{
 u16 VAR_5 = 0;
 u32 VAR_6 = 0;
 bool VAR_7 = VAR_2;

 while (VAR_5 < 2) {
  VAR_6 = FUNC_1(VAR_4, VAR_0);
  if (VAR_6 & VAR_1) {
   FUNC_2(20);
   VAR_5++;
   continue;
  }
  VAR_7 = VAR_3;
  break;
 }

 if (!VAR_7)
  FUNC_0("ERROR READING mPHY control register, phy is busy.\n");

 return VAR_7;
}
