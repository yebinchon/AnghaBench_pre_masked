
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_11)
{
 u32 VAR_12;
 s32 VAR_13;
 u16 VAR_14;

 FUNC_0("e1000_update_nvm_checksum_82571");

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13)
  return VAR_13;




 if (VAR_11->nvm.type != VAR_10)
  return VAR_9;


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  FUNC_5(1);
  if (!(FUNC_1(VAR_11, VAR_0) & VAR_1))
   break;
 }

 if (VAR_14 == VAR_3)
  return -VAR_2;


 if ((FUNC_1(VAR_11, VAR_4) & 0xFF00) == VAR_8) {



  FUNC_3(VAR_11, VAR_5, VAR_7);
  FUNC_2(VAR_11);
  FUNC_3(VAR_11, VAR_5, VAR_6);
 }


 VAR_12 = FUNC_1(VAR_11, VAR_0) | VAR_1;
 FUNC_3(VAR_11, VAR_0, VAR_12);

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  FUNC_5(1);
  if (!(FUNC_1(VAR_11, VAR_0) & VAR_1))
   break;
 }

 if (VAR_14 == VAR_3)
  return -VAR_2;

 return VAR_9;
}
