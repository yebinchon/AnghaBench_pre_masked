
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int api_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int*,int*,int) ;

int FUNC_1(struct ixgbe_hw *VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7[3];


 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_5;
 VAR_7[2] = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_7, VAR_7, 3);
 if (!VAR_6) {
  VAR_7[0] &= ~VAR_3;


  if (VAR_7[0] == (VAR_1 | VAR_2)) {
   VAR_4->api_version = VAR_5;
   return 0;
  }

  VAR_6 = VAR_0;
 }

 return VAR_6;
}
