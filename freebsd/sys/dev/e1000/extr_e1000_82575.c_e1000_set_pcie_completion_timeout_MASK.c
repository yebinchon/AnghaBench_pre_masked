
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8, VAR_0);
 s32 VAR_10 = VAR_5;
 u16 VAR_11;


 if (VAR_9 & VAR_3)
  goto out;





 if (!(VAR_9 & VAR_1)) {
  VAR_9 |= VAR_2;
  goto out;
 }






 VAR_10 = FUNC_2(VAR_8, VAR_6,
       &VAR_11);
 if (VAR_10)
  goto out;

 VAR_11 |= VAR_7;

 VAR_10 = FUNC_3(VAR_8, VAR_6,
        &VAR_11);
out:

 VAR_9 &= ~VAR_4;

 FUNC_1(VAR_8, VAR_0, VAR_9);
 return VAR_10;
}
