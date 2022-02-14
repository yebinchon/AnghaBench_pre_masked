
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_10,
          bool VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 s32 VAR_15 = VAR_9;

 FUNC_0("ixgbe_start_mac_link_82598");


 VAR_12 = FUNC_2(VAR_10, VAR_0);
 VAR_12 |= VAR_1;
 FUNC_3(VAR_10, VAR_0, VAR_12);


 if (VAR_11) {
  if ((VAR_12 & VAR_4) ==
       VAR_2 ||
      (VAR_12 & VAR_4) ==
       VAR_3) {
   VAR_13 = 0;
   for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
    VAR_13 = FUNC_2(VAR_10, VAR_7);
    if (VAR_13 & VAR_8)
     break;
    FUNC_4(100);
   }
   if (!(VAR_13 & VAR_8)) {
    VAR_15 = VAR_6;
    FUNC_1("Autonegotiation did not complete.\n");
   }
  }
 }


 FUNC_4(50);

 return VAR_15;
}
